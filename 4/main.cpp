#include <iostream>
#include <cmath>
using namespace std;



int Massiv () {
   const int ROW = 3;
   const int COL = 3;
   int arr[ROW][COL] = {1, 9, 2, 5, 7, 6, 4, 3, 8};
   int temp = 0;

   cout << "original"s << endl;
   for (int i = 0; i<ROW; i++){
    for (int j = 0; j<COL; j++){
        cout << arr[i][j];
    }
        cout << "" <<endl;
   }

   cout << "sorted:"s << endl;
    for (int m=0; m<(ROW * COL - 1); m++)
        for (int i = 0; i<ROW ; i++){
            for (int j = 0; j<COL; j++){
                    if (i==ROW-1 && j==COL-1){
                            continue;
                    }

                if (arr[i][j] > arr[i][j+1]){
                   temp = arr[i][j];
                   arr[i][j] = arr[i][j+1];
                   arr[i][j+1] = temp;
                }
           }
        }

   for (int i = 0; i<ROW; i++){
    for (int j = 0; j<COL; j++){
        cout << arr[i][j];
    }
        cout << "" << endl;
   }


   cin.get();
}
int Sort(){

    int MASS[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = 0;
   for (int i = 0; i < 10; ++i){
       cout << "insert int numbers"s << endl;
   cin >> a;
   MASS[i] = a;
}
    cout << "user numbers"s << endl;
    for (int q = 0; q < 10; ++q){
        cout << MASS[q];


    }
    cout << "" << endl;
    cout << "invert numbers"s << endl;

    for (int i = 0; i < (10 / 2) ; ++i){
               int c = MASS[i];
                MASS[i] = MASS[10 - 1 - i];
                MASS[10 - 1 - i] = c;
    }
    for (int q = 0; q < 10; ++q){
        cout << MASS[q];
cout << "" << endl;
    }
cout << "calculation result" << endl;
     for (int i = 0; i < 10; ++i){
         double X = 0;
         double s = 0;
         X = MASS[i];
         s = sqrt(fabs(X))+5* pow(X, 3);
         if (s < 400){
         cout << s << endl;
}else{
             cout << "result > 400" << endl;
     }
     }
}

int main(){
  Massiv();
  Sort();
    return 0;
}
