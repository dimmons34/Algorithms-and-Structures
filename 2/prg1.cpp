#include <iostream>
#include <QCoreApplication>
using namespace std;


int main(){
    int a;
        cin >> a;
        bool num_simple = true;

        if (a == 0 || a == 1){
            num_simple = false;}
        else if (a == 2){
            num_simple = true;
        }
        else if (a % 2 == 0){
            num_simple = false;
        }
        else {
            for (int i = 3; i <= round(sqrt(a)); i +=2 ){
                if (a % i == 0){
                    num_simple = false;
                    break;
                }
            }
        }
        if (num_simple){
            cout << "yes" << endl;}
        else {
            cout << "no" << endl;
        }
}
