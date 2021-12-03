#include "pch.h"
#include <string>

int f7(std::string text) {

	int m = 0;

	for (int i = 0, j = text.length() - 1; i < text.length() / 2; i++, j--) {
		if (text[i] == text[j]) {
			m++;
		}
		if (text[i] == text[i + 1]) {
			m++;
		}
	}

	if (m == text.length() / 2) {
		return text.length() - 1;
	}
	else if (m == text.length()) {
		return -1;
	}
	else {
		return text.length();
	}
}

int f8(std::string s, std::string t) {
	int n, m = 1;
	int j = 1, p = -1;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == t[0]) {
			p = i;
			break;
		}
	}

	for (int i = 0; i < t.length() - 1; i++) {
		if (s[p + 1] == t[j]) {
			p++;
			j++;
		}
		else break;
	}

	if (j != t.length()) {
		for (int i = 0; i < t.length() - 1; i++) {
			if (j < t.length() && p > 0 && (s[p - 1] == t[j])) {
				j++;
				p--;
			}
			else break;
		}
	}

	if (j == t.length()) {
		return 1;
	}
	else {
		return 0;
	}

	return 0;
}

bool isLetterReapiting(const char& letter, const std::string& word) {
	for (int i = 0; i < word.length(); i++)
	{
		if (letter == word[i])
			return true;
	}
	return false;
}

long long factorial(int a) {
	if (a == 1)
		return 1;
	return a * factorial(a - 1);
}

int f6(std::string text) {
	const int size = 4;
	int* letter = new int[size];
	for (short i = 0; text[i] != '\0'; ++i) {
		int counter = 0;
		for (short j = i; text[j] != '\0'; ++j)
			if (text[i] == text[j]) ++counter;
		letter[i] = counter;
	}
	long long a = factorial(size);
	long long b = 1;
	for (short i = 0; i < size; ++i) {
		if (letter[i] == 1) continue;
		b *= factorial(letter[i]);
	}
	long long answer = a / b;
	return answer;
}

int f5(int L, int m, std::string s1, std::string s2) {
	int  indexFirstPref = 0, indexSecondPref = 0, amount = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == s2[indexFirstPref]) {
			for (int j = i; j < s1.length(); j++)
			{
				if (s1[j] == s2[indexFirstPref])
				{
					++indexFirstPref;
				}
				else {
					indexFirstPref = 0;
					break;
				}
			}

		}
	}

	int length = L - (s1.length() + s2.length() - indexFirstPref);
	if (length > 0)
		amount = pow(26, length) * 2;
	else if (length == 0)
		amount = 1;
	else
		amount = 0;
	return amount % m;
}

//task5
TEST(test1, task5) {
	std::string s1 = "cup", s2 = "russia";

	EXPECT_EQ(752, f5(14, 1000, s1, s2));
	EXPECT_TRUE(true);
}

//task6
TEST(test1, task6) {
	std::string text = "SOLO";

	EXPECT_EQ(12, f6(text));
	EXPECT_TRUE(true);
}

//task7
TEST(test1, task7) {
	std::string text = "aba";

	EXPECT_EQ(2, f7(text));
	EXPECT_TRUE(true);
}

//task8
TEST(test1, task8) {
	std::string s = "aaa", t = "aaaaa";

	EXPECT_EQ(1, f8(s, t));
	EXPECT_TRUE(true);
}

TEST(test2, task8) {
	std::string s = "ba" , t = "bba";

	EXPECT_EQ(0, f8(s, t));
	EXPECT_TRUE(true);
}
