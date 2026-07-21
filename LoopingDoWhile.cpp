#include <iostream>
using namespace std;

//kalau do while ini tuh artinya 
//pekerjaan dulu baru syarat, jadi ibarat dia sudah ngelakuin pekerjaan baru di cek syaratnya

int main() {

    int x;
    srand(time(0));

    cout << "PERULANGAN DO... WHILE" << endl;
    x=1 +rand() %10;

    do {
        cout << "TI Bilangan acak = " << x << endl;
        x =rand () %10;//pengacak
    }while  (x <= 5);

    cout << "Bilangan acak do- while yg terakhir =" << x << endl;
        
        cout << endl ;
        return 0;
}