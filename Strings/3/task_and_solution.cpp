/*
Замена подстроки
Дана строка. Замените в этой строке все цифры 1 на слово one.

Входные данные
Вводится строка.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
1+1=2

Вывод
one+one=2

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text, answer = "";
    string word = "one";
    getline(cin, text);

    for (char s: text) {
        if (s == '1') {
            answer += word;
        } else {
            answer.push_back(s);
        }

    }
    cout << answer;

}

