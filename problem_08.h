#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//ƒан массив. ѕереписать его элементы в другой массив такого же размера следующим образом: 
//сначала должны идти все отрицательные элементы, а затем все остальные. 
//»спользовать только один проход по исходному массиву.

void problem_08() {
  const int n = 9;
  int arr1[n]{ 11, -5, 12, 85, -16, -11, 45, -53, 20 }, arr2[n]{};

  srand(time(0));
  cout << "ћассив: \n";
  for (size_t i = 0; i < n; i++) {
    cout << arr1[i] << " ";
  }
  cout << "\n\n";

  for (int i = 0; i < n - 1; i++) {
    int idxMin = i;
    int min = arr1[i];
    for (int j = i + 1; j < n; j++) {
      if (arr1[j] < min || arr1[j] < 0) {
        idxMin = j;
        min = arr2[j];
      }
    }
    if (idxMin != i) {
      int temp = arr1[i];
      arr2[i] = arr1[idxMin];
      arr1[idxMin] = temp;
    }
    cout << arr2[i] << " ";
  }
}