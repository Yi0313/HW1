#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("number\tsquare\tcube\n");

    for(int i=0;i<4;i++)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
    for(int i=4;i<10;i++)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
    printf("10\t100\t1000");
    system("pause");
    return 0;
}
