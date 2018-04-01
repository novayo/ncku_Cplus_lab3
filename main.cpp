#include<iostream>
#include<cstdlib>
#include<fstream>
#include "dataIn.h"
#define nSum 5
using namespace std;

int main(void) {
/////	Read File	/////
    ifstream infile("file.in", ios::in);
    if(!infile) {
        cerr << "Failed Opening" << endl;
        exit(1);
    }
    int num, sum=0;
    infile >> num;
    dataIn data(num);
    while(infile >> num) {
        data.getData(num);
    }
    infile.close();

/////	Sort and get sum	/////
    data.sortData();
    for(int i=nSum; i>0; --i) {
        sum += data.reData(i);
    }

/////	Write File	/////
    ofstream outfile("stdout", ios::out);
    if(!outfile) {
        cerr << "Failed Opening" << endl;
        exit(1);
    }
    outfile << sum << "\n\n";
    outfile.close();

/////	End	  /////
    return 0;
}
