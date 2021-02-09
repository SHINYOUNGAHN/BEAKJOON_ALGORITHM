#include<stdio.h>

int main(void){
    int a, b;
    
    setbuf(stdout, NULL);
    scanf("%d %d", &a, &b);
    
    printf("%d", a+b);
    
    return 0;
}
