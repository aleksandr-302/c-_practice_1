#include <iostream>
#include "windows.h"
using namespace std;

int main() {
    int n;
    int i;
    cin>>n;
    for(i=n;i>=1;--i){
        cout<<i;
        Sleep(1000);
    }
}
