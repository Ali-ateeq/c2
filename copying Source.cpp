#include<iostream>

using namespace std;

void copy(char*, const char*);
void copy2(char*, const char*);

void main()
{
	char str1[10], str2[] = "hello", str3[10], str4[] = "Good Bye";
	copy(str1, str2);
	copy2(str3, str4);
	cout << str1 << endl << str2 << endl << str3 << endl << str4 << endl;
}

void copy(char* s1, const char* s2)
{
	for (int i = 0; (s1[i] = s2[i]) != NULL; i++);

}

void copy2(char* s1, const char* s2)
{

	for (; (*s1 = *s2) != NULL; s1++, s2++);

}
