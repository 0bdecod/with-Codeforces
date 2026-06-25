#include <stdio.h>
#include <string.h>
 
int main(){
    int n, cnt = 0;
    char s[4];
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%s", s);
        if(s[0] == s[1] && s[1] == '-') --cnt;
        else if(s[0] == s[1] && s[1] == '+') ++cnt;
        else if(s[1] == s[2] && s[2] == '-') cnt--;
        else if(s[1] == s[2] && s[2] == '+') cnt++;
    }
 
    printf("%d", cnt);
    return 0;
}
