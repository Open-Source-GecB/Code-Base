/*

Matrix Chain Multiplication | CPP | GeeksForGeeks | C++ | https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1 | By- Sushant Pandey

Given a sequence of matrices, find the most efficient way to multiply these matrices together. The efficient way is the one that involves the least number of multiplications.

The dimensions of the matrices are given in an array arr[] of size N (such that N = number of matrices + 1) where the ith matrix has the dimensions (arr[i-1] x arr[i]).

Example 1:

Input: N = 5
arr = {40, 20, 30, 10, 30}

Output: 26000

Explaination: There are 4 matrices of dimension 40x20, 20x30, 30x10, 10x30. Say the matrices are named as A, B, C, D. Out of all possible combinations, the most efficient way is (A*(B*C))*D. The number of operations are - 20*30*10 + 40*20*10 + 40*10*30 = 26000.

*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
  int t[101][101];

  int helper(int arr[], int i, int j) {
    if(i>=j) {
      return 0;
    }

    if(t[i][j] != -1) {
      return t[i][j];
    }

    int ans = INT_MAX;
    for(int k=i; k<=j-1; k++) {
      int temp = helper(arr, i, k) + helper(arr, k+1, j) + (arr[i-1]*arr[k]*arr[j]);
      ans = min(ans, temp);
    }
    return t[i][j] = ans;
  }
  
public:
  int matrixMultiplication(int N, int arr[])
  {
    memset(t, -1, sizeof(t));
    return helper(arr, 1, N-1);
  }
};

int main(){
  int t;
  cin>>t;
  while(t--){
    int N;
    cin>>N;

    int arr[N];
    for(int i = 0;i < N;i++) {
      cin>>arr[i];
    }
    
    Solution ob;
    cout<<ob.matrixMultiplication(N, arr)<<endl;
  }
  return 0;
}  