# sololearn-code-coach

## Ballpark

First, since we will be calculating tax after each cost is added up, we make a tax function with said cost and the tax percent as the parameters...
```cpp
double tax(double total, int percent) {
	
}
```
and have it return one line:
```cpp
double tax(double total, int percent) {
	return ((total * percent/100)+ total);
}
```
It will also be double, as we are calculating tax.
Now, we will start the main function. Before any functionality is coded, variables are introduced:
```cpp
double cost = 0.00;
string items[4];
string oneItem;
```
We have the cost to add up the cost of each item in the snack bar, the list of items, and the item which each friend wants from the snack bar.
The customer and their three friends give their order to the snack bar.
```cpp
	for (int i = 0; i < 4; i++) {
		cin >> oneItem;
		items[i] = oneItem;
		//cout << items[i] << endl;
	}
```
Here we have the costs of each item. If the customer or their friends want something other than what's on the menu, they just get a coke instead. 
Here is the menu:
```cpp
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
  ```
  Finally, we get the final cost of the snacks, with the tax included.
  ```cpp
  cout << fixed << std::setprecision(2)<< tax(cost, 7) << endl;
  ```
  
