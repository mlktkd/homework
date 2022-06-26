#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Problem_03
//� ���������� �������, ��������� �� n ������������ ����� ��������� :
// - ����� ������������� ���������.
// - ������������ ���������, ����������� ����� ���������� � ��������� idx1 � idx2.
// - ������������ ��������� � ������� ��������.
// - ����� ���������, ����������� ����� ������ � ��������� �������������� ����������.

void problem_03() {
  const int n = 10;
  double arr[n];
  int cnt = 0;
  double sum1 = 0, sum2 = 0, idx1, idx2, mult1 = 1, mult2 = 1;
  srand(time(0));

  cout << "������� idx1: ";
  cin >> idx1;
  cout << "������� idx2: ";
  cin >> idx2;

  cout << "\n������: \n";
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

  // ���������� ������� � ���������� �������������� ��������
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
  cout << "\n\n1) ����� ������������� ���������: " << sum1 << "\n2) ������������ ���������, ����������� ����� ���������� � ��������� idx1 � idx2: " << mult1 << "\n3) ������������ ��������� � ������� ��������: " << mult2 << "\n4)����� ���������, ����������� ����� ������ � ��������� �������������� ����������: " << sum2;
}