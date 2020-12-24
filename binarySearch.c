#include <stdio.h>

int main(void) {
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
  int key = 8;
  int first = 0;
  int sizeArray = sizeof(arr)/sizeof(arr[0]);
  int last = sizeArray - 1;
  int mid = (first + last) / 2;
  int i = 0;
  while(i <= last) {

    if(arr[mid] < key){
      first = mid + 1;
    }
    else if (arr[mid] == key){
      printf("index = %i\n", mid);
      printf("element = %i\n", arr[mid]);
      break;
    }
    else{
      last = mid - 1;
    }
    mid = (first + last) / 2;
    i++;
  }
  if (i > last) {
    printf("this elements is not in the array");
  }
}
