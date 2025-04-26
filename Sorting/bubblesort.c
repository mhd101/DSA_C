// #include <stdbool.h>
// #include <stdio.h>

// int main() {

//   int arr[] = {97, 2, 1, 45, 34};
//   int N = 5;

//   for (int i = 0; i < N-1; i++) { // N-1 bcz last element is already sorted
//     int min = i; // tracking minimum element
//     for (int j = i + 1; j < N; j++) {
//       if (arr[min] > arr[j]) {
//         min = j; // updating minimum element
//       }
//     }
//     // swapping
//     int temp = arr[i];
//     arr[i] = arr[min];
//     arr[min] = temp;
//   }

//   for(int i=0; i<N; i++){
//     printf("%d\n", arr[i]);
//   }
// }
