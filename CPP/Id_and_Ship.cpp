// Id_and_Ship | CPP | CodeChef | C++ | https://www.codechef.com/problems/FLOW010 | Devraj Jhala
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin >> t;

    while(t--){
        char type; cin >> type;

        if(type == 'B' || type == 'b'){
            cout << "BattleShip" << endl;
        }

        else if(type == 'C' || type == 'c'){
            cout << "Cruiser" << endl;
        }

        else if(type == 'D' || type == 'd'){
            cout << "Destroyer" << endl;
        }

        else if(type == 'F' || type == 'f'){
            cout << "Frigate" << endl;
        }
    }

    return 0;
}
