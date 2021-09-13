# include <iostream>
using namespace std;
// Последнее задание не доделал, тк потратил на него несколько недель...
int bin(){

int count = 0;
int num = 0;
cout << "Enter number"<<endl;
cin >> num;
char binary[50];
do
{
if(num % 2)
{
    binary[count++] = '1';
}
else
{
    binary[count++] = '0';
}
num=num/2;
}
while(num);
binary[count++] = '\0';
for(int i = strlen(binary); i>0; i--)
{
cout << binary[i - 1];
}
cout<<endl;
return 0;

}
int Deg(int a, int b){
 if (b <= 0){
     return 1;
 }
   if (b % 2 == 0){
       return Deg( a = (a*a), b= (b / 2));
   } else {
       return a * Deg(a, b = (b - 1));
   }

}
int kingRoutes(int x, int y, int** avail){
    if (get2dInt(avail, y, x) == 1) return 0;
    if (x == 0 && y == 0) return 0;
    else if (x == 0){
        if (kingRoutes(x, y-1, avail) ==0 && y != 1){
            return 0;
        } else{
            return 1;
        }
    } else if (y == 0){
        if (kingRoutes(x = (x-1), y, avail) == 0 && x != 1) return 0;
        return 1;
    }
    return kingRoutes(x, y = (y - 1), avail) + kingRoutes(x = (x - 1), y, avail);
}
int get2dInt(int** array, const int row, const int col){
    return *((*(array + row)) + col);

    void lesson_4(){
    const int SZ = 6;
    int** desk = init2dIntArray(desk, SZ, SZ);

    set2dInt(desk, row = 0; col = 2; value = 1);
    set2dInt(desk, row = 2; col = 1; value = 1);
    set2dInt(desk, row = 2; col = 2; value = 1);
    print2dIntArray(desk, SZ, SZ, offset = 5);
    cout << "";
    for (int y = 0; y < SZ; ++y){
        for (int x = 0; x < SZ; ++x){
            cout << kingRoutes(x, y, desk);
        }
    } cout << "";
}

}
void set2dInt(int** array, const int row, const int col, int value){
    *((*(array + row)) + col) = value;
}
int** init2dIntArray(int** array, const int row, const int col){
    int* line = (int*) calloc(sizeof(int), row*col);
    array = (int**) calloc(sizeof(int*), row);
    for (int i = 0; i < row; ++i){
        *(array + i) = &line[i*col];
}
    return array;
}
int main(){
   // bin();
   //cout << Deg(2,5);

    return 0;
}
