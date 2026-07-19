//
// Created by Lenovo on 2026/7/19.
//
#include <iostream>
#include <fstream>
#include <cstdlib>

/**
 * 类多态
 */
void file_it(std::ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main() {
    // 文件输出流 out file stream
    std::ofstream fout;
    std::string fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open()) {
        std::cout << "cannot open file " << fn << std::endl;
        exit(EXIT_FAILURE);
    }

    double objective;
    // cout 输出到控制台
    std::cout << "Enter the focal length of your telescope objective in mm: ";
    std::cin >> objective;

    double eps[LIMIT];
    for (int i = 0; i < LIMIT; i++) {
        std::cout << "Eyepiece #" << i+1 << ":";
        std::cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(std::cout, objective, eps, LIMIT);
    return 0;
}

/**
 * 为什么参数是引用 因为 ostream不能复制
 */
void file_it(std::ostream& os, double fo, const double fe[], int n) {
    std::ios_base::fmtflags initial;
    // 固定小数形式
    initial = os.setf(std::ios_base::fixed);
    //  保留0位小数
    os.precision(0);
    os << "Fcoal lebgth of objective: " << fo << "mm \n";
    // 即使是整数也显示小数
    os.setf(std::ios::showpoint);
    // 保留一位小数
    os.precision(1);
    os.width(12);
    os << "magnification" << std::endl;
    for (int i = 0; i < n; i++) {
        os.width(12);
        os << fe[i];
        // width 只对下一次输出有效。
        os.width(15);
        os << int(fo/fe[i]) + 0.5 << std::endl;
        os.setf(initial);
    }
}








