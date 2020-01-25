// 2Groups.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;


int main()
{

    int n;
    int index_a = 0, index_b = 0;
    int sum_a = 0, sum_b = 0;
    int a[50000], b[50000];

    for (int i = 0; i < 50000; i++)
        a[i] = b[i] = 0;

    cout << "Introduceti n: ";
    cin >> n;
    cout << endl;

    if (n < 2 || n > 100000)
    {

        cout << "Numarul a iesit din intervalul specificat\n";
        return 0;

    }


    for (int i = n; i >= 1; i--)
    {

        if (sum_b >= sum_a)
        {

            a[index_a++] = i;
            sum_a += i;

        }
        else
        {

            b[index_b++] = i;
            sum_b += i;

        }

    }

    cout << "Primul grup este: ";
    for (int i = 0; i < index_a; i++)
        cout << a[i] << " ";
    cout << endl;
    //cout << "Cu suma: " << sum_a << endl;

    cout << "Al doilea grup este: ";
    for (int i = 0; i < index_b; i++)
        cout << b[i] << " ";
    cout << endl;
    //cout << "Cu suma: " << sum_b << endl;

    return 0;

}


