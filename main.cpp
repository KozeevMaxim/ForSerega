#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void average(int **p, int n, int m);

int main()
{
    int **P;
    int n, m;
    int i, j;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    P = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) P[i] = (int *)malloc(m * sizeof(int));
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            P[i][j] = rand() % 100;
            cout << P[i][j] << " "; //Выводим массива
        }
        cout << endl;
    }
    cout << endl;

    average(P, n, m); //Выводим среднее сначение строк массива

    for (i = 0; i<n; i++) free(P[i]);
    free(P);

    return 0;
}

void average(int **p, int n, int m)
{
    double mx, a;
    int i, j;
    for(i = 0; i < n; i++)
    {
        mx = 0;
        a = 0;
        for(j = 0; j < m; j++)
        {
            mx += p[i][j];
        }
        a = mx/m;
        cout << a << endl;
    }
}
