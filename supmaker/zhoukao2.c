#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	float a,b;
	char fh;
	printf("\n������ֵ,ѡ��Ҫִ�еĹ��ܱ����ɶ�Ӧ����������\n");
	printf("�������һ����ֵ��");
	scanf("%f",&a);
	printf("A:�� S:�� M:�� D����\n");
	printf("�����빦����ĸ��"); 
	getchar();
	scanf("%c",&fh);
	printf("������ڶ�����ֵ��");
	scanf("%f",&b);
	
	if(fh=='A'||fh=='a')
	{
		printf("%.2f+%.2f=%.2f",a,b,a+b);
	}
	else if(fh=='S'||fh=='s')
	{
		printf("%.2f-%.2f=%.2f",a,b,a-b);
	}
	else if(fh=='M'||fh=='m')
	{
		printf("%.2f*%.2f=%.2f",a,b,a*b);
	}
	else if(fh=='D'||fh=='d'&&b!=0)
	{
		printf("%.2f/%.2f=%.2f",a,b,a/b);
	}
	else
	{
		printf("�������ܵ���0����"); 
	}
	
	
	

}

