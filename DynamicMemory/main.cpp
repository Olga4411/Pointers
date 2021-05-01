#include<iostream>
using namespace std;
#define tab "\t"
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int arr[], int& n, const int value);
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;// Размер массива
	cout << "Введите размер массива:"; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Введите добавляемое значение:"; cin >> value;
	arr=push_back(arr, n, value);
	
	Print(arr, n);
	delete[]arr;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i=0;i<n;i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
int* push_back(int arr[], int& n, const int value)
{
	//Алгорим переопределения массива
	//1) Создаем буферный размер нужного массива
	int* buffer = new int[n + 1]{};
	//2)Копируем
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)Можно удалять исходный массив, данные уже сохранены в другом месте
	delete[] arr;
	//4) Подменяем адрес старого массива адресом нового массива
	arr = buffer;
	//)И только после всего этого можно добавлять в конце массива arr появляется элемент в который можно положить значение.
	////////////////////////////////////////

	arr[n] = value;
	n++;
	return arr;
}