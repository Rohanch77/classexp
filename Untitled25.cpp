#include<stdio.h>
#include<string.h>
struct driver
{
	char name[100];
	long int license[50];
	char route[100];
 int km;
};
int main()
{
	struct driver n;
	for(int i=0;i<=3;i++)
	{
	
	printf("Enter your name\n");
	scanf("%s",n.name);
	
	printf("Enter your license number\n");
	scanf("%ld",n.license);
	
	printf("Enter your daily route\n");
	scanf("%s",n.route);
	
		
printf("\n");
printf("\n");
	printf("Name : %s\n",n.name);
	printf("License number : %ld\n",n.license);
	printf("Route : %s\n",n.route);
	
	printf("\n");
	printf("\n");

}
	
	return 0;
}
