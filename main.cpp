#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
int a, b, c;
cin >> a >> b;
if (a<b) c=a;
else c=b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "Min = " << c << '\n';
    return 0;
}
