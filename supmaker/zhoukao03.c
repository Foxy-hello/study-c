#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	char bh,hy;
	float sl,dj,zf,xf;
	printf("����ѡ����Ʒ���ۡ������ж��Ƿ��Ա��ɽ��㴦��\n");
	printf("\t\t\t=====����ɳ��=======\n\n");
	printf("A:���Ĺ�\n\nB:�����Ĺ�\n\nC:�̸���\n\n");
	printf("�����빺�����Ʒ��ţ�");
//	getchar();
	scanf("%c",&bh);
	if (bh=='A')
	{
		printf("�����뿪�Ĺ��ĵ��ۣ�");
		scanf("%f",&dj);
		printf("�����빺���Ĺ���������");
		scanf("%f",&sl);
		xf=dj*sl;
		printf("��Ʒ���ƣ����Ĺ� ���ۣ�%.2fԪ  ����������%.2f��  ���Ѷ%.2fԪ",dj,sl,xf) ;
		printf("\n�Ƿ�ӵ�л�Ա��y/n):");
		getchar();
		scanf("%c",&hy);
		if(hy=='y'&&xf<200)
		{
			printf("��Ա����δ��200Ԫ����5Ԫ���Ѻ�����´����ѿ�ʹ��\n");
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf,zf-xf);
		}
		else if(hy=='y'&&xf>=200)
		{
			printf("��Ա��ã��������ѳ���200Ԫ������3Ԫ��ʵ��֧��%.2f\n",xf-3);
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf-3,zf-(xf-3));
		}
		else
		{
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf,zf-xf);
		}
		
	} 
	else if(bh=='B')
	{
		printf("�����������Ĺ��ĵ��ۣ�");
		scanf("%f",&dj);
		printf("�����빺�������Ĺ���������");
		scanf("%f",&sl);
		xf=dj*sl;
		printf("��Ʒ���ƣ������Ĺ� ���ۣ�%.2fԪ  ����������%.2f��  ���Ѷ%.2fԪ",dj,sl,xf) ;
		printf("\n�Ƿ�ӵ�л�Ա��y/n):");
		getchar();
		scanf("%c",&hy);
		if(hy=='y'&&xf<200)
		{
			printf("��Ա����δ��200Ԫ����5Ԫ���Ѻ�����´����ѿ�ʹ��\n");
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf,zf-xf);
		}
		else if(hy=='y'&&xf>=200)
		{
			printf("��Ա��ã��������ѳ���200Ԫ������3Ԫ��ʵ��֧��%.2f\n",xf-3);
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf-3,zf-(xf-3));
		}
		else
		{
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf,zf-xf);
		}
		
	}
	else if(bh=='C')
	{
		printf("������̸����ĵ��ۣ�");
		scanf("%f",&dj);
		printf("�����빺��̸�����������");
		scanf("%f",&sl);
		xf=dj*sl;
		printf("��Ʒ���ƣ��̸��� ���ۣ�%.2fԪ  ����������%.2f��  ���Ѷ%.2fԪ",dj,sl,xf) ;
		printf("\n�Ƿ�ӵ�л�Ա��y/n):");
		getchar();
		scanf("%c",&hy);
		if(hy=='y'&&xf<200)
		{
			printf("��Ա����δ��200Ԫ����5Ԫ���Ѻ�����´����ѿ�ʹ��\n");
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf,zf-xf);
		}
		else if(hy=='y'&&xf>=200)
		{
			printf("��Ա��ã��������ѳ���200Ԫ������3Ԫ��ʵ��֧��%.2f\n",xf-3);
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf-3,zf-(xf-3));
		}
		else
		{
			printf("������֧����");
			scanf("%f",&zf);
			printf("�˿���ã���������%.2fԪ������%.2fԪ",xf,zf-xf);
		}
		
	}
	
	
	 




}

