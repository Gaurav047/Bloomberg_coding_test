// Block Swap Algorithm
#include <bits/stdc++.h>
using namespace std;

// swap will swap d elements from fi,.. fi+d-1 to si,...si+d-1 positions.
void swap( int arr[] , int fi, int si, int d){
    int i, temp;
    for ( i=0 ; i< d ; i++ ){
        temp = arr[fi+i];
        arr[fi+i] = arr[si+i];
        arr[si+i] = temp;
    }
}

void leftRotate( int arr[], int d, int n){
    int i,j;
    if ( d == 0 || d == n ){
        return;
    }
    i = d;
    j = n-d;
    while( i != j){
        if ( i < j ){ //A is Shorter than B
            swap(arr, d-i, d+j-i, i);
            j -= i;
        }
        else {  // B is shorter 
            swap(arr, d-i, d, j);
            i -= j;
        }
    }
    swap(arr, d-i, d, i);

}


// void leftRotate( int arr[], int d, int n){
//     // Rotate if number of elements to be rotated is
//     // zero or equal to array size
//     if ( d == 0 || d == n ){
//         return;
//     }
//     // If number of elements to be rotated is exactly
//     // half of array size.
//     if ( n-d == d ){
//         swap(arr, 0, n-d, d);
//         return;
//     }

//     // If A is shorter 
//     if ( d < n-d ){
//         swap(arr, 0, n-d, d);
//         leftRotate(arr, d, n-d);
//     }
//     else { // If B is shorter
//         swap(arr, 0, d, n-d);
//         leftRotate(arr+n-d, 2*d -n, d);
//     }
// }

void printArray(int arr[], int size ){
    int i;
    for ( int i=0 ; i< size ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}