#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int n;
    while(true) {
        cin >> n;

        if (n==1){
            cout << "яблоко"<< endl;
        }
        if (n>1 & n<5){
            cout << "яблока"<< endl;
        }
        if (n>4 & n<20){
            cout << "яблок"<< endl;
        }
    }
     return 0;
}