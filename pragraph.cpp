#include<iostream>
using namespace std;
int main()
{

	char str[100];
	cin.getline(str, 100, '\n');
	cout << "the original paragraph---------";
	cout << str << endl;
	cout << "the Paragraph after modification--->";
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '0') {
			cout << "zero";
		}
		else if (str[i] == '1')
		{
			cout << " one ";
		}
		else if (str[i] == '2')
		{
			cout << " two ";
		}
		else if (str[i] == '3')
		{
			cout << " thre ";
		}
		else if (str[i] == '4')
		{
			cout << " four ";
		}
		else if (str[i] == '5')
		{
			cout << " five ";
		}
		else if (str[i] == '6')
		{
			cout << "sex";
		}
		else if (str[i] == '7')
		{
			cout << " seven";
		}
		else if (str[i] == '8')
		{
			cout << " eight ";
		}
		else if (str[i] == '9')
			cout << " nine ";
		else
		{
			cout << str[i];
		}
	}
  }