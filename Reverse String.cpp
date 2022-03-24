#include<iostream>
#include<string>

using namespace std;


string reverse(string s) {
	string word = "";
	string newString = "";
	
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == ' ' || i == s.length() - 1) {
			if(i == s.length() - 1) {
				word += s[i];
			}
			newString = word + " " + newString;
			word = "";
		}

		else {
			word += s[i];	
		}

	}
	cout << newString;
	return newString;
}


int main() {
	string s = "This is a test of the reverse function";
	reverse(s);
	return 0;
}
