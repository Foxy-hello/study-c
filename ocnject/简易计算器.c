#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
//	int chenji;
//	printf("����һ���ٷ��Ƴɼ���");
//	scanf("%d",&chenji);
//	
//	if(chenji>=0&&chenji<=100)
//	{
//		switch(chenji/10)
//		{
//			case 10:
//			case 9:printf("��ĵȼ���A");break;
//			case 8:printf("��ĵȼ���B");break;
//			case 7:printf("��ĵȼ���C");break;
//			case 6:printf("��ĵȼ���D");break;
//			default:printf("��ĳɼ���E");break;
//		}
//	}
//	
//	else


	float a,b;
	char fuhao;
	printf("������һ�����ʽ�磨1+1����");
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
			printf("0������Ϊ������"); 
		}
		
	} 
	
	
	
	
	



}

