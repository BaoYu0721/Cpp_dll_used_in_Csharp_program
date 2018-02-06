#pragma once
#include <stdio.h>

class __declspec(dllexport) nA
{
public:
	nA() 
	{ 
		Ama = new char[30];
		int i = 0;
		for (i = 0; i < 10; i++)
			Ama[i] = 'a';
		Ama[i] = '\0';
	}
	~nA() {}
	int Afoo();
	char* Ama;
};

class __declspec(dllexport) nB
{
public:
	nB(int i) { id = i; }
	~nB() {}
	int Bfoo(nA* a, int printint, char* string, char** strs, int str_len, int* arr, int arr_len);

private:
	int id;
};