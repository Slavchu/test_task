#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned int n;
    printf("enter array size:");
    scanf("%i", &n);
    char * arr = calloc(n, 1);
    printf("enter array:");
    for(int i = 0; i < n - 2; i++){
        int num;
        scanf("%i", &num);
        if (num > n-1){
            printf("out of range");
            return -1;
        }
        arr[num-1] = 1;
    }
    printf("missing numbers:");
    for(int i = 0; i < n; i++){
        if(!arr[i]){
            printf("%i,", i+1);
        }
    }
    printf("\b");
    free(arr);
    return 0;
}