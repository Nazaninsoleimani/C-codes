// selection sort algorithm
#include <stdio.h>
#include <stdlib.h>

void selectionsort(int numbers[], int numsize){
   int indexsmallest;
   int temp;
   for(int i=0; i<numsize -1; i++){
       indexsmallest = i;
       for(int j= i+1; j<numsize; j++){
           if(numbers[j] < numbers[indexsmallest]){
               indexsmallest = j;
           }
       }
       temp = numbers[i];
       numbers[i] = numbers[indexsmallest];
       numbers[indexsmallest] = temp;
   }
   
}


int main()
{

    int input;
    printf("Enter the size:");
    scanf(" %d", &input);
    int *arr = (int *)malloc(input * sizeof(int));
    if (arr == NULL) {
        // Handle error if allocation fails
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the array: (unsorted) ");
    for(int i=0; i < input; i++  ){
      scanf("%d", &arr[i]);  
    }
    
 
    selectionsort(arr, input);
     printf("Sorted array : ");
    for(int i=0; i < input; i++  ){
      printf("%d ", arr[i]);  
    }
    free(arr);
    return 0;
}
