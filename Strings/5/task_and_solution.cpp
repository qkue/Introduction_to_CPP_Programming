/*
Пробелы по правилам
В строке имеется несколько слов, разделённых одним или несколькими пробелами. Требуется убрать из текста лишние пробелы: два и более пробела подряд, а также все пробелы в начале и в конце строки.

Входные данные
На вход программе подаётся строка, состоящая не более чем из 255 символов.

Выходные данные
Выведите преобразованную строку.

Примеры
Ввод
 Odin  Dva   Tri  
 
Вывод
Odin Dva Tri

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string text, temp = "", answer = "";
    getline(cin, text);

    for (int i = 0; i < text.length(); ++i) {
        if ((answer.length() > 0 && answer.back() !=' ') && (text[i] == ' ') && (text[i + 1] != ' ')) {
            answer.push_back(text[i]);
        } else if (text[i] != ' ') {
            answer.push_back(text[i]);
        }
    }
    cout << answer;
}

