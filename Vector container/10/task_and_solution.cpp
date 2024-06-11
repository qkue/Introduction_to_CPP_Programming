/*
Максимальное произведение
В массиве, заполненном произвольными целыми числами, найдите два числа, произведение которых максимально. Вложенные циклы не используйте.

Входные данные
На вход программе сначала подаётся значение n⩽50000 — количество элементов в массиве. В следующей строке входных данных расположены сами элементы массива — целые числа, по модулю не превосходящие 30000.

Выходные данные
Выдайте два искомых числа в порядке неубывания.

Примеры
Ввод
5
-4 3 -5 2 5

Вывод
-5 -4

Ввод
3
1 2 -10

Вывод
1 2

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> positive(2), negative(2);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num > 0) {
            if (num > positive[0]) {
                positive[1] = positive[0];
                positive[0] = num;
            } else if (num > positive[1]) {
                positive[1] = num;
            }
        }
        else if (num < 0) {
            if (num < negative[0]) {
                negative[1] = negative[0];
                negative[0] = num;
            } else if (num < negative[1]) {
                negative[1] = num;
            }
        }
    }
    if (n == 2 && ((negative[1] == 0) && (positive[1] == 0))) {
      cout << negative[0] + negative[1] << " " << positive[0] + positive[1];
    } else if ((negative[0] * negative[1]) >= (positive[0] * positive[1])) {
        //if (negative[0] > negative[1]) {
        //    swap(negative[0], negative[1]);
        //}
        cout << negative[0] << " " << negative[1];
    } else {
        //if (positive[0] > positive[1]) {
         //   swap(positive[0], positive[1]);
        //}
        cout << positive[1] << " " << positive[0];
    }

}
