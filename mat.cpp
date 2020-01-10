// Multiply two matrices

#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main()
{
    int ra = 0, ca = 0, rb = 0, cb = 0, i, j, k;
    double a[100][100], b[100][100], c[100][100];
    cout << endl << "Matrix multiplication:" << endl << endl;
    while (ra <= 0 || ca <= 0 || rb <= 0 || cb <= 0 || ca != rb)
    {
        if (ca != rb)
        {
            cout << "\nColumns of A must equal rows of B!\n\n";
        }
        cout << "Enter # rows for matrix A:\n";
        cin >> ra;
        cout << "Enter # cols for matrix A:\n";
        cin >> ca;
        cout << "Enter # rows for matrix B:\n";
        cin >> rb;
        cout << "Enter # cols for matrix B:\n";
        cin >> cb;
    }
    cout << endl << endl;

    for (i = 0; i < ra; ++i)
    {
        for (j = 0; j < ca; ++j)
        {
            cout << "Enter element (" << i + 1 << ", " << j + 1 << ") of matrix A: \n";
            cin >> a[i][j];
        }
    }
    cout << "\nA = \n";
    for (i = 0; i < ra; ++i)
    {
        for (j = 0; j < ca; ++j)
        {
            cout << a[i][j];
            if (j < ca - 1)
            {
                cout << "\t";
            }
            else
            {
                cout << "\n";
            }
        }
    }
    cout << endl << endl;

    for (i = 0; i < rb; ++i)
    {
        for (j = 0; j < cb; ++j)
        {
            cout << "Enter element (" << i + 1 << ", " << j + 1 << ") of matrix B: \n";
            cin >> b[i][j];
        }
    }
    cout << "\nB = \n";
    for (i = 0; i < rb; ++i)
    {
        for (j = 0; j < cb; ++j)
        {
            cout << b[i][j];
            if (j < cb - 1)
            {
                cout << "\t";
            }
            else
            {
                cout << "\n";
            }
        }
    }
    cout << endl;

    cout << "\nA*B = \n";
    for (i = 0; i < ra; ++i)
    {
        for (j = 0; j < cb; ++j)
        {
            double sum = 0;
            for (k = 0; k < ca; ++k)
            {
                sum += (a[i][k] * b[k][j]);
            }
            if(abs(sum) >= pow(10,-8)){
                c[i][j] = sum;
            }else{
                c[i][j] = 0;
            }
        }
    }
    for (i = 0; i < ra; ++i)
    {
        for (j = 0; j < cb; ++j)
        {
            cout << c[i][j];
            if (j < cb - 1)
            {
                cout << "\t";
            }
            else
            {
                cout << "\n";
            }
        }
    }
    cout << endl << endl;

    return 0;
}
