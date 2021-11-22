#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	int a,b,sum1,sum2,i,count;//定义变量 
	printf("\n\t\t输入起始值与终值,输出能被5整除的偶数,计算符合条件偶数和,输出能被3整除的奇数,计算符合条件的平均值\n");
	printf("\t请输入起始值：");
	scanf("%d",&a);
	printf("\t请输入终值：");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i%5==0&&i%2==0)//循环条件，偶数的 
		{
			sum1+=i;
			printf("%d~%d之间能被5整除的偶数包含：%d\n",a,b,i);//循环语句 
		}
		
	}
		printf("%d~%d之间能被5整除的偶数的和是：%d\n\n",a,b,sum1);	
	
	for(i=a;i<=b;i++)//循环条件，奇数的 
	{
		if(i%3==0&&i%2!=0)
		{
			sum2+=i;
			count++;
			printf("%d~%d之间能被3整除的奇数数包含：%d\n",a,b,i);
		}
	}
		printf("%d~%d之间能被3整除的奇数的平均值是：%d\n",a,b,sum2/count);
	
}

