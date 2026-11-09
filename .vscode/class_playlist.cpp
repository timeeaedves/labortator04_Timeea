#include <iostream>
#include <iomanip>
using namespace std;

class Playlist{
    private:
    int nume;
    int melodii[8];
    int numarMelodii;

    public:
    playlist(int n){
        nume=n;
        numarMelodii=0;
    }
    void adaugaMelodie(int durata){
        if(durata<30|| durata>600){
            cout<<"Durata invalida!\n";
            return;
        }
        if(numarMelodii==8){
            cout<<"playlist-ul este olin!\n";
            return;
        }
        melodii[numarMelodii]=durata;
        numarMelodii++;
    }
    void stergeMelodie(int index){
        if(index<0 ||index>=numarMelodii){
            cout<<"index invalid!\n";
            return;
        }
        for(int i=index; i<numarMelodii-1;i++){
            melodii[i]=melodii[i+1];
        }
        numarMelodii--;
    }
      int getMelodiaCeaMaiLunga() {
        if (numarMelodii == 0) {
            return -1;
        }

        int pozitie = 0;

        for (int i = 1; i < numarMelodii; i++) {
            if (melodii[i] > melodii[pozitie]) {
                pozitie = i;
            }
        }

        return pozitie;
    }
};

int main() {
    laylist p(1);

    p.adaugaMelodie(180);
    p.adaugaMelodie(240);
    p.adaugaMelodie(150);
    p.adaugaMelodie(300);

    cout << "Durata totala: ";
    p.afiseazaDurata();

    cout << "Index melodie cea mai lunga: "
         << p.getMelodiaCeaMaiLunga() << endl;

    p.stergeMelodie(1);

    cout << "Dupa stergere: ";
    p.afiseazaDurata();

    return 0;
}