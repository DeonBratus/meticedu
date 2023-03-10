#include <iostream>
#include <fstream>
#include <string>
#include "mmrycode.h"
using namespace std;
int main() {
    cout<<"Type <Name file> and <Text> and press Enter"<< endl;
    string name; string text;
    cin>>name;
    cin>>text;
    int p = 0;
    while(true) {
        p++;
        write2file(name + to_string(p) + ".txt", text);
        cout<<"Created file: "<< name + to_string(p) + ".txt"<<endl;
    }
    return 0;
}