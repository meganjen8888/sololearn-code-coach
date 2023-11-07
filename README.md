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
  
## Military Time

Analysis coming soon...
code below
```python
time=input()
hourandminute=time.split(':')
hour=int(hourandminute[0])
if 'PM' in time and hour >= 1:
	hour=hour+12
if hour < 10:
	finalhour = '0'+ str(hour)
else:
	finalhour=str(hour)
print (finalhour+':'+hourandminute[1][0:2])
```

## New Drivers' License

```c++
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {
	string selectedName;
	int numberOfAgents;
	string queue[5];
	string temp;
	int posofselectedName;
	double x;
	int n;
	int final = 0;
	cin >> selectedName;
	queue[0] = selectedName;
	cin >> numberOfAgents;
	for (int i =1; i <= 4; i++) {
		cin >> queue[i];
	}
	for (int i = 0; i <5; ++i) {
		for (int j=i+1; j<5; ++j) {
			if (queue[i]>queue[j]) {
				temp =queue[i];
				queue[i]=queue[j];
				queue[j]=temp;
			}
		}
	}
	/*cout << "the name is "<< selectedName << endl;
cout << "there are "<< numberOfAgents << "agents" << endl;

for (int i = 0; i<5; i++) {
	cout << "the other people are " << queue[i] << endl;
}*/
n=sizeof(queue)/sizeof(queue[0]);
//cout << n;
posofselectedName=0;
while (posofselectedName < n) {
	if (queue[posofselectedName]==selectedName) {
	break;
}
posofselectedName++;
}
//cout << posofselectedName << endl;
posofselectedName=posofselectedName+1;
//cout << posofselectedName << endl;
//cout << numberOfAgents << endl;
x = (double)posofselectedName/(double)numberOfAgents;
cout << ceil(x)*20 << endl;
//cout << final
return 0;
}
```

## Deja Vu

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
int flag=0;
	string word;
	vector <char> wordletters;
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
	//cout << word.at(i) << endl;
	wordletters.push_back(word.at(i));
}
sort(wordletters.begin(), wordletters.end());
//cout <<wordletters.at(0);
for (int i = 0; i < word.length()-1; i++) {
	if (wordletters.at(i) == wordletters.at(i+1)) {
	flag=1;
}
}
if (flag==1) {
	cout << "Deja Vu";
}
else {
	
cout << "Unique";
}
		return 0;
}
```