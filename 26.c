#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(x%y==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    system("pause");
    return 0;
}
