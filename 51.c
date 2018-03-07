#include<stdio.h>
#include<string.h>
int main()
{
     int a[100],i,j,t,w;
     printf("enter n");
     scanf("%d",&w);
     printf("enter elements");
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     }
     for(i=0;i<n;++i)
     {
        for(j=i+1;j<n;++j)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }}
        for(i=1;i<=1;i++)
        {
        printf("%d",a[i]);
        }
     }
