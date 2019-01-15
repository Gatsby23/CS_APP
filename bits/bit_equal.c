#include <stdio.h>
//#include <byte_representation.h>

int equal_operation(int x, int y){
	if(!(x ^ y))
		return 1;
	else
		return 0;
}

int main()
{
	int x = 0x41;
	int y = 0x55;
	int result = equal_operation(x, y);
	printf("The x and y is %d", result);
}
