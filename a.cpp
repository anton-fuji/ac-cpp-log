#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int main() {
  vector<string> v;
  v = {"zero", "one", "two", "three"};

  cout << v.size() << endl;
  cout << v.at(3) << endl;
  cout << v[3] << endl;
  return 0;
}
