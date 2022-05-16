#include <iostream>
using namespace std;

int main(){
char symbol; int a, b;

cout << "Enter symbol = ";
cin >> symbol;
cout << "Enter value number 1 and number 2 "<<endl;
cin >>a >>b;

switch (symbol){
  case	'+':
    cout<<" a + b = "<< a+b; break;
  case	'-':
    cout<<" a - b = "<< a-b; break;
  case	'*':
    cout<<" a * b = "<< a*b; break;
  case	'/':
    cout<<" a / b = "<< a/b; break;
  default:
    cout<<"wrong symbol input " ;
  }
}
