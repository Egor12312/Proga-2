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
  double a = 0.73;
  double A = 4.57;
  double step = 0.2;
  double averageValue = 1.0;
  double maxValue = 5.0;
  
  cout << "t = ";
  cin  >> t;
  
  while (t < averageValue) {
    g = A * (1.0 - exp( - a * t));
    t = t + step;
    
    cout << fixed << setprecision(3);
    cout << "t = " << t << "\t \t" << g << endl;
  }
  
  do {
    t = t + averageValue;
    g = A * (1.0 - exp(-a * t));
  
    cout << "t = " << t << "\t \t" << g << endl;
  } while (t < maxValue);
  
  return 0;
}
