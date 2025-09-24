/**************************
 * Автор: Устинов Егор    *
 * Вариант: 13            *
 **************************/
 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  const int n = 9;
  int i;
  double t[n], g;
 
  cout << "Vvedite 9 eiementov:" << endl;
  for (i = 0; i < 9; ++i)
    cin >> t[i];
    
  cout  << "\t"  << "t"  << "\t \t" << "g"  << endl;
  cout  << fixed << setprecision(3);
  for (i = 0; i < 9; ++i) { 
      g = 4.57 * (1 - exp( - 0.73 * t[i]));
      cout  << "\t " << t[i] << "\t  \t " << g << endl;
}
 return 0;
}
