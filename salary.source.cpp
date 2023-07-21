#include <iostream>
using namespace std;
//funcyion to add the salesmen.
void Add(int* id, int* sal, int * ph, int& num)
{
	if (num > 20)
		cout << "Sorry, the company has enough salesmen at the current time, if you want to salesman you should delete one firs\n ";

	else
	{
		cout << "enter the sales man id : ";
		cin >> id[num];
		cout << "enter the sales man salary:  ";
		cin >> sal[num];
		cout << "enter the sales phonenumber:  ";
		cin >> ph[num];
		num++;
		cout << "proces compleated <DONE> \n";

	}
}

// function dleate the salesmen. 
void Dleated(int* id, int* sal, int* ph, int& num)
{
	int m = 0, j;
	cin >> j;
	for (; m < 20; m++) {
		if (j == id[m]) {
			int i = 0;
			for (; i < m; i++)
				if (j = id[i])
					for (i = m; id[i]; i++) {
						id[i] = id[i + 1];
						sal[i] = sal[i + 1];
						ph[i] = ph[i + 1];
					}
		}break;
	}

}
//function search of the salesmen
void  search(int *id, int* sal, int* ph) {

	
    int x;
	cout << "please inter the ID";
    cin >> x;
    for (int i = 0; i < 20; i++) {

        if (id[i] == x) {

			cout << "id---->  " << id[i] << endl;
            cout << "salary---->  " <<  sal[i] << endl;
            cout << "phone_number--->  " <<  ph[i] << endl;
        }

    }
}

int main()
{
	int num = 3;
	int id[20] = { 11,12,30 };
	int sal[20] = { 100,150,250 };
	int ph[20] = { 2388888 ,2388888 ,2388888 };
	int i;
	do {
		cout << "1.add a salesman\n" << "2.delated a salesmen\n" << "3. search for \n" <<"4.exist\n" << endl;
		cout << "plaese inter choice into the menuo : ";
		cin >> i;
		switch (i)
		{
		case 1:Add(id, sal, ph, num); break;
		case 2: Dleated(id, sal, ph, num); break;
		case 3 :search(id, sal, ph); break;
		case 4: cout << "exist "; break;
		}
	} while (i != 4);
		return 0;
}



