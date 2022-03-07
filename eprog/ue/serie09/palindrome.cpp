#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;


bool isPalindrome(string wort) {
	int länge = 0;
	länge = wort.length()-1;
	for(int i = 0;i<länge;i++) {
		if (wort[i] == wort[länge-i])
			return true;
	}
	return false;
}

int main() {

	string test = "boris";
	cout<<isPalindrome(test)<<endl;

	return 0;

}

// Test
// Anna, anna -> true
// Otto, otto -> true
// Boris, boris -> false


