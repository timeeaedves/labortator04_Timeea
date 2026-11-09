/*
meniu interactiv folosind switch case
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int optiune;
    cout<<"introduceti prima optiune:";
    cin>>optiune;
    switch (optiune)
    {
    case 1:
        cout<<"radical din 100 este:"<<sqrt(100);
        break;
    case 2:
        cout<<"valoarea absoluta a lui -19 este:"<<abs(-19);
        break;
    case 3:
        cout<<"suma dintre 165 si 135 este:"<<165+135;
        break;
    
    default:
        cout<<"nu se afla in paramerii respectivi";
        break;
    }   return 0;
}