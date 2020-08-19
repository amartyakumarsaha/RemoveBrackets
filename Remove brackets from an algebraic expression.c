#include<stdio.h>
int removeBrackets(char);
int main()
{
	char s[100];
	int i,r;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		r=removeBrackets(s[i]);
		if(r==0)
		{
			printf("%c",s[i]);
		}
	}
}
int removeBrackets(char ch)
{
	if(ch=='(' || ch==')' || ch=='{' || ch=='}' || ch=='[' || ch==']')
		{
			return 1;
		}
	else
	{
		return 0;
	}
}
