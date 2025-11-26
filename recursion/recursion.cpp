#include <iostream>
using namespace std;
void printNum(int n){ //recursive function 
    if(n == 1){
        cout<<"1\n";
        return;
    }
   cout<< n << " ";  
   printNum (n - 1);
}
int factorial(int n){
    if(n == 0){
      return 1;
    }
    return n* factorial(n - 1);

}
int main(){
    //printNum(1);
cout<<factorial(5)<<endl; 

    return 0;

}