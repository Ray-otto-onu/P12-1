#include <iostream>
#include <fstream>
#include<string>


using namespace std;


int count_words(string str);
int count_letters(string str);


int main() {
	cout << "Lab 12-1\n";
		int words = 0;
		int length = 0;
		string input;
		getline(cin, input);
		words = count_words(input);
		cout << "Words: " << words<<endl;
		length = count_letters(input);
		cout << "Characters: " << length;
		
		
	}

	int count_words(string str) {
		int words = 0;
		int j = str.length();

		for (int i = 0; i < j; i++) {
			if ((str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'e' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h' || str[i] == 'i' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l' || str[i] == 'm' || str[i] == 'n' || str[i] == 'o' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't' || str[i] == 'u' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z' || str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F' || str[i] == 'G' || str[i] == 'H' || str[i] == 'I' || str[i] == 'J' || str[i] == 'K' || str[i] == 'L' || str[i] == 'M' || str[i] == 'N' || str[i] == 'O' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S' || str[i] == 'T' || str[i] == 'U' || str[i] == 'V' || str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0' || str[i] == '.' || str[i] == '?' || str[i] == ',' || str[i] == '-') && str[i + 1] == ' ') {
				words++;
			}
		}
		return words + 1;
	}

	int count_letters(string str) {
		int letters = 0;
		int l = str.length();

		for (int i = 0; i < l; i++) {
			if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'e' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h' || str[i] == 'i' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l' || str[i] == 'm' || str[i] == 'n' || str[i] == 'o' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't' || str[i] == 'u' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z' || str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F' || str[i] == 'G' || str[i] == 'H' || str[i] == 'I' || str[i] == 'J' || str[i] == 'K' || str[i] == 'L' || str[i] == 'M' || str[i] == 'N' || str[i] == 'O' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S' || str[i] == 'T' || str[i] == 'U' || str[i] == 'V' || str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z' || str[i] == '.'|| str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '?'|| str[i] == ',' || str[i] == '-') {
				letters++;
			}
		}
		return letters;
	}