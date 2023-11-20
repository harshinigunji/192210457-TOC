#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int a;
	int len,i;
	printf("Enter a string:");
	scanf("%s",s);
	len=strlen(s);
	if(s[0]=='a' && s[len-1]=='a')
	{
		for(i=0;i<len;i++)
		{
			if(s[i]=='0' || s[i]=='1')
			{
				printf("Invalid!");
				return 0;
			}
		}
		printf("Accepted");
	}
	else
	{
		printf("Not accepted");
	}
	return 0;
}
