#!/usr/local/bin/perl
# Convert list of decimal numbers into hex

for($i = 0; $i < @ARGV; $i++){
	printf("%d\t=\t0x%x\n", $ARGV[$i], $ARGV[$i]);
}