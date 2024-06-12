/*


*/

#include <iostream>

using namespace std;

void hanoi(int n, int f, int t) {
    if (n == 0) {
        return;
    }
    int mid = 6 - f - t;
    hanoi(n - 1, f, mid);
    cout << n << " " << f << " " << t << endl;
    hanoi(n - 1, mid, t);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3);
    return 0;

}
