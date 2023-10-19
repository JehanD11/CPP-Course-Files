# include <stdio.h>

int main() {
    int n, i, j, temp, count = 0, swap = 0;

    printf("\nPlease enter the total number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("\nPlease enter the array elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            count++;
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap++;
            }
        }
    }
    printf("\nList sorted in descending order: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    
    int predicted_steps = (n*(n-1))/2;
    printf("\nAccording to the formula we should get= %d", predicted_steps);
    printf("\nand no. of times the comparisons were made= %d", count);
    printf("\nHence proved!");
    printf("\nThe number of swappings in this case is %d", swap);
    return 0;
}