/*
Палиндром
Дано слово, состоящее только из заглавных и строчных латинских букв. Проверьте, верно ли, что это слово читается одинаково как справа налево, так и слева направо (то есть является палиндромом), если считать заглавные и строчные буквы неразличающимися. Выведите YES, если слово является палиндромом, и NO, если не является.

При решении этой задачи нельзя пользоваться вспомогательными массивами или строками.

Входные данные
Дана строка длиной не более 100 символов.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
Radar

Вывод
YES

Ввод
YES

Вывод
NO

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text;
    cin >> text;
    int left = 0;
    int right = text.length() - 1;
    bool isPalind = true;
    for (int i = 0; i < text.length() / 2; i++) {
        if (tolower(text[left]) != tolower(text[right])) {
            isPalind = false;
        }
        left++;
        right--;
    }
    if (isPalind) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
