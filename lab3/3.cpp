#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n; cin >> n;
        if (n == 0) break;
        long long s = 0, tmp = 1;
        for (int i = 1; i <= n; ++i) {
            tmp *= i;
            s += tmp;
        }
        cout << s << endl;
    }
    return 0;
}
