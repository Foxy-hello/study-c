#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	float tz;
	char sex;//�����Ա�����
	
	printf("\n\tҽԺ�����Ҹ����Ա�����ؼ�����Ѫ��Ϊ���˽�����Ѫ\n"); 
	printf("�������Ա�");
	scanf("%c",&sex);
	printf("���������أ�");
	scanf("%f",&tz);            	//�������Ա�����ص�������� 
	if(sex=='f'&&tz<=60) 
	{
		printf("�����Ա�%c\t���أ�%.2fkg\t��Ѫ����250ml",sex,tz);		//��������С�ڵ���60kg����Ѫ250ml 
	}
	else if (sex=='f'&&tz>60)
	{
		printf("�����Ա�%c\t���أ�%.2fkg\t��Ѫ����300ml",sex,tz);		//�������ش���60kg����Ѫ300ml 
	}
	else if (sex=='m'&&tz<=50)
	{
		printf("�����Ա�%c\t���أ�%.2fkg\t��Ѫ����200ml",sex,tz);		//Ů������С������50kg����Ѫ200ml 
	}
	else if (sex=='m'&&tz>50)
	{
		printf("�����Ա�%c\t���أ�%.2fkg\t��Ѫ����250ml",sex,tz);		//Ů�����ش���50kg����Ѫ200ml 
	}
	else 
	{
		printf("��������ȷ���Ա� ��F|f ŮM|m");		//�����Ա���󣬸�����ʾ�� 
	}
	
	

}

