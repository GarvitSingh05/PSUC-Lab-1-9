#include<stdio.h>
int main()
{
    int num,PrimeCount=0,i,flag,prime=1;
    printf("Enter the Number : \n");
    scanf("%d",&num);
    while(num!=PrimeCount)
    {
        flag=0;
        prime++;
        for(i=2;i<=(prime/2);i++)
        {
            if(prime%i==0)
                flag=1;
        }
        if(flag==0)
        {
            PrimeCount++;
        }
    }
    printf("%d\n", prime);
    return 0;
}
