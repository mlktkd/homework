#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

//Problem_02
//Напишите программу, которая переставляет соседние элементы массива друг с другом(1 с 2, 3 с 4 и т.д.).
//Если массив имеет нечетное количество элементов, то последний элемент не затрагивается.

void problem_02() {
  const int n = 9;
  int arr[n]{ 11, 5, 12, 85, 16, 11, 45, 53, 20 };

  cout << "Задан массив: \n";
  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  for (size_t i = 0, j = 1; i < n && j < n; i += 2, j += 2) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  cout << "\n\nРезультат перестановки элементов массива: \n";
  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}