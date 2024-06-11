/*


*/

#include <iostream>

using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = ((a + d - c - 1) / d) * d + c;
    for (int i = a; i <= b; i += d) {
        cout << i << " ";
    }
}