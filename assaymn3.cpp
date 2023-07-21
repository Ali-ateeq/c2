#include <iostream>
using namespace std;

void o(char m[]) {

	int i = 0;

	if (m[0] >= 'a' && m[0] <= 'z')
		m[0] -= 32;


}


void zk(char m[]) {

	o(m);

	for (int i = 0; m[i]; i++)
		if (m[i] == '.' || m[i] == '!' || m[i] == '?') {

			if (m[i + 1] >= 'a' && m[i + 1] <= 'z')
				m[i + 1] -= 32;

		}
	cout << m;

}




void jk(char m[]) {
	int i = 1;
	o(m);
	for (; m[i]; i++)
		if (m[i] == ' ') {

			if (m[i + 1] >= 'a' && m[i + 1] <= 'z') {

				m[i + 1] -= 32;

			}
		}

	cout << m;

}



void cabtl(char m[])
{
	o(m);
	int i = 1;
	for (; m[i]; i++)
		if (m[i] >= 'a' && m[i] <= 'z') {

			m[i] -= 32;


		}

	cout << m;

}


int main()
{

	cout << "Enter your text and perform some operations on it" << endl;
	char a[100];
	gets_s(a);

	cout << " Enter  u   For example My name is Ahmed => MY NAME IS AHMED" << endl;
	cout << " Enter  w   For example  My name is Ahmed => My Name Is Ahmed." << endl;
	cout << "should be the originalparagraph with the first letter of each sentence" << endl;
	cout << " Enter  s  For example My name is Ahmed.bab => For example My name is Ahmed.Bab " << endl;

	char k;
	cin >> k;

	switch (k)
	{
	case 'u':
		cabtl(a);

		break;

	case  'w':

		jk(a);

		break;

	case's':
		zk(a);
		break;

	default:

		cout << "=======Erorr===========";
		return 0;

	}


}
