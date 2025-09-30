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
  double shag = 0.2;
  double sred_znachenie = 1.0;
  double max_znachenie = 5.0;
  
  cout << "t = ";
  cin  >> t;
  
  while (t < sred_znachenie) {
    g = A * (1.0 - exp( - a * t));
    t = t + shag;
    
    cout << fixed << setprecision(3);
    cout << "t = " << t << "\t \t" << g << endl;
  }
  
  do {
    t = t + sred_znachenie;
    g = A * (1.0 - exp(-a * t));
  
    cout << "t = " << t << "\t \t" << g << endl;
  }
  
  while (t < max_znachenie);
  return 0;
}
