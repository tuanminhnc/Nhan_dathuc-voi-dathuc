/*
Bai tap tinh dien tich hinh chu nhat
Tỉme 10:54
6/11/2023
*/
#include <iostream>
using namespace std;

//Begin main function
int main() {
    /*
    1. Thong bao len man hinh bai tap tinh dien tich hinh chu nhat
    2. Viet bieu thuc

    */
   //Buoc 1:
   cout << "Bai tap tinh dien tich hinh chu nhat:" << endl;
   cout << "- Viet bieu thuc tinh dien tich HCN theo x va y, biet 2 kich thuoc cua HCN do la (2x + y) va (2x - y)" << endl;
   cout << "- Tinh dien tich HCN voi x = 2.5 (m) va y = 1 (m)" << endl;
   //Buoc 2: 
    /*
        SHCN = Chieu dai * Chieu rong
        SHCN = (2*x + y) * (2*x - y)
        SHCN = 4*x^2 - 2*x*y + 2*x*y -y^2
        SHCN = 4*x^2 - y^2
   */
   cout << "Viet bieu thuc tinh dien tich HCN:" << endl;
   cout << "SHCN = (2x + y) * (2x - y)" << endl;
   cout << "=> 2x * (2x-y) + y * (2x-y)" << endl;
   cout << "=> 4x^2 - 2x*y + 2x*y - y^2" << endl;
   cout << "=> 4x^2 - y^2" << endl;
   cout << "Bieu thuc tinh dien tich HCN theo x va y la: 4x^2 - y^2" << endl;
   cout << "Tinh dien tich HCN voi x = 2.5 (m) va y = 1 (m): " << endl;
   cout << "SHCN = 4x^2 - y^2" << endl;
   cout << "=> 4*2.5^2 - 1" << endl;
   cout << "SHCN = " << 4*2.5*2.5-1 << endl;

   return 0;
}