#include <iostream>
#include <conio.h>
using namespace std ;

int main () {
    int tahun ;
    cout << "===================================================" << endl;
    cout << "          PROGRAM MENENTUKAN TAHUN KABISAT         " << endl ;
    cout << "===================================================" << endl ;
    cout << "---------------------------------------------------" << endl ;
    cout << "Masukan Tahun = " ;
    cin>> tahun ;

    if (((tahun % 4 == 0 )&&  (tahun %100!=0 ) || (tahun %400 == 0) ))
    {
       cout << tahun << " Adalah Tahun Kabisat" << endl ;
    }
    else
    {
        cout << tahun << " Bukan Tahun Kabisat" << endl ;
    }
    getch () ;
}