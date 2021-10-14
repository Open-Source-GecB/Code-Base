//C++ Code to Visualize Use of Iterators in C++
#include <iostream> 
#include <vector> 
using namespace std;   
int main() 
{ 
    vector<int> a; //Declaration of vector in C++
   
   //Initializing vector ‘a’ with values from 1 to 7
    for (int i = 1; i <=7 ; i++) 
        a.push_back(i); 

    //Printing the Output of vector ‘a’ using iterators  begin() and end()  
    cout << "Output of begin and end Function: "; 
    for (auto i = a.begin(); i != a.end(); ++i) 
        cout << *i << " "; 
   
   //Printing the Output of vector ‘a’ using iterators cbegin() and cend()
    cout << "\nOutput of cbegin and cend Function: "; 
    for (auto i = a.cbegin(); i != a.cend(); ++i) 
        cout << *i << " "; 
   
   //Printing the output of vector ‘a’ using iterators rbegin() and rend()
    cout << "\nOutput of rbegin and rend Function: "; 
    for (auto ir = a.rbegin(); ir != a.rend(); ++ir) 
        cout << *ir << " "; 
  
    //Printing the output of vector ‘a’ using iterators crbegin() and crend()
    cout << "\nOutput of crbegin and crend Function: "; 
    for (auto ir = a.crbegin(); ir != a.crend(); ++ir) 
        cout << *ir << " "; 
  
    return 0; 
} 
