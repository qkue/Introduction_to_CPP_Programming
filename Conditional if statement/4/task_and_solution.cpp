/*
Ход слона
Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть из первой клетки во вторую за один ход.

Входные данные
Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.

Выходные данные
Программа должна вывести YES, если из первой клетки ходом слона можно попасть во вторую, или NO в противном случае.

Примеры
Ввод
4
4
5
5
Вывод
YES

Ввод
4
4
5
4
Вывод
NO

*/

#include <iostream>
#include <string>

using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    string flag = "NO";
    if (x2 < x1) {
        int temp;
        temp = x1;
        x1 = x2;
        x2 = temp;
        temp = y1;
        y1 = y2;
        y2 = temp;
    }
    if (((x2 - x1) * (x2 - x1)) == ((y2 - y1) * (y2- y1))) {
            flag = "YES";
        }
    cout << flag;
    return 0;
}