#include <stdio.h>

int main() {
    int i,a,b;
    char str[10][10]={"one\n","two\n","three\n","four\n","five\n","six\n","seven\n","eight\n","nine\n"};
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<9){
    printf("%s",str[a-1]);
    }else{
        printf("greater than 9\n");
    }
    if(b<9){
    printf("%s",str[b-1]);
    }else {
        printf("greater than 9");
    }
    
    
    return 0;
}
