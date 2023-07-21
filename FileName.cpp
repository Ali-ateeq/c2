#include <iostream>
using namespace std;

struct car
{
	char brand[10];
	char model[10];
	int year;
};



int main() {
	car Car1 = { ' bmw','x5',2000 };
	car Car2 = { 'ford','must',1950 };


	car* p,s;
	p = &s;
	cin >> Car1.brand;
	cin >> Car1.model;
	cin >> Car1.year;
	
	/*cout << Car1.brand << Car1.model << Car1.year;
	cout << Car2.brand << Car2.model <<  Car2.year;
	*/
	cout << Car1.brand<< Car1.model<< Car1.year;


	cout << Car2.brand<<  Car2.model<< Car2.year;;
	
	return 0;

}