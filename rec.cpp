#include <iostream>

using namespace std;

float a, b, c;
char d;
int p;
int main()
{

    while (p != 2)
    {
        cout << "1 = calculator \n 2 - exit \n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            cout << "First number >> ";
            cin >> a;
            cout << "Action with numbers >> ";
            cin >> d;
            cout << "Second number >> ";
            cin >> b;
            if (d == '+')
            {
                c = a + b;
                cout << a << " + " << b << " = " << c << endl;
            }
            if (d == '-')
            {
                c = a - b;
                cout << a << " - " << b << " = " << c << endl;
            }
            if (d == '*')
            {
                c = a * b;
                cout << a << " * " << b << " = " << c << endl;
            }
            if (d == '/')
            {
                c = a / b;
                cout << a << " / " << b << " = " << c << endl;
                try
                {
                    if (b == 0)
                        throw 123;
                }
                catch (int q)
                {
                    cout << " Error number " << q << " >> divide by 0!" << endl;
                }
            }
        }
        case 2:
        {
            break;
        }
        }
        cout << "Result = " << c << endl;
    }
}