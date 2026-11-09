#include <iostream>
using namespace std;

class Carte {
    public:
    string autor;
    string nume;
    int an;
};

int main() {
    Carte carte1;
    carte1.autor = "Mihai Eminescu";
    carte1.nume = "Poezii";
    carte1.an = 1883;

    Carte carte2;
    carte2.autor = "Ion Creanga";
    carte2.nume = "Povesti";
    carte2.an = 1890;

    cout << carte1.autor << endl;
    cout << carte1.nume << endl;
    cout << carte1.an << endl;

    cout << carte2.autor << endl;
    cout << carte2.nume << endl;
    cout << carte2.an << endl;

    return 0;
}