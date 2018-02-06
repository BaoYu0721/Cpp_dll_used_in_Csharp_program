// ClassLibrary_sampleDLL.h

#pragma once

#include "../sampleDLL/sampleDLL.h"
using namespace System;

namespace ClassLibrary_sampleDLL {

	public ref class mA
	{
	private:
		nA* aptr;

	public:
		mA() { aptr = new nA(); }
		~mA() { delete aptr;  }
		nA* getA() { return aptr;  }
	};

	public ref class mB
	{
	public:
		mB(int i) { bptr = new nB(i);  }
		~mB() { delete bptr;  }
		int mBfoo(mA^ a, int printint, String^ s, array<String^> ^strs, int str_len, array<int>^ arr, int arr_len)
		{
			cli::array<wchar_t, 1> ^ temp_s = s->ToCharArray();
			const int s_len = temp_s->Length;
			char* string = new char[s_len + 1];
			int i = 0;
			for (i = 0; i < s_len; i++)
			{
				string[i] = static_cast<char>(temp_s[i]);
			}
			string[i] = '\0';

			char** strings = new char*[str_len];
			for (i = 0; i < str_len; i++)
			{
				cli::array<wchar_t, 1> ^ temp = strs[i]->ToCharArray();
				const int temp_len = temp->Length;
				strings[i] = new char[temp_len + 1];
				for (int j = 0; j < temp_len; j++)
				{
					strings[i][j] = static_cast<char>(temp[j]);
				}
				strings[i][temp_len] = '\0';
			}

			int* arr_c = new int[arr_len];
			for (i = 0; i < arr_len; i++)
			{
				arr_c[i] = arr[i];
			}

			return bptr->Bfoo(a->getA(), printint, string, strings, str_len, arr_c, arr_len);
		}

	private:
		nB* bptr;
	};
}
