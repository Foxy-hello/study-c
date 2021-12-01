#include<stdio.h>
#include<windows.h>
#include"math.h"

int main()
{
	int bh;  //定义变量 
	for(;;)  //死循环实现功能重复调用 
	{
		printf("\n\t\t===卡其乐儿童乐园===\n");
		printf("\t\t1: 普通门票订购\n");
		printf("\t\t2: 票务管理\n");
		printf("\t\t0: 退出\n");
		
		printf("请输入功能编号：");
		scanf("%d",&bh);
		
		switch(bh)  //判断编号 
		{
			case 1:     //第一个功能 
				{
					int lx,ps,xx,dj,jg1,jg2,zf;
					printf("\n\t\t===票务类型===\n");
					printf("\t\t1: 成人票（35元/位）\n");
					printf("\t\t2: 儿童票（20/位）\n");	
					for(;;)     //死循环实现功能重复调用 
					{
						printf("请选择票务类型：");
						scanf("%d",&lx);
						if(lx==1)
						{
							printf("请输入票数：");
							scanf("%d",&ps);
							printf("顾客你好，您选择了：\n票务类型：成人票\n");
							printf("购票张数：%d",ps);
							printf("\n信息确定请按（0/1）：");
							scanf("%d",&xx);
							if(xx==1)
							{
								jg1=ps*35;
								printf("核实信息后请支付票款： %d元\n",jg1);
								printf("是否继续订票：（0/1）");
								scanf("%d",&dj);
								if(dj==1)
								{
									printf("请输入票务类型：");
									scanf("%d",&lx);
									if(lx==2)
						 			{
									 	printf("请输入票数：");
										scanf("%d",&ps);
										printf("顾客你好，您选择了：\n票务类型：儿童票\n"); 
										printf("购票张数：%d",ps);
										printf("\n信息确定请按（0/1）：");
										scanf("%d",&xx);
										if(xx==1)
										{
											jg2=20*ps;
											printf("核实信息后请支付票款： %d元\n",jg2);	
											printf("是否继续订票：（0/1）");
											scanf("%d",&dj);
											if(dj==0)
											{
												printf("本次订票需要支付金额是%d元",jg1+jg2);
												printf("\n顾客支付金额："); 
												scanf("%d",&zf);
												printf("欢迎光临，找零：%d",zf-(jg1+jg2));
												break;
											}
										} 
									}
								}
								
							}
							else
							{
								break;
							}		
						}
					}
				}
			
			case 2:   //第二个功能 
				{
					int a[10],i,sl,max,min,loc; 
					printf("请输入3-12月的出票情况\n");
					for(i=0;i<10;i++)    //循环输入 
					{
						printf("请输入第%d月的出票情况：",i+3);
						scanf("%d",&a[i]);
					}
					for(i=0;i<10;i++)    //最大最小值！ 
					{
						if(i==0)
						{
							max=min=a[i];
						}
						if(max<a[i])
						{
							max=a[i];
						}
						if(min>a[i])
						{
							min=a[i];
						}
					}
					printf("第3-12月最多的是%d，最少的是%d，最大和最小相差%d",max,min,max-min);
				}
			case 0:exit(0);
			default:printf("您输入的编号有误，请重新输入！");		
			 
		} 
		
	} 








}
