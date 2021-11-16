#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
//	int chenji;
//	printf("输入一个百分制成绩：");
//	scanf("%d",&chenji);
//	
//	if(chenji>=0&&chenji<=100)
//	{
//		switch(chenji/10)
//		{
//			case 10:
//			case 9:printf("你的等级是A");break;
//			case 8:printf("你的等级是B");break;
//			case 7:printf("你的等级是C");break;
//			case 6:printf("你的等级是D");break;
//			default:printf("你的成绩是E");break;
//		}
//	}
//	
//	else


	float a,b;
	char fuhao;
	printf("请输入一个表达式如（1+1）：");
	scanf("%f%c%f",&a,&fuhao,&b);
	
	switch(fuhao)
	{
		case '+':printf("%.2f%c%.2f=%.2f\n",a,fuhao,b,a+b);break;
		case '-':printf("%.2f%c%.2f=%.2f\n",a,fuhao,b,a-b);break;
		case '*':printf("%.2f%c%.2f=%.2f\n",a,fuhao,b,a*b);break;
		case '/':if(b!=0)
		{
			printf("%.2f%c%.2f=%.2f\n",a,fuhao,b,a/b);break;
		}
		else
		{
			printf("0不能作为除数！"); 
		}
		
	} 
	
	
	
	
	



}

