#include<stdio.h>
int main()
{
    int hra,da,basic;
    float gr;
    scanf("%d",&basic);
    if(basic<=10000)
    {
        da=basic*0.8;
        hra=(basic*0.2);
        gr=(hra+da+basic);
        printf("%0.2f",gr);
    }
    else if(basic<=20000)
    {
        da=basic*0.9;
        hra=basic*0.25;
        gr=(hra+da+basic);
        printf("%0.2f",gr);
    }
    else
    {
        da=basic*0.95;
        hra=basic*0.3;
    gr=(hra+da+basic);
    printf("%0.2f",gr);
    }
}