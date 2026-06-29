#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);
    
    int len = strlen(s);
    
    int cnt = len;
    
    for(int i = 1; i < len; i++){
        for(int j = i; j > 0; j--){
            if(s[i] == s[j-1]){
                cnt--;
                break;
            }
        }
    }
    
    if(cnt % 2 == 1) printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");
    
    return 0;
}
