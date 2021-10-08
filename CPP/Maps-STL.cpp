// "Maps-STL" With C++ | CPP | HackerRank | C++ | https://www.hackerrank.com/challenges/cpp-maps/problem| By- Shreya Maheshwari

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q;
    cin>>Q;
    map<string,int> m;
        for(int i=0;i<Q;i++){
        int type;
        cin>>type;
        if(type==1){
            int marks;
            string name;
            cin>>name>>marks;
            if(m.find(name)!=m.end()){
                m[name]=marks+m[name];
            }
            else{
                m.insert(make_pair(name,marks));
            }
        }
        else if(type==2){
            string name;
            cin>>name;
            m.erase(name);
        }
        else if(type==3){
            string name;
            cin>>name;
            cout<<m[name]<<endl;
        }
    }
     
    return 0;
}

