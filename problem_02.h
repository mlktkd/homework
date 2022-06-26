#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

//Problem_02
//�������� ���������, ������� ������������ �������� �������� ������� ���� � ������(1 � 2, 3 � 4 � �.�.).
//���� ������ ����� �������� ���������� ���������, �� ��������� ������� �� �������������.

void problem_02() {
  const int n = 9;
  int arr[n]{ 11, 5, 12, 85, 16, 11, 45, 53, 20 };

  cout << "����� ������: \n";
  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  for (size_t i = 0, j = 1; i < n && j < n; i += 2, j += 2) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  cout << "\n\n��������� ������������ ��������� �������: \n";
  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}