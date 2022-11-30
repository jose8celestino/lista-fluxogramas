#include <stdio.h>
int m,s,c,x;
int p=1;
int main(){
    do {
        scanf("%d", &x);
        if (c==0){ m = x; c+=1; }
        if (x<m) { m = x;}
        if (x > 10){ s = s + x;}
        if (x>200) { p = p * x;}
    } while(x!=0);
    printf("%d %d", s, p);
    return 0;
}