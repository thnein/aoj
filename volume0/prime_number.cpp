#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int n;
    while (cin >> n)
    {
        int p[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            p[i] = 1;
        }
        p[0] = 0;
        p[1] = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            for (int j = 2; i * j <= n; j++)
            {
                p[i * j] = 0;
            }
        }
        int c = 0;
        for (int i = 0; i <= n; i++)
        {
            if (p[i] == 1)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}
