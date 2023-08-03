#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a[7];
    for (int i = 0; i < 7; ++i) {
        cin >> a[i];
    }
    sort(a, a + 7);
    printf("%lld %lld %lld\n",a[0],a[1],a[6]-a[0]-a[1]);
    return 0;
}
