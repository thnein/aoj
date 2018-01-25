#include <iostream>
using namespace std;
int main(void)
{
    unsigned int a, b;
    while (cin >> a >> b)
    {
        int r = 1;
        unsigned int g = 1, l = 1;
        if (a < b)
        {
            unsigned int _a = a, _b = b;
            while (_b % _a != 0)
            {
                r = _b % _a;
                _b = _a;
                _a = r;
            }
            g = _a;
            a = a / g;
            b = b / g;
            l = g * a * b;
        }
        else if (b < a)
        {
            unsigned int _a = a, _b = b;
            while (_a % _b != 0)
            {
                r = _a % _b;
                _a = _b;
                _b = r;
            }
            g = _b;
            a = a / g;
            b = b / g;
            l = g * a * b;
        }
        cout << g << ' ' << l << endl;
    }
}
