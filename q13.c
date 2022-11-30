#include <stdio.h>
#include <stdlib.h>
#include  <stdbool.h>

// int main(){
//     int x = 1, p=1;
//     do{
//         scanf("%d", &x);
//         if (x==0){printf("%d", p); break;}
//         p = p * x;
        
//     } while(x!=0);
//     return 0;
// }

int x=1, p=1;
int main(){
    while (x!=0){
        scanf("%d", &x);
        if (x==0){printf("%d", p); break;}
        p = p*x;
    }
    return 0;
}
