#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	float tz;
	char sex;//定义性别，体重
	
	printf("\n\t医院急救室根据性别和体重计算输血量为病人进行输血\n"); 
	printf("请输入性别：");
	scanf("%c",&sex);
	printf("请输入体重：");
	scanf("%f",&tz);            	//以上是性别和体重的输入输出 
	if(sex=='f'&&tz<=60) 
	{
		printf("病患性别：%c\t体重：%.2fkg\t输血量：250ml",sex,tz);		//男性体重小于等于60kg，输血250ml 
	}
	else if (sex=='f'&&tz>60)
	{
		printf("病患性别：%c\t体重：%.2fkg\t输血量：300ml",sex,tz);		//男性体重大于60kg，输血300ml 
	}
	else if (sex=='m'&&tz<=50)
	{
		printf("病患性别：%c\t体重：%.2fkg\t输血量：200ml",sex,tz);		//女性体重小等于于50kg，输血200ml 
	}
	else if (sex=='m'&&tz>50)
	{
		printf("病患性别：%c\t体重：%.2fkg\t输血量：250ml",sex,tz);		//女性体重大于50kg，输血200ml 
	}
	else 
	{
		printf("请输入正确的性别 男F|f 女M|m");		//输入性别错误，给出提示！ 
	}
	
	

}

