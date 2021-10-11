/*

Palindromic patitioning | CPP | GeeksForGeeks | C++ | https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1 | By- Sushant Pandey

Given a string str, a partitioning of the string is a palindrome partitioning if every sub-string of the partition is a palindrome. Determine the fewest cuts needed for palindrome partitioning of given string.

Example 1:

Input: str = "ababbbabbababa"

Output: 3

Explaination: After 3 partitioning substrings are "a", "babbbab", "b", "ababa".

*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
  int t[501][501];

  bool isPalindrome(string s, int i, int j) {
    if(i>=j) {
      return true;
    }
    
    while(i<j) {
      if(s[i]!=s[j]) {
        return false;
      }
      i++;
      j--;
    }

    return true;
  }
  
  int findPartitions(string s, int i, int j) {
    if(i>=j) {
      return 0;
    }
    
    if(isPalindrome(s, i, j)) {
      return 0;
    }
    
    if(t[i][j] != -1) {
      return t[i][j];
    }
    
    int ans = INT_MAX;
    
    for(int k=i; k<=j-1; k++) {
      int a1, a2;

      if(t[i][k] != -1) {
        a1 = t[i][k];
      } else {
        a1 = findPartitions(s, i, k);
        t[i][k] = a1;
      }

      if(t[k+1][j] != -1) {
        a2 = t[k+1][j];
      } else {
        a2 = findPartitions(s, k+1, j);
        t[k+1][j] = a2;
      }

      int temp = 1 + a1 + a2;
      ans = min(ans, temp);
    }
    
    return t[i][j] = ans;
  }

public:
  int palindromicPartition(string str)
  {
    memset(t, -1, sizeof(t));
    return findPartitions(str, 0, str.size()-1);
  }
};

int main(){
  int t;
  cin>>t;
  while(t--){
    string str;
    cin>>str;
    
    Solution ob;
    cout<<ob.palindromicPartition(str)<<"\n";
  }
  return 0;
}