/**************************
 * Автор: Устинов Егор    *
 * Вариант: 13            *
 **************************/
 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double t, g;
  const double a = 0.73;
  const double A = 4.57;
  
  cout << "t = ";
  cin  >> t;
  
  while (t < 1.0) {
    g = A * (1.0 - exp( - a * t));
    t = t + 0.2;
    
    cout << fixed << setprecision(3);
    cout << "t = " << t << "\t \t" << g << endl;
  }

  do {
    t = t + 1.0;
    g = A * (1.0 - exp( - a * t));
  
    cout << "t = " << t << "\t \t" << g << endl;
  
} while (t < 5.0);
  return 0;
}
