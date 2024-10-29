#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<bool> v(n + 1, false);
    int i;
    while (cin >> i)
    {
        v[i] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!v[i])
            cout << i;
    }
}