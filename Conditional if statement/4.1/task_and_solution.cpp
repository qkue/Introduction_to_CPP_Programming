/*
Ход коня
Шахматный конь ходит буквой «Г» — на две клетки по вертикали в любом направлении и на одну клетку по горизонтали или наоборот. Даны две различные клетки шахматной доски, определите, может ли конь попасть с первой клетки на вторую за один ход.

Входные данные

Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.

Выходные данные
Программа должна вывести YES, если из первой клетки ходом коня можно попасть во вторую, или NO в противном случае.

Примеры
Ввод
2
4
3
2
Вывод
YES

Ввод
1
1
1
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
    int row, col;
    row = (x1 > x2 ? x1 - x2 : x2 - x1);
    col = (y1 > y2 ? y1 - y2 : y2 - y1);
    if ((x1 != x2 && y1 != y2) && row + col == 3) {
            flag = "YES";
        }
    cout << flag;
    return 0;
}