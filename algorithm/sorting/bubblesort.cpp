// no one use this shit lmao 
#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){ // time complexity is o(n^2)
    for(int i = 0; i < n - 1; i++){
        for(int j = n; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){// handle the swap
                swap(arr[j], arr[j+1]); // handle the swap
            }
        }

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
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubblesort(arr, n);
    printArr(arr, n);

    return 0;
}