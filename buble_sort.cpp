#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    while(true)
    {
        cout << "Masukkan panjang array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "Error : Maksimal input array adalah 20\n";
        }
    }
    
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Nilai ke - " << i + i <, " : ";
        cin >> a[i];
    }
}

void display()
{
    cout << endl;
    cout << "==========================" << endl;
    cout << "Elemen Array telah terurut" << endl;
    cout << "==========================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke - " << i << " : " << a[i] << endl; 
    } 
}