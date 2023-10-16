
#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b);
int main()
{
    double t, s;
   
    cout << "t = "; cin >> t;
   
    cout << "s = "; cin >> s;
   
    double c = g(2, s) + pow(1 + g(t, 1) * g(t, 1), 3);
   
    cout << "c = " << c << endl;
  
    return 0;
}
double g(const double a, const double b)
{
    return (a * b) / (a * a + b * b);
}



