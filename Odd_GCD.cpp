// Odd GCD |CodeChef | C++ | https://www.codechef.com/problems/BININVER | By- Amitesh Keshari
#include <bits/stdc++.h> //It is basically a header file that includes every standard library.
using namespace std;
typedef long long ll;

#define Tc    \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    Tc
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i<n;i++) cin >> a[i];

        int count = 0; //This to count the number of division taking place to make an element reach one or to make an element odd number
        vector<int> v;
        for(int i = 0;i<n;i++)
        {
            while (a[i] != 1)
            {  
                // if the particular array element is odd break out of the loop or if an element became odd after divison break out of the loop
                if(a[i]%2!=0)break;
                else{
                    count++;
                    a[i] /= 2;
                }
   
            }
            v.push_back(count); // now push the count into vector v
            count = 0; // again make count = 0 for another element
        }

            cout << *min_element(v.begin(), v.end()) << endl; // output the min element from the vector v;
        
    }
}
