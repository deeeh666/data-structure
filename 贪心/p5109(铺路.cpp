#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> d(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }
    int ans = d[1];
    for (int i = 2; i <= n; i++) {
        if (d[i] > d[i - 1]) {
            ans += d[i] - d[i - 1];
        }
    }
    cout << ans << endl;
    return 0;
}
