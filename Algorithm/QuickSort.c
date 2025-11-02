//Quick Sort Algorithm

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int partition(int numbers[], int i, int k){
  
int l,h;
int midpoint = i + (k-i)/2;
int pivot = numbers[midpoint];
int temp;
bool done = false;
l =i;
h=k;
while(!done){
    while(numbers[l] < pivot){
        l++;
    }
    while(pivot < numbers[h]){
        --h;
    }
    if(l>= h){
        done = true;
    }else{
        temp = numbers[l];
        numbers[l] = numbers[h];
        numbers[h] = temp;
        l++;
        h--;
    }
}
 return h;
}

void Quicksort(int numbers[], int i, int k){
   int j;
   if(i >= k){
       return;
   }
   j= partition(numbers,i,k);
   Quicksort(numbers, i, j);
   Quicksort(numbers, j+1, k);
    
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
    
 
    Quicksort(arr, 0, input-1);
     printf("sorted array : ");
    for(int i=0; i < input; i++  ){
      printf("%d ", arr[i]);  
    }

    free(arr);
    return 0;
}
