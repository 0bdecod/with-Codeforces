#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    int step = a / 5;
    if(a % 5 != 0){
        step++;
    }
    
    printf("%d", step);
    
    return 0;
}
