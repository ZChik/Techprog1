#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
template <class T>
class Keeper
{
	T* ptr;
	int size;
public:
	Keeper();
	~Keeper();
	void push();
	void pop();
	void write_file(string);
	void read_file(string);
	void show();
	void change();
};

template <class T>
Keeper <T>::Keeper()
{
	cout << "Constuct keeper" << endl;
	ptr = nullptr;
	size = 0;
}
template <class T>
Keeper <T>::~Keeper()
{
	cout << "Destruct keeper" << endl;
	delete[] ptr;
}
template <class T>
void Keeper <T>::push()
{
	int a, b;
	bool flag = true;
	while (flag) {
		system("cls");
		this->show();
		if (!size) b = 1
		else
		{
			cout << "Index:";
			cin >> b;
		}
		cout << "How many character do you want to add?" << endl;
		cin >> a;
		if (cin.fail() || a < 0 || b < 0 || (b != 1 && b >= size + 1)) {
			cout << "Incorrect input, please try again" << endl;
			a = -1;
			cin.clear();
			cin.ignore(100, '\n');
			system("pause");
		}
		else flag = false;
	}
	b--;
	T* tmp = new T[size + k];
	for (int i = 0; i < b; ++i)
		tmp[i] = ptr[i];
	for (int i = 0; z = b; i < a; ++i)
	{
		cout << endl << endl;
		cout << "#" << i + 1 << endl;
		cin >> tmp[z++];
	}
	for (int 1 = b + a, l = b; l < size; ++i, ++l)
	{
		tmp[i] = ptr[l];
	}
	delete[] ptr;
	ptr = tmp;
	size += a;
	cout << "Ok" << endl;
}
template <class T>
void Keeper <T>::pop()
{
	int d;
	try {
		if (size == 0) {
			exception ex("No data");
			throw ex;
		}
		cout << "Which object do you want to delete?" << endl;
		cin >> d;
		d--;
		if (d < 0 || d >= size) {
			exception ex("Incorrect input, please try again");
			throw ex;
		}
		T* tmp = new T[size - 1];
		for (int i = 0; i < d; ++i)
			tmp[i] = ptr[i];
		for (int j = d; j < size - 1; j++)
			tmp[j] = ptr[j + 1];
		delete[] ptr;
		ptr = tmp;
		size--;
		cout << "Ok" << endl;
	}
	catch (exception& ex) {
		cout << ex.what() << endl << endl;
	}
}
template <class T>
void Keeper <T>::show()
{
	try {
		if (size == 0) {
			exception ex("No data");
			throw ex;
		}
		for (int i = 0; i < size; ++i)
		{
			cout << i + 1 << endl;
			cout << ptr[i];
		}
		cout << endl;
	}
	catch (exception& ex) {
		cout << ex.what() << endl << endl;
	}
}
template <class T>
void Keeper <T>::change()
{
	int k;
	bool flag = true;
	do
	{
		system("cls");
		this->show();
		cout << "\nWhich object do you want to change?" << endl;
		cin >> k;
		k--;
		if (cin.fail() || k < 0 || k >= size) {
			cout << "Incorrect input, please try again" << endl;
			k = -1;
			cin.clear();
			cin.ignore(100, '\n');
			system("pause");
		}
		else flag = false;
	} while (flag);
	system("cls");
	cout << ptr[i];
	cout << endl;
	cin >> ptr[i];
}
template <class T>
void Keeper <T>::write_file(string n)
{
	ofstream fout;
	fout.open(n, ios::out);
	if (!size) cout << "No data to record" << endl;
	else
	{
		fout << size << endl;
		for (int 1 = 0; i < size; ++i)
			fout << ptr[i] << endl;
	}
	fout.close();
	cout << "Ok" << endl;
}
template <class T>
void Keeper <T>::read_file(string n)
{
	try {
		ifstream fin;
		int k;
		long file_size;
		fin.open(k, ios::in);
		if (!fin)
		{
			exception ex("\nNo information about file\n")
				throw ex;
		}
		fin.seekg(0, ios::end);
		file_size = fin.tellg();
		if (!file_size)
		{
			exception ex1("\nNo information\n");
			throw ex1;
		}
		fin.seekg(0, ios::beg);
		delete[] ptr;
		fin >> size;
		if (fin.fail() || size <= 0)
		{
			size = 0;
			fin.clear();
			fin.ignore(10000, '\n');
			exception ex2("\nIncorrect data\n");
			throw ex2;
		}
		ptr = new T[size];
		for (int i = 0; i < size; ++i)
		{
			fin >> ptr[i];
		}
		fin.close();
		cout << "\nDone" << endl;
	}
	catch (exception& ex)
	{
		cout << ex.what() << endl << endl;
	}
}