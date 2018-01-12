#include <iostream>
#include <string>
using namespace std;

int main(){
	bool checker = true;
	int i;
	while(checker){
		cout << "Please enter an integer." << endl;
		cin >> i;
		if (cin.fail()){
			cout << "That's not an integer! Try again." << endl;
			cin.clear();
			string garbage;
			cin >> garbage;
		}
		else {
			checker = false;
		}
	}
	cout << "Your number squared is " << i * i << "." << endl;
	return 0;
}