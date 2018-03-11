//Add.cpp
//Aaron Nicanor
//anicnor

#include <iostream>

bool legal_int(char*);

using namespace std;


int main(int argc, char *argv[]){
    
	int total = 0;
	for(int i = 1; i < argc; i++){
        
    	if (!legal_int(argv[i])){
            
        	cerr<<"Error: illegal integer."<<endl;
        	exit(1);
    	}
        
    	total = total + atoi(argv[i]);
    	}
	cout << total << endl;
	return 0;
}

bool legal_int(char *str){
    
	while (*str != 0){
        
    	if (!isdigit(*str)){
            
    	return false;
        }
        
    	str++;
	}
	return true;
}

