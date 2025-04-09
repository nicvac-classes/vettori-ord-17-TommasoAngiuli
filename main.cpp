#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    
    int n, i, r, t, p, d, j;
    bool scambio;

    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n < 0);
    int vtot[n];

    i = 0;
    p = 0;
    d = 0;
    while (i <= n - 1) {
        vtot[i] = rand() % 101;
        if (vtot[i] % 2 == 0) {
            p = p + 1;
        } else {
            d = d + 1;
        }
        i = i + 1;
    }
    int pari[p];
    int dispari[d];

    i = 0;
    p = 0;
    d = 0;
    while (i <= n - 1) {
        if (vtot[i] % 2 == 0) {
            pari[p] = vtot[i];
            p = p + 1;
        } else {
            dispari[d] = vtot[i];
            d = d + 1;
        }
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (i <= p - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= p - 2 - i) {
            if (pari[j] > pari[j + 1]) {
                t = pari[j];
                pari[j] = pari[j + 1];
                pari[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (i <= d - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= d - 2 - i) {
            if (dispari[j] > dispari[j + 1]) {
                t = dispari[j];
                dispari[j] = dispari[j + 1];
                dispari[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    cout << "numeri pari in ordine crescente: " << endl;
    i = 0;
    while (i <= p - 1) {
        cout << pari[i] << endl;
        i = i + 1;
    }
    i = 0;
    cout << "numeri dispari in ordine crescente: " << endl;
    while (i <= d - 1) {
        cout << dispari[i] << endl;
        i = i + 1;
    }
    i = d;
    cout << "numeri dispari in ordine decrescente: " << endl;
    while (i > 0) {
        cout << dispari[i - 1] << endl;
        i = i - 1;
    }
}