#include <iostream>
using namespace std;

int main() {

  auto geet = [] (int a,int b)
  {
      cout<<"Add= "<<a+b<<endl;
  };
  geet(10,20);
}
  
  