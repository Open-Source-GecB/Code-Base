/*
Pointer | CPP | HackerRank | C++ | https://www.hackerrank.com/challenges/c-tutorial-pointer | By- Arwaz Khan

A pointer in C++ is used to share a memory address among different contexts (primarily functions).
They are used whenever a function needs to modify the content of a variable, but it does not have ownership.
Function Description

Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, so there is no value to return. 
Modify the values in memory so that  contains their sum and  contains their absoluted difference.
*/

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
      int t = *a;
      (*a)=(*a)+(*b);
      if (t > *b){
          *b = t - *b;
      }
      else{
      *b = *b - t;}
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
