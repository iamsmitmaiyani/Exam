#include<stdio.h>
#define max 3
struct student
{
	char name[50];
	char course[50];
};
int main()
{
	struct student students[max];
	FILE *fp;
	int i;
	printf("Enter details for %d students:\n",max);
	for(i=0;i<max;i++)
	{
		printf("student %d:\n",i+1);
		printf("Name:");
		scanf("%[^\n]s",students[i].course);
	}
	fp=fopen("data.txt","w");
	if(fp == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}
	fprintf(fp,"student Details:\n");
	for(i=0;i<max;i++)
	{
		fprintf(fp,"student %d:\n",i+1);
		fprintf(fp,"Name:%s\n",students[i].name);
		fprintf(fp,"Course:%s\n",students[i].course);
		fprintf(fp,"\n");
	}
	fclose(fp);
	printf("student details written to data.txt successfully.\n");
}