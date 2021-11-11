#include <stdio.h>
#include "windows.h"
#include "math.h"

main()
{
	int Employee_id1=1001,Employee_id2=1001,
		Employee_id3=1003,Employee_id4=1004;
	int Employee_age1=23,Employee_age2=23,
		Employee_age3=27,Employee_age4=32;
	float Employee_salay1=5678.34,Employee_salay2=6660.23,
		  Employee_salay3=1234.56,Employee_salay4=6789.7;
	char emp_sex1='m',emp_sex2='m',emp_sex3='f',emp_sex4='m';
	
	printf("\n\n\t\t===员工信息管理系统===");
	printf("\n\n\t员工号  员工姓名  员工性别  员工年龄  员工薪资"); 
	printf("\n\n\t %d \t 张三\t %c \t\t %d \t %.2f",Employee_id1,emp_sex1,Employee_age1,Employee_salay1);
	printf("\n\n\t %d \t 李四 \t %c \t\t %d \t %.2f",Employee_id2,emp_sex2,Employee_age2,Employee_salay2);
	printf("\n\n\t %d \t 王五 \t %c \t\t %d \t %.2f",Employee_id3,emp_sex3,Employee_age3,Employee_salay3);
	printf("\n\n\t %d \t 赵六 \t %c \t\t %d \t %.1f",Employee_id4,emp_sex4,Employee_age4,Employee_salay4); 
	
}

