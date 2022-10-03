#include <iostream>
using namespace std;

int main() {

  auto geet = [] (int a,int b,string op) -> double
  {
      if(op=="sum")
      {
      return a+b;
      }
      
      else {
          return (a+b)/2.0;
      }
  };
  int n1=2,n2=3;
  auto sum = geet(n1,n2,"sum");
  cout<<"sum= "<<sum<<endl;
  
  auto avg= geet(n1,n2,"avg");
  cout<<"Avg= "<<avg<<endl;
}