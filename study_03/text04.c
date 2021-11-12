#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	int mobai=1001,ofo=1002,smallbule=1003;
	float mobai_money=2.00,ofo_money=1.50,smallblue_money=1.35;//定义三种车的变量 
	
	printf("\n\n\n\n\t\t\t\t共享单车价目一览表\n"); 
	printf("\t\t\t\t编号\t名称\t\t单价（元）\n");
	printf("\t\t\t\t%d,\t摩拜单车\t%.2f\n",mobai,mobai_money); 
	printf("\t\t\t\t%d,\tofof单车\t%.2f\n",ofo,ofo_money); 
	printf("\t\t\t\t%d,\t小蓝单车\t%.2f\n\n\n",smallbule,smallblue_money); //输出三种车的价格 
	/*下面是三个车的解释*/
	printf("三种单车编号如下:\n\n");
	printf("\t摩拜单车编号：1001\n\tofo单车编号 ：1002\n\t小蓝车编号  ：1003\n\n");
	printf("三种单车价格如下\n");
	printf("\t摩拜单车骑行单价：2.00元/次\n\tofo单车骑行单价 ：1.50元/次\n\t小蓝车骑行单价  ：1.35元/次\n\n\n"); 

}

