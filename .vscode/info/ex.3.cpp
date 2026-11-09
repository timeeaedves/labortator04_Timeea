/*
un numar de la 1-7
zile lucratoare si weekend folosind switch case
*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"introduceti un numar:";
    cin>>a;
    switch (a)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: 
        cout<<"zile lucratoare";
        break;
    case 6:
    case 7:
        cout<<"zilele de weekend";
        break;
    default:
        cout<<"nu exista";
        break;
    }
    return 0;
} 