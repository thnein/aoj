#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
    int d, t;
    double x, y, r = 90.0;
    while (scanf("%d,%d", &d, &t))
    {
        if (d == 0 && t == 0)
        {
            break;
        }

        x += d * cos(r * M_PI / 180);
        y += d * sin(r * M_PI / 180);
        r -= t;
    }
    printf("%d\n%d\n", (int)x, (int)y);
    return 0;
}
