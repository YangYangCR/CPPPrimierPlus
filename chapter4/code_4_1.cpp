//
// Created by Lenovo on 2026/7/11.
//
#include <iostream>

int main() {
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yam_costs[3] = {20, 30, 5};

    // 字节长度
    cout << "Size of yams array = " << sizeof yams << endl;  // 12 bytes
    cout << "Size of one element = " << sizeof yams[0] << endl; // 4 bytes

}
