//
// Created by Lenovo on 2026/7/19.
//
/**
 * 函数模板(泛型)
 */
#include <iostream>

template<typename T> void my_swap(T &a, T &b);

int main() {
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i is " << i << " j is " << j << endl;
    swap(i,j);
    cout << "i is " << i << " j is " << j << endl;

    double a = 10.0;
    double b = 20.0;
    cout << "i is " << a << " j is " << b << endl;
    swap(a,b);
    cout << "i is " << a << " j is " << b << endl;
    return 0;
}

template<typename T> void my_swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
