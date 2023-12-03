#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    COORD c;
 HANDLE hnd = GetStdHandle(STD_OUTPUT_HANDLE);
int i, j, n, k;
double a[100][100];
cout<< "Введите количество столбцов матрицы: ";
cin >> n;
cout << "Введите количество строк матрицы: ";
cin >> k;
cout<<"Введите матрицу a: \n";
for(i=0; i<k; i++){
for(j=0; j<n; j++){
c.X = 5 + j * 5;
 c.Y = 3 + i;
 SetConsoleCursorPosition(hnd, c);
cin>>a[i][j];
}
}
 int f = 0;
        for( i = 0; i < k && !f; i++ )//находим строку содержащую нулевой элемент
        {
            for( j = n - 1; j >= 0 && !f; j-- )
            {
                if( a[i][j] == 0 ){

                    cout<<"Номер первого столбца содержащей нулевой элемент: "<<j + 1 ;
                    f = 1;}
            }
        }
return 0;}

