#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
//	printf("\n\n\n\t\t\t===�����׹��������===");
//	int bianhao,jifen;
//	printf("\n\n\t\t\t1.��ϴ",bianhao);
//	printf("\n\n\t\t\t2.����");
//	printf("\n\n\t\t\t3.��װ\n");
//	printf("�����빺��ı�ţ�");
//	scanf("%d",&bianhao);
//	if(bianhao==1)
//{
//
//	printf("�����ͣ���۲�ͣ����������9888\n"); 
//	printf("�������Ա���֣�");
//	scanf("%d",&jifen);
//
//	if(jifen<2000)
//	{
//		printf("�û�Ա���ܾ����Ż�");
//	}
//	else if(2000<=jifen&&jifen<4000) 
//	{
//		printf("�û�Ա���ܰ���");
//	}
//	else if (4000<=jifen&&jifen<8000)
//	{
//		printf("�û�Ա��������");
//	}
//	else if(jifen>=8000)
//	{
//		printf("�û�Ա��������"); 
//	}
//}

	int bianhao;//�����ӡ���ı��
	float jiage1=0.1,jiage2=1.2,jiage3=10.5;//����۸� 
	int yeshu,fenshu; //���������ҳ��
	
	printf("\n\n\n\t\t\t===�������Ĵ�ӡ��===\n");
	printf("\t\t\t1.�����ӡ��\n");
	printf("\t\t\t2.��ɫ�����ӡ��\n");
	printf("\t\t\t3.�����ӡ��\n");
	printf("�������ӡ�����ͣ�");
	scanf("%d",&bianhao);
	
	
	
	if(bianhao==1)
	{
		printf("�������ӡҳ����");
		scanf("%d",&yeshu);
		printf("�������ӡ�ķ�����");
		scanf("%d",&fenshu);
		printf("�����ӡ%dҳ%d����Ҫ֧����ӡ���ã�%f",yeshu,fenshu,jiage1*yeshu*fenshu);
	}
	else if(bianhao==2)
	{
		printf("�������ӡҳ����");
		scanf("%d",&yeshu);
		printf("�������ӡ�ķ�����");
		scanf("%d",&fenshu);
		printf("��ɫ�����ӡ%dҳ%d����Ҫ֧����ӡ���ã�%f",yeshu,fenshu,jiage2*yeshu*fenshu);	
	}
	else if(bianhao==3)
	{
		printf("�������ӡҳ����");
		scanf("%d",&yeshu);
		printf("�������ӡ�ķ�����");
		scanf("%d",&fenshu);
		if(jiage3*yeshu*fenshu>=50)
		{
		printf("3D�����ӡ%dҳ%d����Ҫ֧����ӡ���ã�%f",yeshu,fenshu,jiage3*yeshu*fenshu-5);	
		}
		else
		{
			printf("3D�����ӡ%dҳ%d����Ҫ֧����ӡ���ã�%f",yeshu,fenshu,jiage3*yeshu*fenshu);
		}
	}  
	else
	{
		printf("�Ƿ�����");
	}
		
	 
}
	
	
	
	
	
	
	
	
	
	






