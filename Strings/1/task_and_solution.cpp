/*
Сначала чётные позиции, потом нечётные
Дана строка. Выведите на одной строке сначала символы, стоящие на чётных позициях, а потом — на нечётных.

Входные данные
На вход подаётся строка, состоящая из строчных букв латинского алфавита. Длина строки не превышает 100 символов.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
miiss

Вывод
misis

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text, answer_even = "", answer_odd = "";
    getline(cin, text);
    for (int i = 0; i < text.length(); i++) {
        if (i % 2) {
            answer_odd.push_back(text[i]);
        } else {
            answer_even.push_back(text[i]);
        }
    }
    cout << answer_even + answer_odd;

}

