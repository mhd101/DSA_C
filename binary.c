#include <stdio.h>

int main() {

  int arr[] = {1, 3, 45, 57, 83};
  int N = 5;
  int element = 83;
  int start = 0;
  int end = N - 1;
  while (start < end) {
    int mid = (start + end) / 2;
    if (arr[mid] > element) {
      end = mid - 1;
    } else if (arr[mid] < element) {
      start = mid + 1;
    } else {
      printf("Element found at index %d", mid);
    }
  }

  return 0;
}