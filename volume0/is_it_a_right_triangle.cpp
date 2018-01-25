#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin >> N;
    for (int n = 0; n < N; n++)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (a[j] < a[i])
                {
                    int t = a[j];
                    a[j] = a[i];
                    a[i] = t;
                }
            }
        }
        if (((a[0] * a[0]) + (a[1] * a[1])) == (a[2] * a[2]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
