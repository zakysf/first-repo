//Praktikum Algoritma & Struktur Data (SI-D)
//Zaky Surya Fadillah (124240071)

#include <iostream>
using namespace std;

int main()
{
    int ptr[] = {10, 20, 50, 40, 30}, jml = 0, maks, min; 
    float rataRata = 0;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Indeks ke-" << i << " : " <<*(ptr + i) << endl;
        jml = jml + *(ptr + i);
        rataRata = jml / (i + 1);

        if(*(ptr + i) >= 50) {
            maks = *(ptr + i);
        } else if(*(ptr + i) <= 10) {
            min = *(ptr + i);
        }
    }
    
    cout << "\nNilai Maksimum : " << maks << endl;
    cout << "Nilai Minimum  : " << *ptr << endl;

    cout << "\nJumlah         : " << jml << endl; 
    cout << "Rata-rata      : " << rataRata << endl; 
    return 0;
}