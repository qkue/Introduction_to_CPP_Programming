/*
Поменять местами две диагонали
Дан квадратный массив. Поменяйте местами в каждом столбце элементы, стоящие на главной и побочной диагоналях.

Входные данные
В первой строке дано число n⩽10. Далее идут n строк по n неотрицательных целых чисел не больше 100.

Выходные данные
Выведите ответ к задаче.

Примеры
Ввод
3
1 2 3
4 5 6
7 8 9

Вывод
7 2 9 
4 5 6 
1 8 3 

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <vector <int>> numbers(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        swap(numbers[i][i], numbers[n - 1 - i][i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
}
