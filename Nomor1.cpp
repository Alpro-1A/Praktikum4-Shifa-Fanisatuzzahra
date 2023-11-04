#include <iostream>

using namespace std;

int main()
{   cout << "        PROGRAM MENGELOMPOKKAN BILANGAN BULAT        " << endl;
    cout << "-----------------------------------------------------" << endl;

    int batas;
    int jmlhGanjil = 0;
    int jmlhGenap = 0;
    int jmlhPrima = 0;

// Bilangan Ganjil
    do {
        cout << "Masukkan batas bilangan positif : ";
        cin >> batas;
    } while (batas <= 0);

    cout << "Bilangan Ganjil antara 1 dan " << batas << " adalah: ";
    for (int j = 1; j <= batas; ++j){
        if (j % 2 != 0) cout << j << " ";
        if (j % 2 != 0) jmlhGanjil += j;
    } cout << endl;

// Bilangan Genap
    cout << "Bilangan Genap antara 1 dan " << batas << " adalah: ";
    for (int k = 1; k <= batas; ++k){
        if (k % 2 == 0) cout << k << " ";
        if (k % 2 == 0) jmlhGenap += k;
    } cout << endl;

// Bilangan Prima
    cout << "Bilangan Prima antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; ++i){
        int bilanganPrima = 1;
        for (int j = 2; j * j <= i; ++j){
            if (i % j == 0){
                bilanganPrima = 0;
                break;
                }
        }
        if (bilanganPrima == 1){
            cout << i << " ";
            jmlhPrima += i;
            }
    }   cout << endl;

// jmlh
    cout << "Jumlah semua bilangan ganjil antara 1 dan " << batas << " adalah: " << jmlhGanjil << endl;
    cout << "Jumlah semua bilangan genap antara 1 dan " << batas << " adalah: " << jmlhGenap << endl;
    cout << "Jumlah semua bilangan Prima antara 1 dan " << batas << " adalah: " << jmlhPrima << endl;

// Faktor
    cout << "Faktor-faktor dari jumlah ganjil tersebut adalah: ";
    for (int s = 1; s <= jmlhGanjil; s++){
        if (jmlhGanjil % s == 0){
            cout << s << " ";
            }
        }
    cout << endl;

    cout << "Faktor-faktor dari jumlah genap tersebut adalah: ";
    for (int t = 1; t <= jmlhGenap; t++){
        if (jmlhGenap % t == 0){
            cout << t << " ";
            }
        }
    cout << endl;

    cout << "Faktor-faktor dari jumlah prima tersebut adalah: ";
    for (int r = 1; r <= jmlhPrima; r++){
        if (jmlhPrima % r == 0){
            cout << r << " ";
            }
        }
    cout << endl;
    cout << "-----------------------------------------------------" << endl;

    return 0;
}
