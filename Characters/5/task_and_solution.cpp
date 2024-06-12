/*
Максимальная из трёх
Даны три строки. Выведите лексикографически максимальную из них.

Входные данные
Даны три строки, состоящие из символов с ASСII-кодами от 32 до 126. Длина каждой строки не превосходит 100 символов.

Выходные данные
Выведите лексикографически максимальную строку.

Примеры
Ввод
MISIS
MIPT
HSE

Вывод
MISIS

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string one, two, three;
    getline(cin, one);
    getline(cin, two);
    getline(cin, three);
    if (one > two) {
        two = one;
    }
    if (two > three) {
        three = two;
    }
    cout << three;
}
