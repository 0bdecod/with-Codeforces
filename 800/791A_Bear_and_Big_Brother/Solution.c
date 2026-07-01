#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(int i = 1; i != '\0'; i++){
        a *= 3;
        b *= 2;
        
        if(a > b){
            printf("%d", i);
            break;
        }
        
        else continue;
    }

    return 0;
}
