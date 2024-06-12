/*
Значение выражения
Дана строка, состоящая из n цифр (т. е. однозначных чисел); между ними стоит n−1 знак операции, каждый из которых может быть либо +, либо −. Вычислите значение данного выражения.

Входные данные
На вход подаётся строка, состоящая из цифр, а также символов + и −.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
1+2-3

Вывод
0

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string expression;
    getline(cin, expression);
    int answer = 0;
    answer += expression[0] - '0';
    //cout << answer << endl;

    for (int i = 1; i < expression.length(); ++i) {
        //cout << "i" << i << endl;
        if (expression[i] == '-') {
            answer -= expression[i + 1] - '0';
        } else if (expression[i] == '+') {
            answer += expression[i + 1] - '0';
        }
        //cout << answer << endl;
    }
    cout << answer;
}

