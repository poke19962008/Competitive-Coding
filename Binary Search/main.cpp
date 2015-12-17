/*Author: SAYAN DAS*/

#include <iostream>
using namespace std;

int binSearch(int arr[], int len, int item){
    int fin = len-1;
    int init = 0;
    
    while(init <= fin){
        int mid = init + (fin - init)/2;
        
        if(arr[mid] < item){
            init = mid+1;
        }else if(arr[mid] > item){
            fin = mid-1;
        }else{
            return mid;
        }
    }
    
    return -1;
}

int main() {
    int arr[5] = {1, 4, 7, 10, 12};
    
    cout<<binSearch(arr, 5, 10);

    return 0;
}

