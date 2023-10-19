#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, temp, n, min;
    int arr[5] = {5,4,3,2,1};
    int count = 0;

    n = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < n; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }    
        }
        temp = arr[j];
        arr[min] = arr[i];
        arr[i] = temp;
        count++;
    }

    printf("The worst case sorted array is: %d", count);

    
}