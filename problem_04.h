#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

//Problem_04
//В массиве целых чисел замените значения элементов на их квадраты, кроме первого и последнего отрицательных элементов, которые оставьте неизменными.

void problem_04() {
  const int n = 10;
  int arr1[n]{ 5, 7, -10, 34, 67, -136, 4, -78, 9, 10 };
  int arr2[n]{};

  cout << "Массив: \n";
  for (size_t i = 0; i < n; i++) {
    cout << arr1[i] << " ";
  }

  int idxFirst = -1;
  int idxLast = -1;
  for (size_t i = 0; i < n; i++) {
    if (arr1[i] < 0) {
      idxFirst = i;
      break;
    }
  }
  for (size_t i = n - 1; i >= 0; i--) {
    if (arr1[i] < 0) {
      idxLast = i;
      break;
    }
  }

  cout << "\n\nКвадраты занчений массива: \n";
  for (size_t i = 0; i < n; i++) {
    if (arr1[i] != arr1[idxFirst] && arr1[i] != arr1[idxLast]) {
      arr2[i] = arr1[i] * arr1[i];
      cout << arr2[i] << " ";
    } else {
      arr2[i] = arr1[i];
      cout << arr2[i] << " ";
    }
  }
}