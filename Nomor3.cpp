#include <iostream>

using namespace std;

int main()
{
    cout << "        PROGRAM DERET FIBONACCI     " << endl;
    cout << "----------------------------------------" << endl;

    int s, s1 = 0, s2 = 1, fs = 0;

        cout << "Jumlah deret fibonacci yang dibutuhkan: ";
        cin >> s;

    for (int m = 1; m <= s; m++){
//deret nilai ke-1
        if (m == 1){
            cout << s1 << " ";
        }
//deret nilai ke-2
        if (m == 2){
            cout << s2 << " ";
        }
//deret nilai ke-n
        fs = s1 + s2;
        s1 = s2;
        s2 = fs;
        cout << fs << " ";
    }

cout << endl;
cout << "----------------------------------------" << endl;


    return 0;
}
