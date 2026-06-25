#include <stdio.h>
#include <string.h>
 
int main(){
    int n, cnt = 0, total = 0;
    scanf("%d", &n);
    int n1[4];
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &n1[j]);
            cnt += n1[j];
        }
        if(cnt >= 2) total++;
        cnt = 0;
    }
    printf("%d", total);
    return 0;
}
