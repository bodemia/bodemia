#!/usr/bin/env perl
use strict;
my $file;
my $wd;
my %count;
my $w;
if (@ARGV)
{
$file = $ARGV[0];
}
else
{
die "Usage : freqcount.pl FILE\n";
}
open(FILE, $file);
open(RESULTS, ">freqcount.txt");

while(<FILE>)
{
chomp;
tr/A-Z/a-z/;
tr/.,:;!?"(){}//d;
foreach $wd (split)
{
$count{$wd}++;
}
}

print RESULTS "Word\t\tFrequency\n"; #Writing to newly opened file

foreach $w (sort by_number keys%count)
#using our by_number function
{
write(RESULTS);
}
close(RESULTS);

sub by_number
{
$count{$b} <=> $count{$a} || length($b) <=> length($a);
}

format RESULTS=
@<<<<<<<<<<<<<<< @>>
$w,$count{$w}
.
