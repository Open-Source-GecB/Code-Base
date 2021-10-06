/*
Longest Common Subsequence | CPP | GeeksForGeeks | C++ | https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1 | By- Ajinkya Deshpande

Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.

Example 1:

Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR

Output: 3

Explanation: LCS for input Sequences
“ABCDGH” and “AEDFHR” is “ADH” of
length 3.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int helper(int x, int y, string s1, string s2, vector<vector<int>>& arr) {
        if (x == 0 or y == 0) {
            arr[x][y] = 0;
            return 0;
        }
        
        if (arr[x][y] != -1) {
            return arr[x][y];
        }
        
        if (s1[0] == s2[0]) {
            arr[x][y] = 1+helper(x-1, y-1, s1.substr(1), s2.substr(1), arr);
            return arr[x][y];
        } else {
            int ans = helper(x-1, y, s1.substr(1), s2, arr);
            ans = max(ans, helper(x, y-1, s1, s2.substr(1), arr));
            arr[x][y] = ans;
            return ans;
        }
    }
public:
    int lcs(int x, int y, string s1, string s2) {
        vector<vector<int>> arr(x+1, vector<int>(y+1, -1));
        return helper(x, y, s1, s2, arr);
    }
};

int main() {
    int t,n,k,x,y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        string s1,s2;
        cin>>s1>>s2;
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
