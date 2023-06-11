/*
Bai tap tinh nhan
Time 7:13 PM
6/11/2023
*/
#include <iostream>
using namespace std;

//Begin main function
int main() {

    /*
    1. Thong bao len man hinh bai tap tinh nhan
    2. Thuc hien tinh bieu thuc
    3. In ra ket qua
    */

    //Buoc 1:
    cout << "Bai tap tinh nhan:" << endl;
    cout << "Bieu thuc: (1/2x + y) * (1/2x + y)" << endl;

    //Buoc 2:
    cout << "(1/2x + y) * (1/2x - y)" << endl;
    cout << "=> 1/2x * (1/2x - y) + y(1/2x - y)" << endl;
    cout << "=> 1/4x^2 - 1/2xy + 1/2xy - y^2" << endl;
    //Buoc 3:
    cout << "=> 1/4x^2 - y^2" << endl;
    return 0;
}