#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    while (std::cin >> a >> b)
    {
        int s = a + b;
        int n = 1;
        while (0 < s / 10)
        {
            n++;
            s = s / 10;
        }
        cout << n << endl;
    }
    return 0;
}
