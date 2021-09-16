#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
<<<<<<< HEAD
int a, b, c,d;
cin >> a >> b;
if (a>b) {c=a; d=b;}
else {c=b; d=a;};
=======
int a, b, c;
cin >> a >> b;
if (a>b) c=a;
else c=b;
>>>>>>> 2520a24001604eb0e4a264476498e11291365d4b
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
<<<<<<< HEAD
     << "Max = " << c << '\n'
     << "Min = " << d << '\n';
=======
     << "Max = " << c << '\n';
>>>>>>> 2520a24001604eb0e4a264476498e11291365d4b
    return 0;
}
