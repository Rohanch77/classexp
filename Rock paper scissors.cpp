#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char name[50];
	char game[25];
	for(int i=0;i<=3;i++);
	{
	printf("Enter your name\n");
	scanf("%s",name);
	printf("%s turn !!\n",name);
	printf("Choose Between Rock,Paper and Scissors\n");
	scanf("%s",game);
	printf("computer Turn!!\n");
	srand(time(NULL));
	printf("%d\n",rand()%2);
}

	switch (rand()%2)
	{
		case 0:
			printf("Rock");
			break;
		case 1:
	    	printf("Paper");
	    	break;
		case 2:
			
			printf("Scissors");
	}


}
