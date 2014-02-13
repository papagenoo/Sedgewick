#include "sieve_of_eratosthenes.h"
#include <iostream>

using std::cout;
using std::endl;

static const int N = 1000;
// Решето Эратосфена
void Sedgewick::sieve_of_eratosthenes(int N)
{
    int i;
    int *a = new int[N];
    if (a == 0) {
        cout << "out of memory" << endl; return;
    }
    for (i = 2; i < N; i++) a[i] = 1;
    for (i = 2; i < N; i++)
        if (a[i])
            for (int j = i; j*i < N; j++) a[i*j] = 0;
    for (i = 2; i < N; i++)
        if (a[i]) cout << " " << i;
    cout << endl;
}
