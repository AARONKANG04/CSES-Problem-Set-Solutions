#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    int longest = 1;

    for (size_t i = 0; i < s.size();)
    {
        int count = 1;
        char current = s[i];
        while (i + 1 < s.size() && s[i + 1] == current)
        {
            count++;
            i++;
        }

        longest = max(longest, count);
        i++;
    }

    cout << longest;
    return 0;
}