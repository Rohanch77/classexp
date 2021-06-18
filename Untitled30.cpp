#include<stdio.h>
#include<string.h>
 main()
 {
 
int len;
char st[]=" 123 ";
len = strlen(st);

	for(int i=0;i<len;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("%c",st[j]);
		}
		printf("\n");
	}
}
