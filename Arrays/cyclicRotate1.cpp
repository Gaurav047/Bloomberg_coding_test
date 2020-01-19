// Cyclically rotate an array by one element
#include <bits/stdc++.h>
using namespace std;


void cyclicRotate( int arr[], int size ){
    int temp;
    temp = arr[0];
    for ( int i=0 ; i<size-1 ; i++ ){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}

void printArray( int arr[] , int size ){
    for ( int i=0 ; i<size ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cyclicRotate(arr, n );
    printArray(arr, n);

}