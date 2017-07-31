#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int N;

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int divide(int arr[], int start, int end) {
  int pivot = arr[end];

  int j = start-1;
  for (size_t i = start; i <= end-1; i++) {
    if(arr[i] <= pivot) {
      swap(&arr[++j], &arr[i]);
    }
  }
  swap(&arr[j+1], &arr[end]);

  for(int i=0; i<N; i++) cout<<arr[i]<<" ";
  cout<<endl;

  return j+1;

}

void qSort(int arr[], int start, int end) {
  if(start < end) {
    int ind = divide(arr, start, end);

    qSort(arr, start, ind-1);
    qSort(arr,  ind+1, end);
  }

}


int main() {
    // #ifndef ONLINE_JUDGE
    //   freopen("test.txt", "r", stdin);
    // #endif

    // int N;
    int arr[1000006];
    cin>>N;

    for(int i=0; i<N; i++) cin>>arr[i];

    qSort(arr, 0, N-1);

    return 0;
}
