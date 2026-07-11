#include <stdio.h>

void Descending(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int swapped = 0;
        
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        
        if(swapped == 0){
            break;
        }
    }
}

int main(){
    int n, c[101];
    scanf("%d", &n);
    
    int h = 0, cnt = 0, total = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d", &c[i]);
        total += c[i];
    }
    
    Descending(c, n);
    
    while(h * 2 <= total){
        h += c[cnt];
        cnt++;
    }
    
    printf("%d", cnt);
    
    return 0;
}
