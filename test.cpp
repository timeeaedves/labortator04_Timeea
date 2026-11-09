#include <iostream>
using namespace std;

class myClass{
    public:
    void metoda(){
        cout<<"Hello world";
    }
};

void myClass::metoda(){
    cout<<"hello world";
}
int main(){
    myClass obiect;

    obiect.metoda();
    return 0;

    
}