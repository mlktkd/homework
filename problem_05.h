#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

//Problem_05
//������ arr ������� size=10'001 �������� ���������� ������� � �������� �� -1000 �� 1000. 
//������� ������� arr1 � arr2 ������ �� ������� ������, ����������� ������.
//����������� �� arr � arr1 � arr2 :
//a) - ������������� � �� ������������� ����� ��������������
//b) - ����� � ��������� � ������� ��������� ��������������.
//� ������ ������ ���������� � - �� ������������� ����� length1 � length2;
//���������� ����� ����� � arr1 � arr2 � �������� � ������ � arr.

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
  cout << "�) ���������� ������������� ����� � ������ arr1 (�������������): " << length1_1 << "\n   ���������� ������������� ����� � ������ arr2 (�� �������������): " << length1_2 << "\n\n   ����� ����� ������� arr : " << sumarr << "\n   ����� ����� ������� arr1 : " << sum1_1 << "\n   ����� ����� ������� arr2 : " << sum1_2;

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
  cout << "\n\n\nb) ���������� ������������� ����� � ������ arr1 (� �������� ��������): " << length2_1 << "\n   ���������� ������������� ����� � ������ arr2 (� ������ ��������): " << length2_2 << "\n\n   ����� ����� ������� arr : " << sumarr << "\n   ����� ����� ������� arr1 : " << sum2_1 << "\n   ����� ����� ������� arr2 : " << sum2_2;
}