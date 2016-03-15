/* 
Author: Byron Lambrou
Description:Implementation of insertion sort in C
Takes integer input from STDIN, outputs result to STDOUT
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array();
int *array_to_sort;
int elements;

int main(int argc, char *argv[]){
  int key;
  char input_size [10];
  char input [1024];
  char * split;
  // Get number of variables to sort
  fgets(input_size, 9, stdin);
  elements = atoi(input_size);
  // printf("%d \n",elements);
  // Dynamically allocate array to hold array
  array_to_sort = (int *)malloc(sizeof(int)*elements);
  // Read elements in array from stdin
  fgets(input, 1024, stdin);
  // Split string on whitespace
  split = strtok(input, " ");
  // Read it into our array
  for(int i=0; i<elements; i++){
    // printf("i = %d \n",i);
    // printf("num = %d \n",atoi(split));
    array_to_sort[i]=atoi(split);
    split = strtok(NULL, " ");
  }
  // Now, begin sorting
  for(int i=1; i<elements; i++){
    int j = i;
    while( j>0 && array_to_sort[j-1] > array_to_sort[j]){
      // Swap array[j] and array[j-1]
      array_to_sort[j]^=array_to_sort[j-1];
      array_to_sort[j-1]^=array_to_sort[j];
      array_to_sort[j]^=array_to_sort[j-1];
      // Then j--
      j--;
    } 
    // Print array out to show progress
    print_array();
  }
  
  // Clean up to avoid memory leaks
  free(array_to_sort);
}

void print_array(){
  // Quick function to print the array to show progress as we sort it
  for(int i=0; i<elements; i++){
    printf("%d ", array_to_sort[i]);
    }
  printf("\n");
}
