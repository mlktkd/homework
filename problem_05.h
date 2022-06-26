#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

//Problem_05
//Массив arr размера size=10'001 заполнен случайными числами в пределах от -1000 до 1000. 
//Создать массивы arr1 и arr2 такого же размера каждый, заполненные нулями.
//Скопировать из arr в arr1 и arr2 :
//a) - положительные и не положительные числа соответственно
//b) - числа с нечетными и четными индексами соответственно.
//В каждом случае опрелелить к - ва скопированных чисел length1 и length2;
//Подсчитать суммы чисел в arr1 и arr2 и сравнить с суммой в arr.

void problem_05() {
  const int size = 10001;
  int arr[size];
  int arr1[size]{}, arr2[size]{};
  int min = -1000, max = 1000, length1_1 = 0, length1_2 = 0, length2_1 = 0, length2_2 = 0, sum1_1 = 0, sum1_2 = 0, sum2_1 = 0, sum2_2 = 0, sumarr = 0;
  srand(time(0));
  for (size_t i = 0; i < size; i++) {
    arr[i] = min + rand() % (max - min);
    sumarr += arr[i];
  }

  for (size_t i = 0; i < size; i++) {
    if (arr[i] > 0) {
      arr1[i] = arr[i];
      length1_1++;
      sum1_1 += arr1[i];
    } else {
      arr2[i] = arr[i];
      length1_2++;
      sum1_2 += arr2[i];
    }
  }
  cout << "а) Количество скопированных чисел в массив arr1 (положительные): " << length1_1 << "\n   Количество скопированных чисел в массив arr2 (не положительные): " << length1_2 << "\n\n   Сумма чисел массива arr : " << sumarr << "\n   Сумма чисел массива arr1 : " << sum1_1 << "\n   Сумма чисел массива arr2 : " << sum1_2;

  for (size_t i = 0; i < size; i++) {
    if (i % 2 != 0) {
      arr1[i] = arr[i];
      length2_1++;
      sum2_1 += arr1[i];
    } else {
      arr2[i] = arr[i];
      length2_2++;
      sum2_2 += arr2[i];
    }
  }
  cout << "\n\n\nb) Количество скопированных чисел в массив arr1 (с нечетным индексом): " << length2_1 << "\n   Количество скопированных чисел в массив arr2 (с четным индексом): " << length2_2 << "\n\n   Сумма чисел массива arr : " << sumarr << "\n   Сумма чисел массива arr1 : " << sum2_1 << "\n   Сумма чисел массива arr2 : " << sum2_2;
}