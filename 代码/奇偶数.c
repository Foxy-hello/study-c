#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	int a,b,sum1,sum2,i,count;//������� 
	printf("\n\t\t������ʼֵ����ֵ,����ܱ�5������ż��,�����������ż����,����ܱ�3����������,�������������ƽ��ֵ\n");
	printf("\t��������ʼֵ��");
	scanf("%d",&a);
	printf("\t��������ֵ��");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i%5==0&&i%2==0)//ѭ��������ż���� 
		{
			sum1+=i;
			printf("%d~%d֮���ܱ�5������ż��������%d\n",a,b,i);//ѭ����� 
		}
		
	}
		printf("%d~%d֮���ܱ�5������ż���ĺ��ǣ�%d\n\n",a,b,sum1);	
	
	for(i=a;i<=b;i++)//ѭ�������������� 
	{
		if(i%3==0&&i%2!=0)
		{
			sum2+=i;
			count++;
			printf("%d~%d֮���ܱ�3������������������%d\n",a,b,i);
		}
	}
		printf("%d~%d֮���ܱ�3������������ƽ��ֵ�ǣ�%d\n",a,b,sum2/count);
	
}

