/*
На завод!
У Пети есть X граммов краски, а у Васи — Y граммов краски. Одного грамма краски хватает, чтобы покрасить плитку 1×1. На заводе есть неограниченное количество квадратных плиток любых размеров. Петя выберет максимальную плитку, на которую у него хватит краски. Вася поступит аналогично. Таня работает в плановом отделе, и в её интересах сделать так, чтобы суммарно было потрачено как можно больше краски. Поэтому Таня интересуется: а что если Петя отдаст всю свою краску Васе? Получится ли тогда потратить больше краски или нет?

В данной задаче запрещено использовать функцию sqrt, а также операцию возведения в степень.

Входные данные
В двух строках входных данных содержатся натуральные числа x и y — количество краски у Пети и Васи соответственно.

Все числа не превышают 1000.

Выходные данные
Если выгоднее будет отдать всю краску Васе, то выведите на экран "Petya gives paint to Vasya".
Если выгоднее оставить краску у Пети, то выведите на экран "Petya leaves paint to himself".
Если расход краски в обоих случаях одинаков, то выведите ";Equal";. //здесь ошибка нужно выводить "Equal"

Пояснения к тестам
В первом тесте, если Петя оставит краску у себя, то Петя и Вася смогут закрасить по плитке стороной 3 метра и потратить 18 граммов краски. Если же Петя отдаст краску Васе, то Вася закрасит плитку стороной 4 метра и потратит 16 граммов краски.
Во втором тесте независимо от стратегии Пети получится потратить 25 граммов краски.
В третьем тесте Пете выгоднее отдать краску Васе, в этом случае получится потратить 16 граммов краски (вместо 13 в противном случае).

Примеры
Ввод
10
10

Вывод
Petya leaves paint to himself

Ввод
10
20

Вывод
Equal

Ввод
10
7

Вывод
Petya gives paint to Vasya

*/

#include <iostream>
#include <string>

using namespace std;

int search_v(int n) {
    int ans = 0;
    for (int i = 0; i * i <= n; ++i) {
        ans = i;
    }
    return (ans * ans);
}

int main() {
    int x, y;
    cin >> x >> y;
    int paint_petya = search_v(x);
    int paint_vasya = search_v(y);
    int paint_together = search_v(x + y);

    if (paint_together > paint_petya + paint_vasya) {
        cout << "Petya gives paint to Vasya";
    }
    else if (paint_together < paint_petya + paint_vasya) {
        cout << "Petya leaves paint to himself";
    }
    else if (paint_together == paint_petya + paint_vasya) {
        cout << "Equal";
    }
}

