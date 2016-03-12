/* 
Author: Byron Lambrou
Description:Implementation of insertion sort in C
Takes integer input from STDIN, outputs result to STDOUT
*/
#include <stdio.h>

int main(int argc, char *argv[]){
  int key;
  // Dynamically allocate array to hold sorting
  int *array_to_sort;
  array_to_sort = (int *)malloc(sizeof(int)*argc);
  // Now read over integers using atoi()
  for (int i=0; i<argc; i++){
    array_to_sort[i] = atoi(argv[i]);
    printf(array_to_sort[i]);
  }
  for(int j=1; j<argc; j++){
    key = array_to_story[j]
  }

}