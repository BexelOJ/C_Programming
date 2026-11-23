#!/usr/bin/perl

use strict;
use warnings;

my @files = glob("c_20261120_*.c");

foreach my $old_file (@files)
{
    my $new_file = $old_file;
    $new_file =~ s/20261120/20261122/;

    if (rename($old_file, $new_file))
    {
        print "Renamed: $old_file -> $new_file\n";
    }
    else
    {
        warn "Failed to rename $old_file: $!\n";
    }
}

print "\nTotal files found: " . scalar(@files) . "\n";


