#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
//	int nian;
//	printf("请输入一个年份:");
//	scanf("%d",&nian);
//	if(nian%4==0&&nian%100!=0||nian%400==0) 
//	{
//		printf("yes!");
//	}
//	else
//	{
//		printf("No");
//	}
//	int a,b,temp;
//	printf("请输入两个数:");
//	scanf("%d%d",&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	if(a<b)
//	{
//		temp=a;
//		a=b;
//		b=temp;
//	}
//	
//	 
//	 	printf("a=%d,b=%d\n",a,b);
	 
//	int a ,b,c,temp;
//	printf("输入三个数字:");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		temp=a;
//		a=b;
//		temp=b;
//	}
//	if(a<c)
//	{
//		temp=a;
//		a=c;
//		c=temp;
//	}
//	printf("最大值是%d",a);

	int a,b,c,temp;
	printf("请输入三个数:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
		
	}
	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
		
	}
	printf("%d %d %d",a,b,c);














}

