#include<stdio.h>
#include<string.h>
main()
{   char st[]=" 12345 ";
	int len;
	len = strlen(st);
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-1-i;j++)
		{
			printf("%c",st[j]);
		}
		printf("\n");
	}
}
