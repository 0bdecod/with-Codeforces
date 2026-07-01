#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    int k, w, total = 0;
    ll n;
    
    scanf("%d %lld %d", &k, &n, &w);
    
    for(int i = 1; i <= w; i++){
        total = total + (i*k);
    }
    
    if(total <= n) printf("0");
    else printf("%d", total - n);
    return 0;
}
