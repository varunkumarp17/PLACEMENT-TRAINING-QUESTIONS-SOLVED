#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int evens[n], odds[n];
    int e = 0, o = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evens[e++] = arr[i];
        else
            odds[o++] = arr[i];
    }
    
    for(int i = 0; i < e; i++)
        printf("%d ", evens[i]);
    for(int i = 0; i < o; i++) {
        if(i == o-1)
            printf("%d", odds[i]);
        else
            printf("%d ", odds[i]);
    }
    
    return 0;
}