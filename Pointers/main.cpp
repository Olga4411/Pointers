#include<iostream>
using namespace std;
#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS
void main()
{
	setlocale(LC_ALL, "Russian");
#ifndef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;// получаем адрем переменной прямо при выводе
	cout << pa << endl;// выводим адрес переменной, хранящийся в указателе "pa"
	cout << *pa << endl;// Разъыменоваем указатель и получаем значение по адресу
	int* pb;//прсто объявляем указатель без инициализации
	int b = 3;
	pb = &b;
	cout << *pb << endl;
#endif // !POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	//const int n= 5;
	// int arr[n] = { 3,5,8,13,21 };
	//	cout << *arr << endl;
	//	for (int i = 0; i < n; i++)
	//	{
			//cout << *(arr + i) << endl;
		//}
		//cout << endl;
#endif // POINTERS_AND_ARRAYS

	int n;
	cout << "Введите размер массива:"; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr << endl;
	}
	delete[] arr;


}
