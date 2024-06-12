/*
Ходы ферзя
На шахматной доске стоит ферзь. Отметьте положение ферзя на доске и все клетки, которые бьёт ферзь. Клетку, где стоит ферзь, отметьте буквой «Q», клетки, которые бьёт ферзь, отметьте символами «*», остальные клетки заполните точками.

Входные данные
В двух строках входного файла заданы два числа — координаты нахождения ферзя. Числа во входном файле натуральные, не превосходящие 8 по значению.

Выходные данные
Выведите на экран изображение доски так, как это показано в примере. Обратите внимание, что символы в одной строке разделены пробелом.

Примеры
Ввод
4
2

Вывод
. * . . * . . . 
. * . * . . . . 
* * * . . . . . 
* Q * * * * * * 
* * * . . . . . 
. * . * . . . . 
. * . . * . . . 
. * . . . * . . 

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <vector <int>> chess(8 + 4, vector <int>(8 + 4));

    int queen_x, queen_y;
    cin >> queen_x >> queen_y;
    chess[queen_x + 1][queen_y + 1] = 2;

    vector <int> moves_x = {-1, -1, 1, 1};
    vector <int> moves_y = {-1, 1, -1, 1};

    for (int i = 0; i < moves_x.size(); i++) {
        chess[queen_x + 1 + moves_x[i]]
             [queen_y + 1 + moves_y[i]]= -1;
    }

    vector <int> rays_x = {-1, -1, -1, 0, 1, 1, 1, 0};
    vector <int> rays_y = {-1, 0, 1, 1, 1, 0, -1, -1};
    for (int i = 0; i < rays_x.size(); i++) {
        int start_point_x = queen_x + 1;
        int start_point_y = queen_y + 1;
        int now_x = start_point_x;
        int now_y = start_point_y;
        while ((now_x < chess.size() - 1 && now_x > 1) &&
               (now_y < chess.size() - 1 && now_y > 1)) {
            chess[now_x + rays_x[i]][now_y + rays_y[i]] = -1;
            now_x += rays_x[i];
            now_y += rays_y[i];
        }
    }

    for (int i = 2; i < chess.size() - 2; i++) {
        for (int j = 2; j < chess[i].size() - 2; j++) {
            if (chess[i][j] == -1) {
                cout << "*" << " ";
            } else if (chess[i][j] == 2) {
                cout << "Q" << " ";
            } else {
                cout << "." << " ";
            }
        }
        cout << endl;
    }


}
