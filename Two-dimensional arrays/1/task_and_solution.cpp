/*
Сверху вниз, слева направо
Даны два числа: n и m. Создайте двумерный массив размером n×m и заполните его в соответствии с примером.

Входные данные
Даны два натуральных числа: n и m, не превышающие 10.

Выходные данные
Выведите ответ к задаче.

Примеры
Ввод
5 6

Вывод
0 5 10 15 20 25 
1 6 11 16 21 26 
2 7 12 17 22 27 
3 8 13 18 23 28 
4 9 14 19 24 29 

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <int>> numbers (n, vector <int> (m));

    for (int i = 0; i < n; i++) {
        //int num = i;
        for (int j = 0; j < m; j++) {
            numbers[i][j] = i + (j * n);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
}
