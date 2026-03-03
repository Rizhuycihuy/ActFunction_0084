#include<iostream>
using namespace std;

float p,l;

void input(){
  cout << "masukkan panjangg : " ;
  cin >> p;
  cout << "masukkan lebar : " ;
  cin >> l;
}

float luaspersegi(){
  return p*l;

}

void output (){
  cout <<  "hasil nya = " << luaspersegi();



}

int main()
{
  input();
  output();
}