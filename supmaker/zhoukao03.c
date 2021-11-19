#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	char bh,hy;
	float sl,dj,zf,xf;
	printf("输入选购商品单价、数量判断是否会员完成结算处理\n");
	printf("\t\t\t=====三个沙雕=======\n\n");
	printf("A:开心果\n\nB:夏威夷果\n\nC:碧根果\n\n");
	printf("请输入购买的商品编号：");
//	getchar();
	scanf("%c",&bh);
	if (bh=='A')
	{
		printf("请输入开心果的单价：");
		scanf("%f",&dj);
		printf("请输入购买开心果的数量：");
		scanf("%f",&sl);
		xf=dj*sl;
		printf("商品名称：开心果 单价：%.2f元  购买数量：%.2f袋  消费额：%.2f元",dj,sl,xf) ;
		printf("\n是否拥有会员（y/n):");
		getchar();
		scanf("%c",&hy);
		if(hy=='y'&&xf<200)
		{
			printf("会员消费未满200元，送5元消费红包，下次消费可使用\n");
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf,zf-xf);
		}
		else if(hy=='y'&&xf>=200)
		{
			printf("会员你好，本次消费超过200元，减免3元，实际支付%.2f\n",xf-3);
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf-3,zf-(xf-3));
		}
		else
		{
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf,zf-xf);
		}
		
	} 
	else if(bh=='B')
	{
		printf("请输入夏威夷果的单价：");
		scanf("%f",&dj);
		printf("请输入购买夏威夷果的数量：");
		scanf("%f",&sl);
		xf=dj*sl;
		printf("商品名称：夏威夷果 单价：%.2f元  购买数量：%.2f袋  消费额：%.2f元",dj,sl,xf) ;
		printf("\n是否拥有会员（y/n):");
		getchar();
		scanf("%c",&hy);
		if(hy=='y'&&xf<200)
		{
			printf("会员消费未满200元，送5元消费红包，下次消费可使用\n");
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf,zf-xf);
		}
		else if(hy=='y'&&xf>=200)
		{
			printf("会员你好，本次消费超过200元，减免3元，实际支付%.2f\n",xf-3);
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf-3,zf-(xf-3));
		}
		else
		{
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf,zf-xf);
		}
		
	}
	else if(bh=='C')
	{
		printf("请输入碧根果的单价：");
		scanf("%f",&dj);
		printf("请输入购买碧根果的数量：");
		scanf("%f",&sl);
		xf=dj*sl;
		printf("商品名称：碧根果 单价：%.2f元  购买数量：%.2f袋  消费额：%.2f元",dj,sl,xf) ;
		printf("\n是否拥有会员（y/n):");
		getchar();
		scanf("%c",&hy);
		if(hy=='y'&&xf<200)
		{
			printf("会员消费未满200元，送5元消费红包，下次消费可使用\n");
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf,zf-xf);
		}
		else if(hy=='y'&&xf>=200)
		{
			printf("会员你好，本次消费超过200元，减免3元，实际支付%.2f\n",xf-3);
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf-3,zf-(xf-3));
		}
		else
		{
			printf("请输入支付金额：");
			scanf("%f",&zf);
			printf("顾客你好，本次消费%.2f元，找零%.2f元",xf,zf-xf);
		}
		
	}
	
	
	 




}

