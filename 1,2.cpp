#include <iostream>
#include <string>

bool isSubstring(std::string first, std::string second) {
	for (int i = 0; i < second.length(); i++) {
		if (second[i] == first[0]) {
			int counter = 0;
			for (int j = 0; j < first.length(); j++) {
				if (second[i] == first[j]) {
					counter++;
					i++;
					if (counter == first.length()) return true;
				}
				else {
					i--;
					break;
				}
			}
		}
	}
	return false;
}

int main() {
	std::string str1 = "Hello Peter, my name is Pablo. I am 26";
	std::string str2 = " is Pablo";

	std::cout << isSubstring(str2, str1);
}