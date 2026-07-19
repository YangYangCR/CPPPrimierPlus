//
// Created by Lenovo on 2026/7/19.
//
#include <iostream>

void normal();

void ref();

int main() {
    using namespace std;
    normal();
    cout << "==================" << endl;
    ref();
    return 0;
}

void normal() {
    using namespace std;
    int rats = 101;
    int rodents = rats;
    rats++;
    cout << rats << " address " << &rats << endl;
    cout << rodents << " address " << &rodents << endl;
}

/**
 * 引用变量 引用变量是已定义变量的别名   共用同一块内存地址
 */
void ref() {
    using namespace std;
    int rats = 101;
    int &rodents = rats;
    rats++;
    cout << rats << " address " << &rats << endl;
    cout << rodents << " address " << &rodents << endl;
}
