#include <iostream>
using namespace std;

int main(){
	cout << "Please enter an integer." << endl;
	bool checker = true;
	int i;
	while(checker){
		cin >> i;
		if (cin.fail()){
			cout << "That's not an integer! Try again." << endl;
		}
		else {
			checker = false;
		}
	}
	cout << "Your number squared is " << i * i << "." << endl;
	return 0;
}