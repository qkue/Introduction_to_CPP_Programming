/*
Слова с прописной буквы
Дана строка. Измените регистр символов в этой строке так, чтобы первая буква каждого слова была прописной, а остальные буквы — строчными. Словом называется последовательность строчных или прописных латинских букв. Все остальные символы являются разграничителями между словами.

Входные данные
Дана строка из символов с ASCII-кодами от 32 до 127.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
-a-bb-ccc

Вывод
-A-Bb-Ccc

Ввод
In a hole in the ground there lived a hobbit.

Вывод
In A Hole In The Ground There Lived A Hobbit.

Ввод
Everyone OF uS HAS all wE NEED

Вывод
Everyone Of Us Has All We Need

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text, answer = "";
    getline(cin, text);

    for (int i = 0; i < text.length(); ++i) {
        if (isalpha(text[i]) && !isalpha(answer.back())) {
            if (islower(text[i])) {
                answer.push_back(text[i] - 'a' + 'A');
            } else {
                answer.push_back(text[i]);
            }
        } else if (isalpha(text[i]) && isupper(text[i])) {
            answer.push_back(text[i] - 'A' + 'a');
        } else {
            answer.push_back(text[i]);
        }
    }
    cout << answer;
}

