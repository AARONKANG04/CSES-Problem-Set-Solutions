#include <iostream>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        // Complementary counting
        ll k2 = k * k;
        ll combinations = k2 * (k2 - 1) / 2;
        ll waysToKill = 4 * (k - 1) * (k - 2);
        cout << combinations - waysToKill << endl;
    }
}