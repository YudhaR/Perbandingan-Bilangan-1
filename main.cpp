/*
    Program max A dan B
    Ket : Program untuk mencari nilai max antara A dan B
    By  : Yudha Rizqia Grafer
    Tgl : 12 Oktober 2022

*/#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int A, B;

    //Algoritma
    cout << "Masukkan Bilangan A : " ;
    cin >> A;
    cout << "Masukkan Bilangan B : " ;
    cin >> B;
    if (  A >= B ){
        cout  << "Nilai Paling Besar Adalah" << A;
    } else {
        cout  << "Nilai Paling Besar Adalah " << B;
    }
    cout << endl << "Cek Selesai";
    return 0;
}
