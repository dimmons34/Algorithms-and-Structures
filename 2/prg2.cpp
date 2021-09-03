#include <iostream>
#include <QCoreApplication>
using namespace std;

int main(){
    int a = 1;
    int b = 10;
    int sum = 0;
    for (int i = a; i <= b; i++){
        sum = (sum + i);
    }

    cout << sum << endl;
}
