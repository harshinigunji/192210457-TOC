#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	int len;
	printf("enter string:");
	scanf("%s",s);
	len=strlen(s);
	if(s[0]=='0' && s[len-1]=='1')
	{
		for(i=0;i<len;i++)
		{
			if(s[i]<'0' || s[i]>'1')
			{
				printf("Invalid");
				return 0;
			}
		}
		printf("Accepted");
	}
	else
	{
		printf("Not Accepted");
	}
	return 0;
}