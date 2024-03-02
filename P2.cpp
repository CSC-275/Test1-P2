#include <iostream>
#include <vector>
using namespace std;

struct Car{
    string make;
    string model;
    int year;
    string color;
};

int main() {
    vector<Car> collection; // declaration for collection vector of Car objects
	// solution code goes here
	
	

	// code to display content of collection vector
    cout << "\n         CAR COLLECTION\n\n";
    cout << "Year     Make     Model     Color\n";
    cout << "---------------------------------\n";
    for (auto item:collection) {
        cout.setf(ios::left);
        cout.width(9);
        cout << item.year;
        cout.setf(ios::left);
        cout.width(9);
        cout << item.make;
        cout.setf(ios::left);
        cout.width(10);
        cout << item.model;
        cout.setf(ios::left);
        cout.width(10);
        cout << item.color << endl;
    }
    cout << endl;
    return 0;
}
