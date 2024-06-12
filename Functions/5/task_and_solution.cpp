/*
Простые числа
Выведите в порядке возрастания все простые числа на отрезке [l;r]. Оформите решение в виде функции bool isPrime(int n), проверяющей число на простоту, и функции vector<int> primes(int l, int r), возвращающей список простых чисел на отрезке [l;r].

Входные данные
Даны два натуральных числа l и r (l⩽r⩽1000).

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
5 20

Вывод
5 7 11 13 17 19 

*/

/* левое значение может быть меньше 2, а единица не является простым числом */
{
  for (int j = 2; j * j <= n; ++j) {
    if (n % j == 0) {
      return false;
    }
  }
  return true;
}

vector<int> primes(int left, int right) {
  vector <int> nums;
  if (left < 2) {
    left = 2;
  }
  for (int i = left; i <= right; ++i) {
    if (isPrime(i)) {
      nums.push_back(i);
    }
  }
  return nums;
}