/*
folosind switch case ul creati un calculator folosind operatorii de adunare, inmultire
scadere, impartire
*/
#include <iostream>
using namespace std;
int main(){
     int a,b;
     char op;
     cout<<"introduceti primul numar"<<endl;
     cin>>a;
     cout<<"introduceti al doilea numar"<<endl;
     cin>>b;
     cout<<"introduceti un operator:(+,-,*,%,/)"<<endl;
     cin>>op;
     switch (op)
     {
     case '+':
        cout<<"suma numerelor este: "<<a+b<<endl;
        break;
        case '/':
        cout<<" impartirea  numerelor este: "<<a/b<<endl;
        break;
        case '-':
        cout<<"diferenta numerelor este: "<<a-b<<endl;
        break;
        case '%':
        cout<<"restul impartirii numerelor este :"<<a%b<<endl;
        break;
        case '*':
        cout<<"inmultirea numerelor este: "<<a*b<<endl;
        break;
     
     default: 
     cout<<"valoarea introdusa nu este in parametrii specificati";
        break;
     } 
     return 0;
}