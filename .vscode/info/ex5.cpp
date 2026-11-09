/*
 semafor simplu folosind switch case
*/
# include <iostream>
using namespace std;
int main() {
    char culoare;
    cout<<"introduceti o litera de la tastatura(R , G, V ,r, g, v):";
    cin>>culoare;
    switch (culoare)
    {
    case 'R':
    case 'r':
        cout<<"culoarea semaforului este rosu"<<endl;
        break;
    case 'V':
    case 'v':
        cout <<"culoarea semaforului este verde"<<endl;
        break;
        case 'G':
        case 'g':
        cout<<"culoarea semaforului este galben"<<endl;
        break;
    default:
        cout<<"culoarea nu reprezinta semaforul";
        break;
    }       return 0;
}