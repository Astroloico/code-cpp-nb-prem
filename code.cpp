#include <iostream>
#include <vector>

using namespace std;

static bool IsXDivisibleByY(int X, int Y)
{
    float a = X / (float)Y;
    float b = floor(a);
    return (a == b);
}

int main()
{
    while (true)
    {
        int n{};
        cin >> n;
        n -= 1;
        cout << "\n";

        vector<int> nint (n, 0);
        vector<bool> nbool (n, true);

        for (int i = 0; i < n; i++)
        {
            nint.at(i) = i + 2;
        }

        for (int i = 0; i < n; i++)
        {
            if (nbool.at(i))
            {
                cout << nint.at(i) << " ";
                for (int j = i + 1; j < n; j++)
                {
                    if (nbool[j])
                    {
                        if (IsXDivisibleByY(nint.at(j), nint.at(i)))
                        {
                            nbool.at(j) = false;
                        }
                    }
                }
            }
        }
    }
}
