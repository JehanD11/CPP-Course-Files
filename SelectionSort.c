#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, temp, n;
    int arr[] = {10,9,8,7,6,5,4,3,2,1}; //Worst case complexity
    int count = 0;

    printf("Given Array for worst case: ");
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    n = sizeof(arr)/sizeof(arr[0]);
    for(i=0; i<n-1; i++){
        int min = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        count++;
    }

    printf("Count for worst case: %d\n", count);
    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}