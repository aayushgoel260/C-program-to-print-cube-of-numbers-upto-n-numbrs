#include<stdio.h>
int main()
{
    int a,i,cube;
    printf("Enter any number : ");
    scanf("%d",&a);
    for(i=1;i<a+1;i++)
    {
        cube=i*i*i;
        printf("%d\n",cube);
    }
    
    return 0;
}