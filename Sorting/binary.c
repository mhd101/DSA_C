// #include <stdio.h>

// int main() {

//   int arr[] = {1, 3, 45, 57, 83, 97};
//   int N = 6;
//   int element = 97;
//   int start = 0;
//   int end = N - 1;
//   while (start <= end) {
//     int mid = (start + end) / 2;
//     if (arr[mid] == element){
//       printf("Element found at index %d", mid);
//       return mid;
//     } else if(arr[mid] > element){
//       end = mid - 1; 
//     } else {
//       start = mid + 1; 
//     }
//   }

//   printf("Element not found");
//   return -1;
// }