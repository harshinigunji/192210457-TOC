#include<stdio.h>
#include<string.h>
int main()
{
	int len,i;
	int a;
	char string[10];
	int flag=0;
	printf("Enter a string:");
	scanf("%s",string);
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		if(string[i]=='0' || string[i]=='1')
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("string is invalid\n");
	}
	else if(string[0]=='a'&&string[len-1]=='a')
	{
		printf("string is accepted");
	}
	else
	{
		printf("string is not accepted");
    }
	return 0;
}
