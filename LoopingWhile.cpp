#include <iostream>
using namespace std;

int main (){
    //input var x
    int x;

    //<cstdlib> <ctime>
    srand(time(0));

    //Perulangan While
    cout << "PERULANGAN WHILE" << endl;
    //Nilai awal x = 0
    x = 1 +rand() %10 ;

    while (x <=5) {
        cout << "TI Bilangan acak" << x<< endl;
        x =rand() %10 ; //Pengubah dari nilai x alias pengacaknya
   
        cout << "Bilangan acak while yg terakhir" << x << endl;
        
        cout << endl ;
        return 0;
}
}