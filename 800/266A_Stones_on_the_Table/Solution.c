#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char s[51];
    scanf("%s", s);
    
    int len = strlen(s), cnt = 0;
    
    for(int i = 0; i < len; i++){
        if(s[i] == s[i+1]){
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
