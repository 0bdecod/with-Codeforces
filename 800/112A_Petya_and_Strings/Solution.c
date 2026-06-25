#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c1[101], c2[101];
    scanf("%s %s", c1, c2);
    for(int i = 0; i < strlen(c1); i++) {
		if (c1[i] >= 'A' && c1[i] <= 'Z') {
			c1[i] = c1[i] - 'A' + 'a';
		}
		if (c2[i] >= 'A' && c2[i] <= 'Z') {
			c2[i] = c2[i] - 'A' + 'a';
		}
	}
    
    for(int i = 0; i < strlen(c1); i++){
        
        if(c1[i] != c2[i]){
            
            if(c1[i] > c2[i]){
                printf("1");
                return 0;
            }
            
            else if(c1[i] < c2[i]){
                printf("-1");
                return 0;
            }
        
        }
        
    }
    printf("0");
    return 0;
}
