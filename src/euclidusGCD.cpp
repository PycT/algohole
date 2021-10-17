#include <iostream>

int gcp(int a, int b) {
  int reminder;
  while (b != 0){
   reminder = a % b;
   a = b;
   b = reminder;
  }
  std::cout << a << '\n';
  return a;
}

int main(){
  gcp(60, 24);
}
