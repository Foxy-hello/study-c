#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	float dj,i,sum;
	int y; 
	printf("\n\t����1-6�·ݺ��������ַ�ÿƽ�׵����۵���,����ƽ��ֵ\n");
	for(i=1,sum=0;i<=6;i++)
	{
		printf("������%.0f�·�ÿƽ�������۵��ۣ�Ԫ����",i);
		scanf("%f",&dj); 
		sum+=dj;
		
	}
	printf("1-6�·ݶ��ַ�ƽ��ÿƽ�׵����۵����ǣ�%.2f",1.0*sum/6);
	
	

}

