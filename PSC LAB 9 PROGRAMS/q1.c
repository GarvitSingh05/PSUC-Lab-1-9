#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float avg[5],s1[5],s2[5],s3[5],sum[5];
clrscr();
for(i=0;i<5;i++)
{
printf("\nEnter marks of students %d in 3 subjects:",i+1);
scanf("%f%f%f",&s1[i],&s2[i],&s3[i]);
}
for(i=0;i<5;i++)
{
sum[i]=s1[i]+s2[i]+s3[i];
avg[i]=sum[i]/3;
}
for(i=0;i<5;i++)
printf("\nStudent %d's marks:\nTotal : %.2f\nAverage : %.2f",i+1,sum[i],avg[i]);
getch();
}