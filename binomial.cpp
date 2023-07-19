//Rica Rebusit

#include <iostream>
#include <cmath>
using namespace std;

double fx(double x) {
 return pow(x,4) - 8*pow(x,3) + 18*pow(x,2) - 16*x + 5;
}

int main() {
 string input;
do {
double a;
cout << "Enter left endpoint or type done to exit" << endl;
cin >> input;

if(input == "done") {
 break;
}
a = stod(input);
double b;
cout << "Enter right endpoint" << endl;
cin >> b;

double e = 1e-2;

while(b-a > e) {
 double c = (a+b)/2.0;
if(fx(c) == 0) {
 cout << "Root x = " << c << endl;
 break;
} else if(fx(a) * fx(c) < 0) {
 b = c;
} else {
 a =c;
 }
}
cout << "Root x = " << (a+b)/2.0 << endl;
} while (true);
return 0;
}
