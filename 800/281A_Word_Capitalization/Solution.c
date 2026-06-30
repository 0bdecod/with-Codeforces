#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    
    if(islower(s[0])){
        s[0] -= 32;
    }
    
    printf("%s", s);
    return 0;
}
