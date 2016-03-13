/* 
Author: Byron Lambrou
Description:Implementation of insertion sort in C
Takes integer input from STDIN, outputs result to STDOUT
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  int key;
  int *array_to_sort;
  int elements;
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
  // Now read it into our array
  for(int i=0; i<elements; i++){
    // printf("i = %d \n",i);
    // printf("num = %d \n",atoi(split));
    array_to_sort[i]=atoi(split);
    split = strtok(NULL, " ");
  }
  
  // Clean up to avoid memory leaks
  free(array_to_sort);
}