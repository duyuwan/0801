#include<stdio.h>
int main()
{
	int a[8] = {10,22,3,-4,5,23,79,28};
	int i = 0;
	int j = 0;
	int k = 0;
	int temp;	
	for(i = 0; i < 8; i++)
	printf("%5d",a[i]);

	printf("\n");


	sort(a, 8);

	for(i = 0; i < 8; i++)
	printf("%5d",a[i]);
	printf("\n");

	return 0;
}
