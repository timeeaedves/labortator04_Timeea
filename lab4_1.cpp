/*
clasa persoana cu atributele nume,varsta sie email(toate private).
-GETTERI SI SETTERI PENTRU TOATE TREI VARIABILELE
-setVarsta acceptata doar valori intre 0 si 100.astfel afisarea un mesaj si lasa valoarea vechie
-setEmail accepta doar adrese care contin caracterul @
-setnume refuza un nume gol
In main incercati sa setati valori gresite si verificati daca obiectul ramane valid

*/
#include <iostream>
#include <string>
using namespace std;

class Persoana {
private:
    string nume;
    int varsta;
    string email;

public:
    // Constructor
    Persoana(string n, int v, string e) {
        nume = n;
        varsta = v;
        email = e;
    }

    // GETTER pentru nume
    string getNume() {
        return nume;
    }

    // GETTER pentru varsta
    int getVarsta() {
        return varsta;
    }

    // GETTER pentru email
    string getEmail() {
        return email;
    }

    // SETTER pentru nume
    void setNume(string n) {
        if (n != "") {
            nume = n;
        }
        else {
            cout << "Numele nu poate fi gol!" << endl;
        }
    }

    // SETTER pentru varsta
    void setVarsta(int v) {
        if (v >= 0 && v <= 100) {
            varsta = v;
        }
        else {
            cout << "Varsta trebuie sa fie intre 0 si 100!" << endl;
        }
    }

    // SETTER pentru email
    void setEmail(string e) {
        if (e.find('@') != string::npos) {
            email = e;
        }
        else {
            cout << "Email invalid! Emailul trebuie sa contina @!" << endl;
        }
    }
};

int main() {

    // Cream un obiect
    Persoana p("Maria", 20, "maria@gmail.com");

    // Afisam valorile initiale
    cout << "Valorile initiale:" << endl;
    cout << "Nume: " << p.getNume() << endl;
    cout << "Varsta: " << p.getVarsta() << endl;
    cout << "Email: " << p.getEmail() << endl;

    cout << endl;

    // Incercam sa setam valori gresite
    cout << "Incercam valori gresite:" << endl;

    p.setNume("");
    p.setVarsta(150);
    p.setEmail("maria.gmail.com");

    cout << endl;

    // Verificam daca valorile vechi au ramas
    cout << "Valorile dupa incercarea valorilor gresite:" << endl;
    cout << "Nume: " << p.getNume() << endl;
    cout << "Varsta: " << p.getVarsta() << endl;
    cout << "Email: " << p.getEmail() << endl;

    return 0;
}