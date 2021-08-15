#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,a[10],b[20];
    scanf("%c",&c);
    scanf("%s\n",a);
    scanf("%[^\n]%*c",b);
    printf("%c\n",c);
    printf("%s\n",a);
    printf("%s\n",b);   
    return 0;
    
}
