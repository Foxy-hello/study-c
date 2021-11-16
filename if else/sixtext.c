#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
//	printf("\n\n\n\t\t\t===苏宁易购购物界面===");
//	int bianhao,jifen;
//	printf("\n\n\t\t\t1.冰洗",bianhao);
//	printf("\n\n\t\t\t2.数码");
//	printf("\n\n\t\t\t3.潮装\n");
//	printf("请输入购物的编号：");
//	scanf("%d",&bianhao);
//	if(bianhao==1)
//{
//
//	printf("国庆假停，价不停，西门子震撼9888\n"); 
//	printf("请输入会员积分：");
//	scanf("%d",&jifen);
//
//	if(jifen<2000)
//	{
//		printf("该会员享受九折优惠");
//	}
//	else if(2000<=jifen&&jifen<4000) 
//	{
//		printf("该会员享受八折");
//	}
//	else if (4000<=jifen&&jifen<8000)
//	{
//		printf("该会员享受七折");
//	}
//	else if(jifen>=8000)
//	{
//		printf("该会员享受六折"); 
//	}
//}

	int bianhao;//定义打印机的编号
	float jiage1=0.1,jiage2=1.2,jiage3=10.5;//定义价格 
	int yeshu,fenshu; //定义份数和页数
	
	printf("\n\n\n\t\t\t===北京永文打印社===\n");
	printf("\t\t\t1.数码打印机\n");
	printf("\t\t\t2.彩色激光打印机\n");
	printf("\t\t\t3.激光打印机\n");
	printf("请输入打印机类型：");
	scanf("%d",&bianhao);
	
	
	
	if(bianhao==1)
	{
		printf("请输入打印页数：");
		scanf("%d",&yeshu);
		printf("请输入打印的份数：");
		scanf("%d",&fenshu);
		printf("数码打印%d页%d份需要支付打印费用：%f",yeshu,fenshu,jiage1*yeshu*fenshu);
	}
	else if(bianhao==2)
	{
		printf("请输入打印页数：");
		scanf("%d",&yeshu);
		printf("请输入打印的份数：");
		scanf("%d",&fenshu);
		printf("彩色激光打印%d页%d份需要支付打印费用：%f",yeshu,fenshu,jiage2*yeshu*fenshu);	
	}
	else if(bianhao==3)
	{
		printf("请输入打印页数：");
		scanf("%d",&yeshu);
		printf("请输入打印的份数：");
		scanf("%d",&fenshu);
		if(jiage3*yeshu*fenshu>=50)
		{
		printf("3D激光打印%d页%d份需要支付打印费用：%f",yeshu,fenshu,jiage3*yeshu*fenshu-5);	
		}
		else
		{
			printf("3D激光打印%d页%d份需要支付打印费用：%f",yeshu,fenshu,jiage3*yeshu*fenshu);
		}
	}  
	else
	{
		printf("非法输入");
	}
		
	 
}
	
	
	
	
	
	
	
	
	
	






