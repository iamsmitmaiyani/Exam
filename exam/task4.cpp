#include<stdio.h>
#define maxsize 100
void square(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		arr[i] = arr[i]*arr[i];
		
	}
}
int main()
{
	int arr[maxsize];
	int n;
	printf("Enter number of elements in the array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	square(arr,n);
	printf("Array elements after aquaring:\n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
}