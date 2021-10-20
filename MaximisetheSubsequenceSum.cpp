// Maximise the Subsequence Sum | CodeChef | C++ | https://www.codechef.com/problems/SIGNFLIP | By- Amitesh Keshari

#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define Fo(k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define Tc ll t;cin>>t;while(t--)
 
int main()
{
   Tc{
       int n,k;
       cin>>n>>k;

       vector<int>v(n);
       Fo(0,n)cin>>v[i];
       

       // sort the array
       sort(v.begin(),v.end());

       // After sorting multiply first k elements who are smaller than 0 with -1
       Fo(0,k){      
           if(v[i]<0){
               v[i] = v[i]*(-1);
           }
       }

       int sum = 0;
       // Add the elements who are greater than 0 in an array
       Fo(0,n){
           if(v[i]>=0){
               sum+=v[i];
           }
       }
       cout<<sum<<endl;
   }
  return 0;
}
 
