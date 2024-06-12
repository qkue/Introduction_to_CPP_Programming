/*
Количество слов
Дана строка, состоящая из слов, разделённых пробелами. Определите, сколько в ней слов.

Входные данные
Вводится строка.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
Hello world

Вывод
2

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    getline(cin, text);
    int cnt = 0;

    for (char s : text) {
        if (s == ' ') {
            cnt += 1;
        }
    }
    cout << cnt + 1;

}

