//https://www.codechef.com/problems/INTEST
#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int a; //number of inputs
    int b; // number to mod by
    int c; //test num
    int num = 0; //number 

    cin >> a >> b;

    while(a--){
        cin >> c;
        if (c % b == 0){
            num++;
        }
        

    }
    cout<<num;
    return 0;
}