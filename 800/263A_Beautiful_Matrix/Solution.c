#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    int x;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &x);
 
            if(x == 1){
                printf("%d", abs(i - 2) + abs(j - 2));
            }
        }
    }
    return 0;
}
