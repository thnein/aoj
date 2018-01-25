#include <iostream>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
}
