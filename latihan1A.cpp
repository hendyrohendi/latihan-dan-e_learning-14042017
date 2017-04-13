#include<iostream>
using namespace std;
int main(){

int a;
cout << "masukan jumlah a:";
cin >> a;

string nama[a];
int i;

for (i=0; i<a; i++){
cin >> nama[i];
}
return 0;
}