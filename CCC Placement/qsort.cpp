#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}


int partition(int arr[], int start, int end) {
  int pivot = arr[end];
  int ind = start-1;
  for(int i=start; i<end; i++) {
    if(arr[i]<=pivot) {
      ind++;
      swap(arr[ind], arr[i]);
    }
  }

  swap(arr[ind+1], arr[end]);
  return ind+1;
}

void quickSort(int arr[], int start, int end) {
  if(start<end){
    int pi = partition(arr, start, end);

    quickSort(arr, start, pi-1);
    quickSort(arr, pi+1, end);
  }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}
