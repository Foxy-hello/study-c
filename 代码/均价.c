#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	float dj,i,sum;
	int y; 
	printf("\n\t输入1-6月份海淀区二手房每平米的销售单价,计算平均值\n");
	for(i=1,sum=0;i<=6;i++)
	{
		printf("请输入%.0f月份每平方米销售单价（元）：",i);
		scanf("%f",&dj); 
		sum+=dj;
		
	}
	printf("1-6月份二手房平均每平米的销售单价是：%.2f",1.0*sum/6);
	
	

}

