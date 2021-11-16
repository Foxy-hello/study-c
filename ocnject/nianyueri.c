#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	int n,y,r,y1,sum=0;
	printf("请输入年月日：");
	scanf("%d%d%d",&n,&y,&r);
	if(n%4==0&&n%100!=0||n%400==0)
	{
		y1=29;
	} 
	else
	{
		y1=28;
	}
switch (y)
{
	case 1:sum=r;break;
	case 2:sum=r+31;break;
	case 3:sum=r+31+y1;break;
	case 4:sum=r+31*2+y1;break;
	case 5:sum=r+31*2+y1+30;break;
	case 6:sum=r+31*3+y1+30;break;
	case 7:sum=r+31*3+y1+30*2;break;
	case 8:sum=r+31*4+y1+30*2;break;
	case 9:sum=r+31*5+y1+30*2;break;
	case 10:sum=r+31*5+y1+30*3;break;
	case 11:sum=r+31*6+y1+30*3;break;
	case 12:sum=r+31*6+y1+30*4;break;
	
}

	printf("现在是%d年的第%d天",n,sum);









}

