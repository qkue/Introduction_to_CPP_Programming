/*
Разворот последовательности
Дана последовательность целых чисел, заканчивающаяся числом 0. Выведите эту последовательность в обратном порядке.

При решении этой задачи нельзя пользоваться массивами, векторами и прочими динамическими структурами данных.

Входные данные
Вводится последовательность целых чисел, оканчивающаяся числом 0.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
1
2
3
0

Вывод
0
3
2
1

*/

#include <iostream>

using namespace std;

void rec() {
    int num;
    cin >> num;
    if (num == 0) {
        cout << num << " ";
        return;
    }
    rec();
    cout << num << " ";
}

int main() {
    rec();
    return 0;

}