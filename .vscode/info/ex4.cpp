/*
aflarea numarul de zile din lunile anului
folosid switch case
*/
#include <iostream>
using namespace std;
int main(){

    int luna;
    cout<<"introduceti un numar de la 1-12 care reprezinta o luna a anului:";
    cin>>luna;
    switch (luna)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<" luna are 31 de zile";
        break;
    case 2:
        cout<<"luna are 28 de zile sau 29 zile daca anul e bisect";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"luna are 30 de zile";
        break;

    default:
    cout<<"nu exista luna in parametrii ceruti";
        break;
    }    return 0;
    
}       
        
