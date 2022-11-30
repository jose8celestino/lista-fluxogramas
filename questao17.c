#include <stdio.h>

int m,s,c;
int p = 1, x = 1;
int main(){
    while (x!=0){
        printf("Insira um número: ");
        scanf("%d", &x);
        if (x==0){
            printf("%d %d %d", s, p, m);
            break;
        }
        if (c==0){
            m = x;
            c+=1;
        }
        if (x<m){
            m=x;
        }
        if (x>10){ s = s + x; }
        if (x>200){ p = p * x; }
        
    }
    return 0;
}