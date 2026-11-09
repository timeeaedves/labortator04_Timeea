/*
program de afisare a zilelor saptamanii in functie de numarul introdus
folosind switch case
sa fie un numar de la 1-7
*/
#include <iostream>
using namespace std;
int main() {
 int a;
 cout<<"introduceti un numar:";
 cin>>a;
 switch (a)
 {
 case 1:
    cout<<"luni";
    break;
    case 2:
    cout<<"marti";
    break;
    case 3:
    cout<<"miercuri";
    break;
    case 4:
    cout<<"joi";
    break;
    case 5:
    cout<<"vineri";
    break;
    case 6:
    cout<<"sambata";
    break;
    case 7:
    cout<<"duminica";
    break;

 default:
    cout<<"nu exista"<<endl;
    break;
 }
    return 0;
}
