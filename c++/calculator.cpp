#include <iostream>
using namespace std;

int main(){
char symbol; int a, b;

cout << "Enter a symbol (+ or - or * or /): ";
cin >> symbol;
cout << "Enter two values: "<<endl;
cin >>a >>b;

switch (symbol){
  case	'+':
    cout<<" a + b = "<< a+b; 
    break;
  case	'-':
    cout<<" a - b = "<< a-b; 
    break;
  case	'*':
    cout<<" a * b = "<< a*b; 
    break;
  case	'/':
    cout<<" a / b = "<< a/b; 
    break;
  default:
    cout<<"Invalid symbol, please enter again." ;
  }
}
