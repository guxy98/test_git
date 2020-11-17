#include<stdio.h>
int main()
{
     int a[10],b[10],i,j=0,n;
     for(i=0;i<10;i++)
        scanf("%d",&a[i]);
     scanf("%d",&n);
     for(i=0;i<10;i++)
        if(a[i]!=n) {b[j]=a[i];j++;}

     if(j==10) printf("fail!");
     else{
          for(i=0;i<j;i++)
             printf("%d ",b[i]);
         }
     return 0;
}
