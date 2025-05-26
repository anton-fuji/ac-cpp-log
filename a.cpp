#include <iostream>
// #include <string>

using namespace std;

int nibai(int a) {
  int goukei = a * 200;
  return goukei;
}

int main() {
  int apple;
  cout << "apple?" << "\n";
  cin >> apple;
  int judge = nibai(apple);
  if (judge > 3000)
    cout << "予算オーバー\n";
  else
    cout << "購入可能\n";
}
