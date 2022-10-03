/* CAPTURE BY REFERENCE */

#include <iostream>
using namespace std;

int main() {

  int num = 2;
  cout << "Num= " << num << endl;
  auto geet= [&num] () {
    cout << "Num="<<num<<endl;
    num++;
  };

  geet();
  cout << "Num = " << num << endl;
}  