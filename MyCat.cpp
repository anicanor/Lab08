//MyCat.cpp
//Aaron Nicanor
//anicanor

#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>

using namespace std;

int main(int argc, char *argv[]){

	if (argc < 3){
                

    	cerr << "Must specify input and output file." << endl;
    	return 1;
	}
	if (argc > 3){
                
    	cerr << "Too many command line arguments specified." << endl;
    	return 1;
	}

	ifstream my_ifile(argv[1], ios::in);

	ofstream my_ofile(argv[2], ios::out);

	if (!my_ofile){
                
    	cerr << "Could not open output file <" << argv[2] << ">." << endl;
    	return 1;
	}
	if (!my_ifile){
                
    	cerr << "Could not open input file <" << argv[1]<< ">."<<endl;
    	return 1;
	}

	string buffer;

	while (getline(my_ifile, buffer, '\n')){
                
    	my_ofile << buffer << endl;
	}
	return 0;
}
