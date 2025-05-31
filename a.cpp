#include <iostream>

using namespace std;

void say_hello() { cout << "Hello World" << endl; }

int sqrt(int a) { return a * a; }

int main() {
  say_hello();
  say_hello();
  say_hello();

  int x = 10;
  int y = x * x;

  int y2 = sqrt(x);
  cout << y2 << endl;
}
