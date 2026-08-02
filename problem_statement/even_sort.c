 /*
  Sort the elements in odd places of Index. 
        Input: 13, 2, 4, 15, 12, 10, 5. 
            Output: 13,2, 4, 10, 12, 15, 5  */

#include <stdio.h>
#include <stdlib.h> 

void sort(int arr[], int n) {
    for (int i = n-1; i >= 0; i -= 2) {
        for (int j = i - 2; j > 0; j -= 2) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    
    
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    
     printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
 
