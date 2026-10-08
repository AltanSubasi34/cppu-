#include <iostream>
using namespace std;

int main() {
  int x;
  int y;

  cout << "ilk Sayiyi Girin: ";
  cin >> x; 

  cout << "ikinci Sayiyi Girin: ";
  cin >> y;

  int* xp = &x;
  int* yp = &y;

  cout << "iki sayinin toplami: " << *xp + *yp << "\n";

  cout << x << "\n";
  cout << xp << "\n";

  cout << y << "\n";
  cout << yp << "\n";

  
  return 0;
}