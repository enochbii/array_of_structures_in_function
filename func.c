#include <stdio.h>

struct employee{
	int id;
	char name [10];
	float salary;
};
void display(struct employee[]);
int main()
{
	struct employee e[10];
	int i;
	for (i=0;i<10;i++){
		printf("\n Enter id, name & salary of %d emp \n",i+1);
		fflush(stdin);
		scanf("%d",&e[i].id);
		fflush(stdin);
		gets(e[i].name);
		fflush(stdin);
		scanf("%.2f",&e[i].salary);

	}
	display(e);
	return 0;
}
void display(struct employee e[]){
	int i;
	for(i=0;i<10;i++){
		printf("\n ID= %d",e[i].id);
		printf("\n name= %s",e[i].name);
		printf("\n salary= %.2f",e[i].salary);

	}
}