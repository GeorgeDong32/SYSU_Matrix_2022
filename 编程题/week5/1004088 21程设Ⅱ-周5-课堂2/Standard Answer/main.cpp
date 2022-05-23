#include "Meow.h"

void printCount() {
    cout << "Number of Cat: " << Meow::getCount() << endl;
}


int main() {
    string name = "Madara";
    int num;
    cin >> num;
    Meow cat(0, name), *p;

    for (int i = 1; i <= num; ++i) {
        cin >> name;
        Meow a(i, name);

        if (i % 2 != 0) {
            p = new Meow(i, name);
            printCount();
            p->print();
            delete p;

        } else {
            Meow b(a);
            printCount();
            b.print();
        }
    }

    printCount();
    cat.print();

    return 0;
}

