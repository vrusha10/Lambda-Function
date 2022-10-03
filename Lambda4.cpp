#include<iostream>
using namespace std;

int main() {

  int a=100;

  auto geet=[a](int num) {
    return a+num;
  };

  int f=geet(78);
  cout<<"F= "<<f<<endl;
}

  