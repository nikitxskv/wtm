#use Data::Dumper;
use DDP;
open(my $in, "<", "data.txt");
my $B;
my $j=0;
while(<$in>)
{
    @F=split(":");
    for(my $i=0;$F[$i]!="/n";$i++)
    {
	$B[$j][$i]=$F[$i];
    }
    print "$B[$j][0]\n";
    $j++;
}
p @B;
#print Dumper(@B);