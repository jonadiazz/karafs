#!/usr/bin/perl

use strict;
use warnings;

my $ABn = <STDIN>;

my ($A, $B, $n ) = split ( ' ', $ABn );
chomp( $n );
my @line;

my $based_zero = 0;

while ( $n-- > 0 )   {
   $line[ $based_zero++ ] = <>;
}

my @s;
my $l = my $t = my $m = my $c = -1;

foreach( @line ) {
   ( $l, $t, $m ) = split ( ' ', $_ );

   my $passes = 0, $c = -1;

   if( $m % 2 == 1 ) {
      $m++;
   }

   while( $passes < $m )  {
      $s[ $l+$passes ] = $B*( $l + $passes - 1 ) + $A - $t;

      if( $s[ $l+$passes ] < 1 && ( $l+$passes ) < $t )   {
         $c = $l+$passes;
      }
      $passes++;
   }

   print "$c\n";
}


