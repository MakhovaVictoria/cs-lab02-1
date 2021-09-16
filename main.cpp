#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
int a, b, c,d;
cin >> a >> b;
if (a>b) {c=a; d=b;}
else {c=b; d=a;};
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "Max = " << c << '\n'
     << "Min = " << d << '\n';
    return 0;
}
