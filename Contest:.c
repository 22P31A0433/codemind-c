#include<stdio.h>
int main()
{
    int x,e,h;
    scanf("%d%d%d",&x,&e,&h);
    int t=((1*e)+(2*h));
    if(t>=x)
    {
        printf("Qualify");
    }
    else 
    {
        printf("Not Qualify");
    }
}
