#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ll long long

int main()
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    int lwrCnt = 0, uprCnt = 0;
    
    for(int i = 0; i < len; i++){
        if(islower(s[i])) lwrCnt++;
        else if(isupper(s[i])) uprCnt++;
    }
    
    if(lwrCnt >= uprCnt){
        for(int i = 0; i < len; i++){
            if(isupper(s[i])) s[i] += 32;
        }
    }
    
    if(lwrCnt < uprCnt){
        for(int i = 0; i < len; i++){
            if(islower(s[i])) s[i] -= 32;
        }
    }
    
    printf("%s", s);
    return 0;
}
