//
// Created by Lenovo on 2026/7/11.
//

#include "code_3_13.h"
#include <iostream>
int main () {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3; // int 转 float
    int guess = 3.9832; // double 转 int
    int debt = 7.2E12;
    cout << "tree=" <<  tree << endl;
    cout << "guess=" << guess << endl;
    cout << "debt=" << debt << endl;
    return 0;
}
