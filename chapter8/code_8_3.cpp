//
// Created by Lenovo on 2026/7/19.
//

#include <iostream>
int main() {
    using namespace std;
    int rats = 101;
    int& rodents = rats;
    cout << "rats: " << rats << endl;
    cout << "rodents: " << rodents << endl;

    cout << "rat address: " << &rats << endl;
    cout << "rodents address: " << &rodents << endl;

    int business = 50;
    rodents = business;
    cout << "business: " << business << endl;
    cout << "rats: " << rats << endl;
    cout << "rodents: " << rodents << endl;

    cout << "business address: " << &business << endl;
    cout << "rat address: " << &rats << endl;
    cout << "rodents address: " << &rodents << endl;

    return 0;
}