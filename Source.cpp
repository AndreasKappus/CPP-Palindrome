#include<iostream>

using namespace std;

int main() {

	char string1[20];
	int length;
	bool flag = false;


	cout << "Enter string: ";
	cin >> string1;

	length = strlen(string1);

	for (int i = 0; i < length; i++) {
		if (string1[i] != string1[length - i - 1]) {
			flag = true;
			break;
		}
	}

	if (flag) {
		cout << string1 << " is not a palindrome!" << endl;
	}
	else {
		cout << string1 << " is a palindrome!" << endl;
	}
	return 0;
}