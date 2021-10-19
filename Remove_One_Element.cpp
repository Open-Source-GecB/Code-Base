// Remove One Element | CodeChef | C++ | https://www.codechef.com/problems/REMONE | By- Amitesh Keshari

#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define Tc ll t;cin>>t;while(t--)
  
int main()
{
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   Tc{
       int n;
       cin>>n;
       
       vector<int>a(n);
       vector<int>b(n-1);
       for(int i = 0;i<n;i++)cin>>a[i];
       for(int i = 0;i<n-1;i++)cin>>b[i];

       sort(a.begin(),a.end());
       sort(b.begin(),b.end());

       
       int ans = abs(b[0]-a[1]);
       int ans1 = abs(b[0]-a[0]);

        int count =0;
       for(int i = 0;i<n;i++){
           if(b[i]-ans ==a[i+1])count++;
       }

       if(count==n-1)cout<<ans<<endl;
       else cout<<ans1<<endl;

       
   }
  return 0;
}
 
