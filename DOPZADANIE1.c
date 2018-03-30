#define _CRT_SECURE_NO_WARNINGS // для корректной работы scanf()
#include <stdio.h>
#include <stdlib.h> // для использования функций system()
int main()
{
  int k[20]; //
  int r[20]; // 
  int key, i;
  system("chcp 1251"); // перевод русского языка в консоли
  system("cls");     // очистка окна консоли
  for (i = 0; i < 20; i++) 
  {
    printf("%2d. k[%2d]=%3d: r[%2d]= ", i, i, k[i], i);
    scanf("%d", &r[i]);
  }
  printf("Введите key: "); 
  scanf("%d", &key);
  int left = 0; // задаем левую и правую границы поиска
  int right = 19;
  int search = -1; // элемент не найден
  while (left <= right) 
  {
    int mid = (left + right) / 2; // ищем середину отрезка
    if (key == k[mid]) {  // если ключевое поле равно искомому
      search = mid;     // мы нашли требуемый элемент,
      break;            // выходим из цикла
    }
    if (key < k[mid])     // если искомое ключевое поле меньше найденной середины
      right = mid - 1;  // смещаем правую границу, продолжим поиск в левой части
    else                  // иначе
      left = mid + 1;   // смещаем левую границу, продолжим поиск в правой части
  }
  if (search == -1)     // если индекс элемента по-прежнему -1, элемент не найден
    printf("Элемент не найден!\n");
  else          // иначе выводим элемент, его ключ и значение
    printf("%d. key= %d. r[%d]=%d", search, k[search], search, r[search]);
  getchar(); getchar(); // считывает символы
  return 0;
}