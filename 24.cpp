#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int x;

    scanf("%d",&x);

    if(x%2==0)
    {
       printf("even");
    }
    else
    {
        printf("odd");
    }

    system("pause");
    return 0;
}
