// sample program
#include <iostream>

using namespace std;

int main ()
{
	const double Pi = 3.14169;
	double raduis;
	double area;
	 
	cout << "Enter circle raduis: ";
	cin >> raduis;
	area = Pi * raduis * raduis;
	cout << "Area : " << area << endl;
	
	return 0;
}
