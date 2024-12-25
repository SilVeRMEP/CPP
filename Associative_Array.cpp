#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    unordered_map<long long, long long> ss;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            long long k, v;
            cin >> k >> v;
            ss[k] = v;
        }
        else if (t == 1)
        {
            long long k;
            cin >> k;
            cout << ss[k] << endl;
        }
    }

    return 0;
}
