#include <iostream>
#include <iomanip>
using namespace std;

double tax(double total, int percent) {
	return ((total * percent/100)+ total);
}

int main() {
	double cost = 0.00;
	string items[4];
	string oneItem;
	for (int i = 0; i < 4; i++) {
		cin >> oneItem;
		items[i] = oneItem;
		//cout << items[i] << endl;
	}
	for (int i = 0; i < 4; i++) {
		if (items[i]== "Nachos" || items[i]== "Pizza") {
			cost += 6.00;
		}
		else if (items[i]== "Cheeseburger") {
			cost += 10.00;
		}
		else if (items[i]== "Water") {
			cost += 4.00;
		}
		else if (items[i]== "Coke") {
			cost += 5.00;
		}
		else {
			cost += 5.00;
		}
	}
	//for (int i = 0; i < 4; i++) {
		//cout << items[i] << endl;
	//}
	//cout << "so cost is " << cost << endl;
	cout << fixed << std::setprecision(2)<< tax(cost, 7) << endl;
	

	return 0;
}