#include <iostream>
using namespace std;
int main() {
    int a,b;
    a=0;
    b=0;
    char c;
    cin>>a>>b>>c;

    switch ( c ) {

        case '+':
            cout<< a + b;
            break;

        case '-':
            cout<< a - b;
            break;

        case '*':
            cout<< a * b;
            break;

        case '/':
            cout<< a / b;
            break;

        default:
            return 0;
    }
}
