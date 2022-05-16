#include <iostream>
using namespace std;
int main()
{

  int x=3, y=3;
  cout<<"Line 1 : The result is \t"<<(x==3 && x!=10)<<endl; //3 == 3 FALSE && 3!=10 TRUE = TRUE
  cout<<"Line 2 : The result is \t"<<(x>3 || x<10)<<endl; //3 > 3 FALSE || 3 < 10 TRUE = TRUE
  cout<<"Line 3 : The result is \t"<<(y==3 && y!=10)<<endl; ///3 == 3 TRUE && 3!=10 TRUE = TRUE
  cout<<"Line 1 : The result is \t"<<(y>3 || y<10)<<endl; //3>3 FALSE || 3<10 TRUE = TRUE
}
