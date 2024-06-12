/*
Шифр Цезаря
В шифре Цезаря каждый символ, являющийся буквой латинского алфавита, заменяется другим символом, k-м по счёту в алфавите после данного. Если этот символ выходит за границы списка, то берётся соответствующий символ из начала строки. Например, для k=3 символ A заменяется на D, символ B — на E, символ C — на F ... символ Z — на C. Аналогично строчные буквы заменяются на строчные буквы. Все остальные символы не меняются.

Дана строка, зашифруйте её при помощи шифра Цезаря для k=3.

Входные данные
Дана строка из символов с ASCII кодами от 32 до 127, длиной не больше 10000 символов.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
In a hole in the ground there lived a hobbit.

Вывод
Lq d kroh lq wkh jurxqg wkhuh olyhg d kreelw.

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text, answer = "";
    getline(cin, text);
    int shift = 3;
    for (char s: text) {
        if (isalpha(s)) {
            if (islower(s)) {
                answer.push_back(char('a' + (s - 'a' + shift) % ('a' - 'z' - 1)));
            } else {
                answer.push_back(char('A' + (s - 'A' + shift) % ('A' - 'Z' - 1)));
            }
        } else {
            answer.push_back(s);
        }
    }
    cout << answer;

}
