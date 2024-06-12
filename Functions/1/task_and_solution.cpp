/*
Треугольник
Вам даны 4 отрезка. Выведите YES, если среди них найдутся 3, из которых можно составить треугольник, и NO в противном случае.

Для решения напишите функцию triangle(int a, int b, int c), которая будет возвращать true, если из трёх заданных отрезков можно составить треугольник, и false иначе.

Примеры
Ввод
1
2
3
4

Вывод
YES

Ввод
1
2
3
8

Вывод
NO

*/

if (a < (b + c) && b < (a + c) && c < (a + b)) {
  return true;
} else {
  return false;
}