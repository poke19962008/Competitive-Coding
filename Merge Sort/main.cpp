/*Author: SAYAN DAS*/

#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


// merge arr[l...m] and arr[m+1...r]
void merge(int arr[], int m, int l, int r){
    int lenL = m-l + 1;
    int lenR = r-m;
    int L[lenL], R[lenR];
    
    for(int i=0; i<lenL; i++) L[i] = arr[l + i];
    for(int i=0; i<lenR; i++) R[i] = arr[1 + m+i];
    
    int i=0, j=0, k=l;
    while(i<lenL && j<lenR){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;k++;
        }else{
            arr[k] = R[j];
            j++;k++;
        }
    }
    
    while(i<lenL){
        arr[k] = L[i];
        i++;k++;
    }
    
    while(j<lenR){
        arr[k] = R[j];
        j++;k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
    
        merge(arr, m, l, r);
    }
    
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
/* Driver program to test above functions */
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
