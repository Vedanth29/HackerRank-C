#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,n,m=0,a[1000],i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    
for(j=n-1;j>0;j--)
{
    for(i=n-1;i>m;i--)
    {
        
        
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
    } 
    m++;
}
    
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
