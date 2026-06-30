#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int n[101], a = 0;
    
    scanf("%s", s);
    
    int len = strlen(s);
    
    for(int i = 0; i < len; i++){
        if(s[i] != '+'){
            n[a] = s[i] - '0';
            a++;
        }
        else continue;
    }
    
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - 1 - i; j++) {
            if (n[j] > n[j + 1]) {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < a; i++){
        printf("%d", n[i]);
        if(i != a - 1) printf("+");
    }
    
    return 0;
}
