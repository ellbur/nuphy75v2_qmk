#!/usr/bin/env rakudo

#vim: ft=raku

my $here = $*PROGRAM-NAME.IO.parent;

my $in-file = $here.add('./vanilla-layout.c');

my %row-table;
my %col-table;

my @lines = $in-file.lines;
my $state = 1;
my $row = Nil;
for @lines -> $line {
    if $state == 1 {
        if $line ~~ /.*«const».*«vanilla_layout».*/ {
            $state = 2;
            $row = 0;
        }
    }
    elsif $state == 2 {
        if $line ~~ /\}\;/ {
            last;
        }
        
        if $line ~~ /\s*\{\s*((<[\w\(\)]>+)\,\s*)+\,?\s*\}\,?\s*/ {
            my $col = 0;
            for @0 -> $thing {
                my $key-name = $thing[0].Str;
                if $key-name ne '0' {
                    %row-table{$key-name} = $row;
                    %col-table{$key-name} = $col;
                    $col += 1;
                }
            }
            $row += 1;
        }
        else {
            say "no";
        }
    }
}

say 'const __flash uint8_t vanilla_layout_inv_row[] = {';
for %row-table.kv -> $key, $row {
    say "  [$key] = $row,"
}
say '};';
say '';

say 'const __flash uint8_t vanilla_layout_inv_col[] = {';
for %col-table.kv -> $key, $col {
    say "  [$key] = $col,"
}
say '};';

