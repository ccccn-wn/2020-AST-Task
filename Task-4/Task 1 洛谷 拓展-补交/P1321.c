#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	scanf("%s",a);
	int b,g,i;
	b=0;
	g=0;
	if((a[0]=='g')||(a[0]=='i')||(a[0]=='r')||(a[0]=='l'))
	{
		g++;
	}
	if((a[0]=='b')||(a[0]=='o')||(a[0]=='y'))
	{
		b++;
	}
	for(i=1;i<strlen(a);i++)
	{
		if((a[i]=='b'))
		{
			b++;
		}
		if((a[i]=='o')&&(a[i-1]!='b'))
		{
			b++;
		}
		if((a[i]=='y')&&(a[i-1]!='o'))
		{
			b++;
		}
		if((a[i]=='g'))
		{
			g++;
		}
		if((a[i]=='i')&&(a[i-1]!='g'))
		{
			g++;
		}
		if((a[i]=='r')&&(a[i-1]!='i'))
		{
			g++;
		}
		if((a[i]=='l')&&(a[i-1]!='r'))
		{
			g++;
		}	
	}
	printf("%d\n",b);
	printf("%d",g);
	return 0;
 } 
