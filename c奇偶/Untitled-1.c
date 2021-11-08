#include <stdio.h>
#include <windows.h>
#include "math.h"

main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d" ,&n);

    if(n%2==0)
    {
        printf("%d是偶数\n",n);
    }
    else{
        printf("%d是奇数\n",n);
    }
}