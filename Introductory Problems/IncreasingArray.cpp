#include <vector>
#include <iostream>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> array(n);
    ll n_moves = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 1; i < n; i++)
    {
        ll diff = array[i - 1] - array[i];
        if (diff > 0)
        {
            n_moves += diff;
            array[i] += diff;
        }
    }

    cout << n_moves;
}