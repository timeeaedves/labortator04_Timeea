#include <iostream>
#include <string>
using namespace std;

class ContBancar {
private:
    string titular;
    double sold;

public:
    ContBancar(string t, double s) {
        titular = t;
        sold = s;
    }

    void depunere(double suma) {
        if (suma > 0) {
            sold = sold + suma;
        } else {
            cout << "Suma trebuie sa fie pozitiva!\n";
        }
    }
    void retragere(double suma) {
        if (suma <= 0) {
            cout << "Suma trebuie sa fie pozitiva!\n";
        } else if (suma > sold) {
            cout << "Fonduri insuficiente!\n";
        } else {
            sold = sold - suma;
        }
    }
    void afiseaza() {
        cout << "Titular: " << titular << endl;
        cout << "Sold: " << sold << " lei" << endl;
    }
};

int main() {
    ContBancar cont1("Maria", 1000);
    ContBancar cont2("Andrei", 500);

    cont1.depunere(200);
    cont1.retragere(100);

    cont2.retragere(600);

    cout << "Primul cont:\n";
    cont1.afiseaza();

    cout << "\nAl doilea cont:\n";
    cont2.afiseaza();

    return 0;
}