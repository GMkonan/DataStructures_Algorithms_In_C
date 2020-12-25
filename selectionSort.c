#include <stdio.h>

void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(void) {
  int arr[] = {6,76,2,41,87,1,5};
  int sizeArray = sizeof(arr) / sizeof(arr[0]);
  int index;
  for(int i = 0; i < sizeArray; i++) {
    //printf("%i\n", arr[i]);
    index = i;
    for(int j = i+1; j < sizeArray; j++){
      if(arr[j] < arr[index]) {
        index = j;
      }
    }
    swap(&arr[index], &arr[i]);

  }
  //print array
  for(int z = 0; z < sizeArray; z++){
    printf("%d ", arr[z]);
  }
  printf("\n");
}
