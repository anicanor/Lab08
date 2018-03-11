//reverse.cpp
//Aaron Nicanor
//anicnor

#include <iostream>
#include "dstack.h"

using namespace std;

int main(){
    
    double input;
    Dstack collec;

    while (cin >> input){
        
      collec.push(input);
    }
    cout << "There are " << collec.size() << " numbers in the stack." << endl;
    
    while (collec.pop(input)){
        
      cout << input << endl;
    } 

    cout << "There are " << collec.size() << " numbers in the stack." << endl;
    return 0;
}
