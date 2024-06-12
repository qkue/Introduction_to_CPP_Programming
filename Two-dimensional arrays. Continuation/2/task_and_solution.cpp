/*
Ходы коня
На шахматной доске стоит конь. Отметьте положение коня на доске и все клетки, которые он бьёт. Клетку, где стоит конь, отметьте английской буквой «K». Клетки, которые он бьёт, отметьте символами «*». Остальные клетки заполните точками.

Входные данные
Программа получает на вход два числа — координаты коня на шахматной доске. Координаты вводятся на одной строке через пробел. Первое число обозначает номер строки, а второе — номер столбца. Все числа принимают значения от 1 до 8.

Выходные данные
Выведите на экран изображение доски так, как это показано в примере. Обратите внимание, что символы в одной строке разделены пробелом.

Примеры
Ввод
4 2

Вывод
. . . . . . . .
* . * . . . . .
. . . * . . . .
. K . . . . . .
. . . * . . . .
* . * . . . . .
. . . . . . . .
. . . . . . . .

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <vector <int>> chess(8 + 4, vector <int>(8 + 4));

    int horse_x, horse_y;
    cin >> horse_x >> horse_y;
    chess[horse_x + 1][horse_y + 1] = 2;

    vector <int> moves_x = {-2, -2, -1, -1, 1, 1, 2, 2};
    vector <int> moves_y = {-1, 1, -2, 2, -2, 2, -1, 1};
    for (int i = 0; i < moves_x.size(); i++) {
        chess[horse_x + 1 + moves_x[i]]
             [horse_y + 1 + moves_y[i]]= -1;
    }

    for (int i = 2; i < chess.size() - 2; i++) {
        for (int j = 2; j < chess[i].size() - 2; j++) {
            if (chess[i][j] == -1) {
                cout << "*" << " ";
            } else if (chess[i][j] == 2) {
                cout << "K" << " ";
            } else {
                cout << "." << " ";
            }
        }
        cout << endl;
    }


}