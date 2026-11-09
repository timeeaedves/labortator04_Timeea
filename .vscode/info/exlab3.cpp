/*
creati o clasa angajat care are urmatoarele atribute: nume, functie, salariu si vechime,
constructori: unul cu toti parametrii sii unul doar cu un nume si functie,
unde salariul porneste de la 3000 si vechimea de la 0
metode in afara clsei: castiga_mai_mult_decat(angajat &altul),mareste_salarul(double procent),
bonus() 100 de lei pentru fiecare an de vechime, afiseaza()
 in main, creati un vector de angajati si afiseaza l pe cel cu salariul cel mai. mare
*/
#include <iostream>
#include<string>
using namespace std;
class Angajat{
    public:
        string nume, functie;
        double salariu;
        int vechime;
        Angajat(string n, string f, double s, int v){
            string nume;
            string functie;
            string salariu;
            int vechime;
        }
        Angajat(string n, string f){
            nume=n;
            functie=f;
            salariu=3000;
            vechime=0;
        }
        bool castiga_mai_mult_decat(angajat &altul)
}
