#include<stdio.h>
#include<windows.h>
#include"math.h"

int main()
{
	int bh;  //������� 
	for(;;)  //��ѭ��ʵ�ֹ����ظ����� 
	{
		printf("\n\t\t===�����ֶ�ͯ��԰===\n");
		printf("\t\t1: ��ͨ��Ʊ����\n");
		printf("\t\t2: Ʊ�����\n");
		printf("\t\t0: �˳�\n");
		
		printf("�����빦�ܱ�ţ�");
		scanf("%d",&bh);
		
		switch(bh)  //�жϱ�� 
		{
			case 1:     //��һ������ 
				{
					int lx,ps,xx,dj,jg1,jg2,zf;
					printf("\n\t\t===Ʊ������===\n");
					printf("\t\t1: ����Ʊ��35Ԫ/λ��\n");
					printf("\t\t2: ��ͯƱ��20/λ��\n");	
					for(;;)     //��ѭ��ʵ�ֹ����ظ����� 
					{
						printf("��ѡ��Ʊ�����ͣ�");
						scanf("%d",&lx);
						if(lx==1)
						{
							printf("������Ʊ����");
							scanf("%d",&ps);
							printf("�˿���ã���ѡ���ˣ�\nƱ�����ͣ�����Ʊ\n");
							printf("��Ʊ������%d",ps);
							printf("\n��Ϣȷ���밴��0/1����");
							scanf("%d",&xx);
							if(xx==1)
							{
								jg1=ps*35;
								printf("��ʵ��Ϣ����֧��Ʊ� %dԪ\n",jg1);
								printf("�Ƿ������Ʊ����0/1��");
								scanf("%d",&dj);
								if(dj==1)
								{
									printf("������Ʊ�����ͣ�");
									scanf("%d",&lx);
									if(lx==2)
						 			{
									 	printf("������Ʊ����");
										scanf("%d",&ps);
										printf("�˿���ã���ѡ���ˣ�\nƱ�����ͣ���ͯƱ\n"); 
										printf("��Ʊ������%d",ps);
										printf("\n��Ϣȷ���밴��0/1����");
										scanf("%d",&xx);
										if(xx==1)
										{
											jg2=20*ps;
											printf("��ʵ��Ϣ����֧��Ʊ� %dԪ\n",jg2);	
											printf("�Ƿ������Ʊ����0/1��");
											scanf("%d",&dj);
											if(dj==0)
											{
												printf("���ζ�Ʊ��Ҫ֧�������%dԪ",jg1+jg2);
												printf("\n�˿�֧����"); 
												scanf("%d",&zf);
												printf("��ӭ���٣����㣺%d",zf-(jg1+jg2));
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
			
			case 2:   //�ڶ������� 
				{
					int a[10],i,sl,max,min,loc; 
					printf("������3-12�µĳ�Ʊ���\n");
					for(i=0;i<10;i++)    //ѭ������ 
					{
						printf("�������%d�µĳ�Ʊ�����",i+3);
						scanf("%d",&a[i]);
					}
					for(i=0;i<10;i++)    //�����Сֵ�� 
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
					printf("��3-12��������%d�����ٵ���%d��������С���%d",max,min,max-min);
				}
			case 0:exit(0);
			default:printf("������ı���������������룡");		
			 
		} 
		
	} 








}
