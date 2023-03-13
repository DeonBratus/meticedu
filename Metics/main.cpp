#include <iostream>
#include "fimext.h"
using namespace std;
int ** transpose(const int * const  *m, unsigned rows, unsigned cols)
{
     int **mtrx = new int*[rows];
     mtrx[0] = new int[cols*rows];
    for(int i = 1; i != rows; i++) mtrx[i] = mtrx[i-1] +cols;
    return mtrx;
}
int main() {

    return 0;
}