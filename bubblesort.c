#include <stdio.h>

int main(){

  int arr[] = {97,2,1,45,34};
  int N = 5; 

  for(int i=0; i < N-1; i++){

    for(int j=i; j < N-i-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for(int i=0; i<N-1; i++){
    printf("%d", arr[i]);
  }
  
  return 0;
}