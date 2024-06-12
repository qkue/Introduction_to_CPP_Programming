/*
Подстрока в строке
Даны две строки. Определите, является ли первая строка подстрокой второй строки.

Входные данные
На вход подаются две строки длиной не более 10000, состоящие только из строчных букв латинского алфавита.

Выходные данные
Необходимо вывести слово yes, если первая строка является подстрокой второй строки, или слово no в противном случае.

Примеры
Ввод
abac
ababacaba

Вывод
yes

Ввод
a
bcdef

Вывод
no

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text, subtext;
    cin >> subtext;
    cin >> text;
    bool isSubstr = false;

    for (int i = 0; i < text.length(); ++i) {
        if (text.substr(i, subtext.length()) == subtext) {
            isSubstr = true;
        }
    }
    if (isSubstr) {
        cout << "yes";
    } else {
        cout << "no";
    }
}

