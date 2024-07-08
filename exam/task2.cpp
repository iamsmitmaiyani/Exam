#include<stdio.h>
#define maxsize 100
int main()
{
	int arr[maxsize];
	int n,i;
	int max;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("The largest element in the array is : %d\n",max);
}