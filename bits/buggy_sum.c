#include <stdio.h>

float sum_elements(float a[], unsigned length){
	int i;
	float result = 0;

	for(i= 0; i < length; i++)
		result += a[i];

	return result;
}

int main()
{
	float a[0];
	float result = sum_elements(a, 0);
	printf("The result is %f", result);
}
