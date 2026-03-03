#include<iostream>
using namespace std;
float p,l;

void input (){
  cout << "masukkan panjang : " ;
  cin >> p;
  cout << "masukkan lebar : " ;
  cin >> l;

}

float luaspersegi(float x,float y)
{
  return x*y;
}

int jumlah(int a, int b, int c)
{
  return a+b+c;
}

void output (){
  cout << "hasil nya : " << luaspersegi(p,l) << endl;
}

int main()
{
  input();
  output();
  cout << "hasil penjumlahan = " << jumlah(5,6,9);
}
