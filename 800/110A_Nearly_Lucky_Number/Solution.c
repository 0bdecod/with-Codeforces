#include <stdio.h>

int main()
{
    long long n;
    int cnt = 0;
    scanf("%lld", &n);
    
    while(n > 0){
        long long digit = n % 10;
        if(digit == 4 || digit == 7) cnt++;
        n /= 10;
    }
    
    if(cnt == 4 || cnt == 7) printf("YES");
    else printf("NO");

    return 0;
}
