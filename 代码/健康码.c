#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	char tw,jkm; //定义体温和健康码
	printf("\n\t根据防疫要求进出超市必须描健康码并测量体温,如不符合要求不允许进入商超\n");
	printf("是否扫健康码：");
	scanf("%c",&jkm);
	if(jkm=='y'||jkm=='Y')//判断体温是否正常 
	{
		printf("体温数据是否正常：");
		getchar();
		scanf("%c",&tw);
		if(tw=='t'||tw=='F')
		{
			printf("健康码扫码登记，体温正常，可以进入商场~");//体温正常 
		}
		else
		{
			printf("未进行体温检测，不符合进入商场要求哦！");//体温不正常 
		}
	} 
	else
	{
		printf("没有健康码，你去个鸡儿！") ;//没有健康码，给出合理的提示！！！ 
	}
	
}

