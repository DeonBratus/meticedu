#include <iostream>
#include <fstream>
#include <string>
#include "mmrycode.h"
using namespace std;
int main() {
    string name; string text;
    cin>>name;
    cin>>text;
    write2file("txtFiles\\" + name + ".txt", text);
    return 0;
}