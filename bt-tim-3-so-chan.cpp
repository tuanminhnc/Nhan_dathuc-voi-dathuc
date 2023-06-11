/*
Bai tap tim 3 so chan
8:55 AM
6/11/2023
*/
#include <iostream>
using namespace std;

    //Begin main function
int main() {
    /*
    1. Thong bao ra man hinh bai tap tim 3 so chan
    2. In ra man hinh yeu cau de bai tim 3 so tu nhien chan lien tiep
    3. Khoi tao bien de luu tru 2 tich so sau, 2 so truoc va cac so tu nhien chan lien tiep
    4. Thuc hien tinh tich cua 2 so sau, 2 so dau va tim 3 so chan tu nhien lien tiep
    5. In ra ket qua 
    */

   //1. Thong bao ra man hinh bai tap tim 3 so chan
   cout << "Bai tap tim 3 so chan lien tiep" << endl;

   //2. In ra man hinh yeu cau de bai tim 3 so tu nhien chan lien tiep, biet tich 2 so sau lon hon 2 so dau la 192
   cout << "Biet tich 2 so sau lon hon tich cua 2 so dau la 192" << endl;

   //3. Khoi tao bien de luu tru 3 so tu nhien chan lien tiep
    int a,y,z,tichdau,tichsau;
    a = 46;
    y = a+2;
    z = a+4;

   //4. Thuc tinh tich cua 2 so dau, 2 so sau va tim 3 so chan tu nhien lien tiep
   cout << "Goi 3 so chan lien tiep la: a, a+2, a+4" << endl;
   cout << "Ta co bieu thuc: (a+2)*(a+4) - a*(a+2) = 192" << endl;
   cout << "=> a*(a+4) + 2*(a+4) = a^2 + 4a + 2a + 8 - a^2 - 2*a = 192" << endl;
   cout << "=> 4a + 8 = 192" << endl;
   cout << "=> a = 46" << endl;

   //5. In ra ket qua
   cout << "Vay so chan thu nhat la: " << a << endl;
   cout << "Vay so chan thu 2 la: " << y << endl;
   cout << "Vay so chan thuc 3 la: " << z << endl;

   return 0;
}