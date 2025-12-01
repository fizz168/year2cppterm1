// no one use this shit lmao 
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){ // time complexity o(n^2)
    for(int i = 0; i < n - 1; i++){
    int smallestIndex = i; //unsorted part
    for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[smallestIndex]){ 
            smallestIndex = j;
        }
    }
    swap(arr[i], arr[smallestIndex]);// swap between unsorted and the smallest element
    }
}
void printArr(int arr[], int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<< " "<<endl;

    }
    cout<<endl;
}
int main(){
    int arr[] = {1, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]); // auto count size of array 
    // bubblesort(arr, n);
    // printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}