#include <stdlib.h>
#include <stdio.h>


int main(){

    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int list[n];

    printf("Enter the numbers for the array: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&list[i]);
    }

    int key;
    printf("Enter the value of the key: ");
    scanf("%d",&key);
    

    int count = 0;
    for (int i = 0; i < n; i++){
        if (list[i] == key){
            count++;
        }
    }
    printf("The number of occurences of the key is: ");
    printf("%d",count);

    return 0;
}