#include <stdio.h>
#include <string.h>
 
int main(){
    int n, k, cnt = 0;
    int a[101];
    scanf("%d %d", &n, &k);
 
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
 
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k-1] && a[i] >= 1) cnt++;
    }
    
    printf("%d", cnt);
    return 0;
}
