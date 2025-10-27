#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Entrez deux entiers positifs : ";
    cin >> a >> b;

    int x = a;
    int y = b;

    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    cout << "Le PGCD de " << a << " et " << b << " est : " << x << endl;

    return 0;
}
