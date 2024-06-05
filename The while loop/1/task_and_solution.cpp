/*
Трискайдекафобия
Трискайдекафобия — боязнь числа 13. В особо сложных формах пациент боится и всех чисел, кратных 13.

Дано число N. Выведите все целые числа по возрастанию, начиная с числа N, пока не встретится число, кратное 13. Его выводить не нужно.

Входные данные
Дано натуральное число N, не превосходящее 10000.

Выходные данные
Выведите ответ задачи.

Примечание
Программа должна быть решена при помощи одного цикла while, без if внутри цикла.

Примеры
Ввод
20

Вывод
20
21
22
23
24
25

*/

#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    while (n % 13 != 0) {
        cout << n << endl;
        n++;
    }
}