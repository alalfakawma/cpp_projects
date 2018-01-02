#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

	string name;

	cout << "Enter your name" << endl;
	getline(cin, name);

	string addTab = "\t";
	int animTime = 0;

	system("clear");
	while (animTime < 10) {
		cout << name << endl;
		name.insert(0, addTab);
		usleep(500000);
		system("clear");
		animTime++;
	}

	return 0;
}