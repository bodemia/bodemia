#!/usr/bin/env perl

print "Enter you name and press return:";
$name=<STDIN>;
#read the data

chomp($name);
#remove the newline

print "\nEnter your birth year and press return:";
$byear=<STDIN>;
chomp($byear);

my ($sec, $min, $hour, $mday, $mon, $year, $wday, $yday, $dst) = localtime time;

$age=($year + 1900) - $byear; #the year starts from 1900 according to localtime

print "\nHello, $name!\n";
print "You are $age years old.\n";
