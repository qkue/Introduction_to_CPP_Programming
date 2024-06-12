/*


*/

#include <iostream>

using namespace std;

double make_mul(double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        double temp = make_mul(a, n / 2);
        return temp * temp;
    } else {
        return a * make_mul(a, n - 1);
    }
}

int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << make_mul(a, n);
    return 0;

}
