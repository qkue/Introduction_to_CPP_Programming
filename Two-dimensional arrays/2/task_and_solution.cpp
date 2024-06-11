/*
Шахматная доска
Даны два числа: n и m. Создайте двумерный массив размером n×m и заполните его символами 1 и 0 в шахматном порядке. В левом верхнем углу должна стоять единица.

Входные данные
Даны два натуральных числа n и m, не превышающие 10.

Выходные данные
Выведите заполнение доски.

Примеры
Ввод
3 4

Вывод
1 0 1 0
0 1 0 1
1 0 1 0

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <int>> checkers (n, vector <int> (m));

    for (int i = 0; i < n; i++) {
        if (i % 2) {
            for (int j = 0; j < m; j++) {
                checkers[i][j] = (j % 2 != 0);
            }
        } else {
            for (int j = 0; j < m; j++) {
                checkers[i][j] = (j % 2 == 0);
            }
        }

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << checkers[i][j] << " ";
        }
        cout << endl;
    }
}
