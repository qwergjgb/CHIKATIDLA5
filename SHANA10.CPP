#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
 SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
   cout<<"������� ����������� �������:";
    int i;
    cin>>N;
    int A[N];

    for( i=0;i<N;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
int fist_zero=-1, last_zero=-1;
int K(1);
for(i=0;i<N;i++){
if(A[i]==0){
    last_zero=i;
if(fist_zero==-1)
    fist_zero=i;
}}
if(last_zero!=-1&&fist_zero==last_zero){
    cout<<"��� � ��-������ ���� ������ ��� ������ ���� ����!!!!!";}
else{
    if (fist_zero==-1&&last_zero==-1){
    cout<<"����� ��� ��� � ���� ������ ������!!!!!!!!";}
    else{
for(i=fist_zero+1;i<last_zero;i++){

K*=A[i];}
 cout<<"������������ ������������� ��������� ����� ������ ����� A["<<fist_zero<<"] � ��������� ����� A["<<last_zero<<"] ����o "<<K<<endl;}}


return 0;}
