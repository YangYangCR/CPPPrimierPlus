//
// Created by Lenovo on 2026/7/18.
//
#include <iostream>

const int ar_size = 8;

int sum_arr(int arr[], int n);

/**
 * C++ 中数组名等于第一个元素的地址
 * cookoes == &cookies[0]
 */
int main() {
    using namespace std;
    int cookies[ar_size] = {1, 2, 4, 8, 16, 32, 64, 128};
    // 这里的参数 cookies 相当于地址，即一个指针
    int sum = sum_arr(cookies, ar_size);
    cout << "Total cookies eaten:" << sum << endl;
    return 0;
}

/**
 * 当且仅当 用于函数头和函数原型(函数定义)中时，
 * int arr[] 和 int *arr 含义相同
 */
int sum_arr(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
