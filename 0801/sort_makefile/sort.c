void sort(int a[], int n)
{
	int i,j,k;
	int temp;

	for(i = 0; i < n; i++)
	{
	k = i;
	for(j = 0; j < n; j++)
	{	
		if(a[j] < a[k])
		{
		temp = a[j];
		a[j] = a[k];
		a[k] = temp;
		}
       	}
	}
}
