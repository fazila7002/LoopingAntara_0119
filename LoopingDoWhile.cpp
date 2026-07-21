#include <iostream>
using namespace std;

int main() {

    int x;
    srand(time(0));

    cout << "PERULANGAN DO... WHILE" << endl;
    x=1 +rand() %10;

    do {
        cout << "TI Bilanga acak = " << x << endl;
        x =rand () %10;
    }while  (x <= 5);

    cout << "Bilangan acak do- while yg terakhir" << x << endl;
        
        cout << endl ;
        return 0;
}