// Reverse the array || cpp || gfg ||https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


#include<iostream>
using  namespace std;

void reverse(int arr[], int n){
    int i=0; // creating two variables
    int j=n-1;
    while(i<j){
        swap(arr[i], arr[j]); // swapping the values
        i++; j--; // updation
    }
    
}

int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr, 5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }
}