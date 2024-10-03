#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int temp,x,y,z;

    scanf("%d %d %d",&x,&y,&z);

    if(y>x)
    {
        temp=x;
        x=y;
        y=temp;
    }
    if(z>x)
    {
        temp=x;
        x=z;
        z=temp;
    }
    if(y<z)
    {
        temp=y;
        y=z;
        z=temp;
    }

    printf("%d %d",x,z);

    
    return 0;
}
