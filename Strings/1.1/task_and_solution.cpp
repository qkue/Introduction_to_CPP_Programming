/*
Совпадающие начало и конец
Дана строка. Требуется найти самую длинную её подстроку, у которой совпадает первый и последний символы. Если подходит несколько подстрок, то выведите любую из них.

Входные данные
На вход подаётся одна строка из строчных латинских букв длиной не более 100 символов.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
misis

Вывод
isi

Ввод
ab

Вывод
a

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text, answer = "";
    cin >> text;
    for (char t: text) {
        //cout << "char: " << t << endl;
        int left = (int) text.find(t);
        int right = (int) text.rfind(t);
        //cout << "left: " << left << "right: " << right << endl;
        if ((left == -1) || (right == -1)) {
            continue;
        }
        //cout << "char: " << t << endl;
        string subtext = text.substr(left, right-left + 1);
        //cout << "subtext: " << subtext << endl;
        if (answer.length() < subtext.length()) {
            answer = subtext;
        }

    }
    cout << answer;

}

