#include <stdio.h>
#include <windows.h>
#include "math.h"

main()
{
    int n;
    printf("������һ��������");
    scanf("%d" ,&n);

    if(n%2==0)
    {
        printf("%d��ż��\n",n);
    }
    else{
        printf("%d������\n",n);
    }
}