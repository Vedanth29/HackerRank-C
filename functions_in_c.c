#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int n;
    n=a;
    if(b>n)
    n=b;
    if(c>n)
    n=c;
    if(d>n)
    n=d;
    
    
    return n;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
