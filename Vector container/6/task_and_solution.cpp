/*
Цифры
На вход программе подаётся последовательность из N чисел от 1 до 9. Подсчитайте в этой последовательности количество единиц, количество двоек, количество троек и т. д. и выдайте результат.

Входные данные
В первой строке записано натуральное число N (N⩽100) — количество элементов в последовательности. В следующей строке записано N целых чисел от 1 до 9 — элементы последовательности.

Выходные данные
Выведите ответ к задаче.

Примеры
Ввод
5
8 2 5 8 8

Вывод
0 1 0 0 1 0 0 3 0 

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> numbers(10);
    for (int i = 0; i < n; i++) {
        int item;
        cin >> item;
        numbers[item] += 1;
    }

    for (int i = 1; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
}