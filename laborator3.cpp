
#include <iostream>
#include <string>
using namespace std;

class Masina {
public:
    string brand;
    string model;
    int an_fabricare;

    Masina(string x, string y, int z) {
        brand = x;
        model = y;
        an_fabricare = z;
    }
};

int main() {
    Masina masina1("dacia", "duster", 1998);

    cout << masina1.brand << ","
         << masina1.model << ","
         << masina1.an_fabricare;

    return 0;
}
