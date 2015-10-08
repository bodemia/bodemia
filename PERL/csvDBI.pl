# yum install perl-DBD-CSV
# !/usr/bin/env perl

use strict;
use warnings;
use DBI;

my $dbh = DBI->connect("DBI:CSV:f_dir=.;csv_eol=\n;");

$dbh->{'csv_tables'}->{'Indian_capitals.csv'} = {
'col_names' => ["state", "admin_c","legis_c","year","old_c"]};

my $sth = $dbh->prepare("SELECT * FROM Indian_capitals.csv WHERE old_c NOT LIKE '—'");

$sth->execute();

print ("\nThe list of states which had their capitals changed:\n");

while (my $row = $sth->fetchrow_hashref)
{
print($row->{'state'},"\n");
}

$sth->finish();
