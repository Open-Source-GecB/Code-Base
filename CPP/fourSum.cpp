/******************************************************************************

4sum | CPP | Leetcode | C++ | https://leetcode.com/problems/4sum/ | By- Sanya Ramchandani


Problem link : https://leetcode.com/problems/4sum/
Approach : 
To solve the problem , firstly we will store the sum of possible two elements of an array in hash table. Then we will iterate 
and find the sum of remaining two elements in the map. 
Steps :
1. Sort the given array.
2. Store sums of all pairs in a hash table.
3. If a pair is found with the required sum, then make sure that all elements are distinct array elements and an element is not
   considered more than once. 
*******************************************************************************/
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long i,j,l,r,n,pair_sum;
        //    Sort the given array.
        sort(nums.begin(),nums.end());
        n=nums.size();
        unordered_map<int,vector<pair<int,int>>>mp;
        set<vector<int>>s;
        vector<vector<int>>ans;
        // Store sums of all pairs
        // in a hash table
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                pair_sum=nums[i]+nums[j];
                mp[pair_sum].push_back(make_pair(i,j));
            }
        }
   // Traverse through all pairs and search
    // for X - (current pair sum).
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(j>i+1 and nums[j]==nums[j-1]){
                    continue;
                }
              // If X - sum is present in hash table,
                if(mp.find(target-(nums[i]+nums[j]))!=mp.end()){
                    for(auto x:mp[target-(nums[i]+nums[j])]){
                        int k=x.first;
                        int l=x.second;
                       // Making sure that all elements are
                        // distinct array elements and an element
                        // is not considered more than once.
                        if(j<k&&j<l&&k<l){
                            s.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }
        for(auto x : s){
            ans.push_back(x);
        }
        return ans;
}

int main()
{
    vector<int> vect;
    int a, n, i, j;
    cout << "Enter number of elements" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        vect.push_back(a);
    }

    vector<vector<int>> result = fourSum(vect);
    for(i=0;i<ans.size();i++){
      for(j=0;j<ans[i].size();j++){
        cout<<result[i][j]<<" ";
      }
      cout<<endl;
    }
  return 0;
}
