#include<stdio.h>
void main()
{
    printf("Enter dividend: \n");
    int n;
    scanf("%d", &n);
    printf("Enter divisor: \n");
    int a;
    scanf("%d", &a);
    int temp=n;
    int q=0;
    while(temp>0)
    {
        temp-=a;
        q++;
    }
    printf("Quotient= %d\n",q-1);
    printf("Remainder= %d\n",temp+a);

}