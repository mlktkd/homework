#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

//Problem_06
//В массиве целых чисел найдите индексы первых четырех отрицательных чисел и сохраните их в переменных idx1, idx2, idx3 и idx4.

void problem_06() {
  const int n = 15;
  int arr[n];
  int idx1 = 0, idx2 = 0, idx3 = 0, idx4 = 0, cnt = 0;

  srand(time(0));
  cout << "Массив: \n";
  for (size_t i = 0; i < n; i++) {
    arr[i] = rand() - rand();
    cout << arr[i] << " ";
  }
  cout << "\n\n";

  for (size_t i = 0; i < n; i++) {
    if (arr[i] < 0 && cnt == 0) {
      cnt++;
      idx1 = i;
      continue;
    }
    if (arr[i] < 0 && cnt == 1) {
      cnt++;
      idx2 = i;
      continue;
    }
    if (arr[i] < 0 && cnt == 2) {
      cnt++;
      idx3 = i;
      continue;
    }
    if (arr[i] < 0 && cnt == 3) {
      cnt++;
      idx4 = i;
      break;
    }
  }
  cout << "idx1 = " << idx1 << "\nidx2 = " << idx2 << "\nidx3 = " << idx3 << "\nidx4 = " << idx4 << "\n\n";

}