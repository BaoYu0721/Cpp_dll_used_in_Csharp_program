#include "sampleDLL.h"

int nA::Afoo()
{
	printf_s("in nA::Afoo!\n");
	return 3;
}

int nB::Bfoo(nA* a, int printint, char* string, char** strs, int str_len, int* arr, int arr_len)
{
	printf_s("[in nB]: member is %s\n", a->Ama);
	printf_s("[in nB]: printint is %d\n", printint);
	printf_s("[in nB]: string is %s\n\n", string);
	int i = 0;
	printf_s("[in nB]: The following are strings\n");
	for (i = 0; i < str_len; i++)
	{
		printf_s("%s\n", strs[i]);
	}
	printf_s("\n\n[in nB]: Array contents:");
	for (i = 0; i < arr_len; i++)
	{
		printf_s("%d ", arr[i]);
	}
	printf_s("\n\n");
	return id;
}