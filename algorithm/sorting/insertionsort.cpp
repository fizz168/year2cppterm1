// no one use this shit lmao 
#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int cur = arr[i]; // pick a number in arr
        int prv = i - 1; // starting spot of array 
        while(prv >= 0 && arr[prv] > cur){ // compare cur to sort pile on left 
            arr[prv + 1] = arr[prv]; // since prv bigger than cur so we shift the space and put cur 
            prv--;
        }
        arr[prv + 1] = cur;//placing cur element in it correct position
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
    insertionsort(arr, n);
    printArr(arr, n);

    return 0;
}