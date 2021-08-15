#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,a[1000],i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    m=n;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[m-1];
        a[m-1]=temp;
        m--;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
