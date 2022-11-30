#include <stdio.h>
int x = 1,sp, pi = 1;
int main(){
    while (x!=0){
        scanf("%d", &x);
        if (x==0){ printf("%d %d", sp, pi); break;}
        int c=0;
        while (x>c){
            c+=2;
            if (x==c) {sp+=x; break;}
            if(x<c){pi*=x;}}
        }
    return 0;
}