#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	float a,b;
	char fh;
	printf("\n输入数值,选择要执行的功能编号完成对应计算输出结果\n");
	printf("请输入第一个数值：");
	scanf("%f",&a);
	printf("A:加 S:减 M:乘 D：除\n");
	printf("请输入功能字母："); 
	getchar();
	scanf("%c",&fh);
	printf("请输入第二个数值：");
	scanf("%f",&b);
	
	if(fh=='A'||fh=='a')
	{
		printf("%.2f+%.2f=%.2f",a,b,a+b);
	}
	else if(fh=='S'||fh=='s')
	{
		printf("%.2f-%.2f=%.2f",a,b,a-b);
	}
	else if(fh=='M'||fh=='m')
	{
		printf("%.2f*%.2f=%.2f",a,b,a*b);
	}
	else if(fh=='D'||fh=='d'&&b!=0)
	{
		printf("%.2f/%.2f=%.2f",a,b,a/b);
	}
	else
	{
		printf("除数不能等于0，亲"); 
	}
	
	
	

}

