#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Problem_03
//В одномерном массиве, состоящем из n вещественных чисел вычислить :
// - Сумму отрицательных элементов.
// - Произведение элементов, находящихся между элементами с индексами idx1 и idx2.
// - Произведение элементов с четными номерами.
// - Сумму элементов, находящихся между первым и последним отрицательными элементами.

void problem_03() {
  const int n = 10;
  double arr[n];
  int cnt = 0;
  double sum1 = 0, sum2 = 0, idx1, idx2, mult1 = 1, mult2 = 1;
  srand(time(0));

  cout << "Введите idx1: ";
  cin >> idx1;
  cout << "Введите idx2: ";
  cin >> idx2;

  cout << "\nМассив: \n";
  cout << fixed;
  cout << setprecision(4);
  for (size_t i = 0; i < n; i++) {
    arr[i] = (double)rand() / RAND_MAX * (rand() - rand());
    cout << i << ") " << arr[i] << " \t";
    cnt++;
    if (cnt % 5 == 0) {
      cout << "\n";
    }
  }

  // Нахождение первого и последнего отрицательного элемента
  int idxFirst = -1;
  int idxLast = -1;
  for (size_t i = 0; i < n; i++) {
    if (arr[i] < 0) {
      idxFirst = i;
      break;
    }
  }
  for (size_t i = n - 1; i >= 0; i--) {
    if (arr[i] < 0) {
      idxLast = i;
      break;
    }
  }
  for (size_t i = 0; i < n; i++) {
    if (arr[i] < 0) {
      sum1 += arr[i];
    }
    if (i > idx1 && i < idx2) {
      mult1 *= arr[i];
    }
    if (i % 2 == 0) {
      mult2 *= arr[i];
    }
    if (i > idxFirst && i < idxLast) {
      sum2 += arr[i];
    }
  }
  cout << fixed;
  cout << setprecision(4);
  cout << "\n\n1) Сумма отрицательных элементов: " << sum1 << "\n2) Произведение элементов, находящиеся между элементами с индексами idx1 и idx2: " << mult1 << "\n3) Произведение элементов с четными номерами: " << mult2 << "\n4)Сумма элементов, находящиеся между первым и последним отрицательными элементами: " << sum2;
}