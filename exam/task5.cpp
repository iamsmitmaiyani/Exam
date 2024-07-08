#include<stdio.h>
#define maxcars 100
struct car
{
	char model[50];
	int year;
	float price;
};
int main()
{
	struct car cars[maxcars];
	int N;
	printf("Enter the number of cars:");
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		printf("\nEnter details for car%d:\n",i+1);
		printf("Model:");
		scanf("%[^\n]s",cars[i].model);
		printf("Year:");
		scanf("%d",&cars[i].year);
		printf("price:");
		scanf("%f",&cars[i].price);
	}
	printf("\nDetails of all cars:\n");
	for(int i=0;i<N;i++)
	{
		printf("\ncar %d:\n",i+1);
		printf("Model:%s\n",cars[i].model);
		printf("Year:%d\n",cars[i].year);
		printf("Price:%.2f\n",cars[i].price);
	}
}