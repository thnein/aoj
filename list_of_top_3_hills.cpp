#include <iostream>
int main(void)
{
    int h;
    int t[3] = {0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        std::cin >> h;
        for (int i = 0; i < 3; i++)
        {
            if (t[i] <= h)
            {
                switch (i)
                {
                case 0:
                    t[i + 2] = t[i + 1];
                    t[i + 1] = t[i];
                    t[i] = h;
                    break;
                case 1:
                    t[i + 1] = t[i];
                    t[i] = h;
                    break;
                case 2:
                    t[i] = h;
                }
                break;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << t[i] << std::endl;
    }
    return 0;
}
