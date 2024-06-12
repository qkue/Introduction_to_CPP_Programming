/*


*/

#include <iostream>

using namespace std;

int stairs(int n, int m) {
    int ans = 0;
    if (n == 0) {
        return 1;
    }
    for (int i = (min(n, m)); i > 0; --i) {

        ans += stairs(n - i, i - 1);

    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << stairs(n, n);
    return 0;

}
