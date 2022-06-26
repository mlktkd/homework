#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

//Problem_07
//�������� ������ arrTemp �������� size = 100 ��� �������� ������� ������� �����������.
//�������� ������ arrIsRainy ���� bool ������ �� ������� ��� �������� ������ ��������� �������.
//��������� �� ��������� ���������� ����������.
//����������� ������� ����������� ��� ���� � �������� � ��� �������.
//������������� - ����������, ����� ���� ��� ������� ���� � 4 ���� ������ ��� � ��������!

void problem_07() {
  const int size = 100;
  int arrTemp[size];
  bool arrIsRainy[size];
  int min = 10, max = 26, sumTempRainy = 0, sumTempNotRainy = 0, cntRainy = 0, cntNotRainy = 0, tempRainy, tempNotRainy;
  srand(time(0));
  for (size_t i = 0; i < size; i++) {
    arrTemp[i] = min + rand() % (max - min);
    arrIsRainy[i] = rand() % 5 == 0;
    cout << i << ".  �����������: " << arrTemp[i] << " ��������; ������ - " << (arrIsRainy[i] ? "����\n" : "���\n");
    if (arrIsRainy[i] == true) {
      sumTempRainy += arrTemp[i];
      cntRainy++;
    } else {
      sumTempNotRainy += arrTemp[i];
      cntNotRainy++;
    }
  }
  tempRainy = sumTempRainy / cntRainy;
  tempNotRainy = sumTempNotRainy / cntNotRainy;
  cout << "\n������� ����������� ��� ���� � ��������: " << tempRainy << " ��������.\n������� ����������� ��� ���� ��� �������: " << tempNotRainy << " ��������.";
}