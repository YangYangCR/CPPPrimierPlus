//
// Created by Lenovo on 2026/7/19.
//

# include <iostream>
const int ar_size = 8;

int sum_arr(int arr[], int n);

int main() {
    int cookies[ar_size] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = arr address" << std::endl;
    // sizeof(cookies) 整个数组的长度
    // 每个int 4字节，一共8个元素， 32字节
    std::cout << sizeof(cookies) << " = size of cookies" << std::endl;

    int sum = sum_arr(cookies, ar_size);
    std::cout << "sum is " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "sum is " << sum << std::endl;
    sum = sum_arr(cookies + 4, 4);
    std::cout << "sum is " << sum << std::endl;
}

/**
 * 数组传给函数时会退化（decay）成指针
 *  这里的int arr[] 类型为 int *
 */
int sum_arr(int arr[], int n) {
    int total = 0;
    // sizeof(arr) 指针变量的字节长度，而不是单个元素多少字节
    std::cout << sizeof(arr) << " = size of arr" << std::endl;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
