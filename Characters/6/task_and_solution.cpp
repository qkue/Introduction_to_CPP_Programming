/*
Вставка символов
Дана строка. Получите новую строку, вставив между всеми парами соседних символов исходной строки символ \*.

Входные данные
Вводится строка из больших и маленьких латинских букв длиной не более 100 символов.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
A

Вывод
A
Hello

Вывод
H*e*l*l*o

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string text, answer = "";
    getline(cin, text);

    for (char s: text) {
        answer.push_back(s);
        answer.push_back('*');
    }
    answer.pop_back();
    cout << answer;
}
