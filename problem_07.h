#pragma once
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

//Problem_07
//Создайте массив arrTemp размером size = 100 для хранения средней дневной температуры.
//Создайте массив arrIsRainy типа bool такого же размера для фиксации фактов выпадения осадков.
//Заполните их разумными случайными значениями.
//Рассчитайте средние температуры для дней с осадками и без осадков.
//Дополнительно - обеспечьте, чтобы дней без осадков было в 4 раза больше чем с осадками!

void problem_07() {
  const int size = 100;
  int arrTemp[size];
  bool arrIsRainy[size];
  int min = 10, max = 26, sumTempRainy = 0, sumTempNotRainy = 0, cntRainy = 0, cntNotRainy = 0, tempRainy, tempNotRainy;
  srand(time(0));
  for (size_t i = 0; i < size; i++) {
    arrTemp[i] = min + rand() % (max - min);
    arrIsRainy[i] = rand() % 5 == 0;
    cout << i << ".  температура: " << arrTemp[i] << " градусов; осадки - " << (arrIsRainy[i] ? "есть\n" : "нет\n");
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
  cout << "\nСредняя температура для дней с осадками: " << tempRainy << " градусов.\nСредняя температура для дней без осадков: " << tempNotRainy << " градусов.";
}