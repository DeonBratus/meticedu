#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int write2file(string fname, string text) {
    ofstream fout;
    fout.open(fname);
    fout << text;
    fout.close();
    return 0;
}