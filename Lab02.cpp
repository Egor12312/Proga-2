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
  
  cout << "t = ";
  cin  >> t;
  
  while (t < 1) {
    g = 4.57 * (1 - exp( - 0.73 * t));
    t = t + 0.2;
    
    cout << fixed << setprecision(3);
    cout << "t = " << t << "\t \t" << g << endl;
  }

  do {
    t = t + 1;
    g = 4.57 * (1 - exp( - 0.73 * t));
  
    cout << "t = " << t << "\t \t" << g << endl;
  
} while (t < 5);

  return 0;
}
