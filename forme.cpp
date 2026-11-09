#include <iostream>
using namespace std;

class Dreptunghi {
private:
    double lungime, latime;

public:
    Dreptunghi(double l, double L) {
        lungime = l;
        latime = L;
    }

    double arie() {
        return lungime * latime;
    }

    double perimetru() {
        return 2 * (lungime + latime);
    }

    bool este_patrat() {
        return lungime == latime;
    }

    bool mai_mare_decat(Dreptunghi alt_dreptunghi) {
        return arie() > alt_dreptunghi.arie();
    }
};

int main() {
    Dreptunghi d1(5, 3);
    Dreptunghi d2(4, 4);

    cout << "Aria dreptunghiului 1: " << d1.arie() << endl;
    cout << "Perimetrul dreptunghiului 1: " << d1.perimetru() << endl;

    if (d1.este_patrat())
        cout << "Dreptunghiul 1 este patrat." << endl;
    else
        cout << "Dreptunghiul 1 nu este patrat." << endl;

    if (d1.mai_mare_decat(d2))
        cout << "Dreptunghiul 1 are aria mai mare." << endl;
    else
        cout << "Dreptunghiul 2 are aria mai mare sau egala." << endl;

    return 0;
}