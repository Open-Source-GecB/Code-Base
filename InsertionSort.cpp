#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
	for(int i=1; i<=n-1; i++){
		int current = arr[i];
		int prev = i-1;
		//loop to find the right index where the element current should be inserted
		while(prev>=0 and arr[prev]>current){
			arr[prev+1] = arr[prev];
			prev--;
		}
		arr[prev+1] = current;
	}
}

int main(){
	int arr[] = {0,1,2,9,3,-1};
	
	int n= sizeof(arr)/sizeof(int);
	
	InsertionSort(arr,n);
	
	for(int i= 0; i<n; i++){
		cout<<arr[i]<<",";
	}
	return 0;
	
}
