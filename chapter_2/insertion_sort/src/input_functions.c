/*
Author: Byron Lambrou
Description: Simple support functions to read basic test data for sorting
Test data follows the following format:
N
a1 a2 a3 a4 ... aN
Where N is the number of elements in the array,
and a1..aN are the respective integer elements of the array.
Test data is provided by STDIN.
*/
int get_array_size();
  // Read input size of an array from first line of a file
  int input_size;
  fgets(input_size, 9, stdin);
  // Return integer value of size of the array
  return atoi(input_size);
}

void read_array(int* our_array, int number_of_elements){
 // Reads input array from stdin and stores its integer values into the
 // pointer to the array provided.
 char * split;
 char input [1024];
 // Store our string into input
 fgets(input, 1024, stdin);
 // Start parsing through string to get numbers out
 split = strok(input, " ");
 for(int i=0; i < number_of_elements; i++){
  our_array[i] = atoi(split);
  split = strok(NULL, " ");
 }
}

