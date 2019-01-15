#include <stdio.h>

/*
 * Determing whether arguments can be added without overflow
 * */
int uadd_ok(unsigned x, unsigned y){
	unsigned result = x + y;
	if(result < x)
		return -1;
	else
		return 1;
}
