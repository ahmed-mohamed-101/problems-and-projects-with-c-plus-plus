// #include<iostream>
// using namespace std;

// int main() {
// 	string big_str, small_str;

// 	cin >> big_str >> small_str;

// 	if (small_str.size() > big_str.size()) {
// 		cout << "NO\n";
// 		return 0;
// 	}

// 	// Compare the begin of the small with the large
// 	for (int i = 0; i < (int) small_str.size(); i++) {
// 		if (big_str[i] != small_str[i]) {
// 			cout << "NO\n";
// 			return 0;
// 		}
// 	}
// 	cout << "YES\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// // test
// // aaa aaaaaaa	NO
// // aa AA NO

// int main() {
// 	string big_str, small_str;
// 	cin >> big_str >> small_str;

// 	if (small_str.size() > big_str.size()) {
// 		cout << "NO\n";
// 		return 0;
// 	}

// 	// Compare the end of the small with the large
// 	int big_end = (int)big_str.size()-1;
// 	int small_end = (int) small_str.size()-1;
// 	for (int i = 0; i < (int) small_str.size(); i++) {
// 		if (big_str[big_end--] != small_str[small_end--]) {
// 			cout << "NO\n";
// 			return 0;
// 		}
// 	}
// 	cout << "YES\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	string big_str, small_str;
// 	cin >> big_str >> small_str;

// 	if (small_str.size() > big_str.size()) {
// 		cout << "NO\n";
// 		return 0;
// 	}

// 	// For every possible position in big_str, try to match with the small
// 	for (int i = 0; i < (int) big_str.size() - (int) small_str.size() + 1; ++i) {
// 		bool is_match = true;

// 		for (int j = 0; j < (int) small_str.size() && is_match; ++j) {
// 			if (small_str[j] != big_str[i + j])
// 				is_match = false;
// 		}
// 		if (is_match) {
// 			cout << "YES\n";
// 			return 0;
// 		}
// 	}
// 	cout << "NO\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	string big_str, small_str;
// 	cin >> big_str >> small_str;

// 	if (small_str.size() > big_str.size()) {
// 		cout << "NO\n";
// 		return 0;
// 	}

// 	// Keep match letters in order from the big in the small
// 	int next_to_match = 0;
// 	for (int i = 0; i < (int) big_str.size(); ++i) {
// 		if (big_str[i] == small_str[next_to_match]) {
// 			++next_to_match;
// 			if (next_to_match == (int)small_str.size()) {
// 				cout << "YES\n";
// 				return 0;
// 			}
// 		}
// 	}
// 	cout << "NO\n";

// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int number = 0;
// 	string str;

// 	cin >> str;
// 	// How to convert digits 1 2 3 4 5 to 12345?
// 	// Repeat: multiply with 10 then add digit
// 	// 1 => 10 + 2 = 12 => 12 * 10 + 3 = 123 => 123 * 10 + 4 = 1234 => 1234 * 10 + 5 = 12345
// 	for (int i = 0; i < (int)str.size(); i++) {
// 		number = number * 10 + (str[i] - '0');
// 	}
// 	cout << number << " " << number * 3 << endl;
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	string str;
// 	cin >> str;

// 	for (int i = 0; i < (int) str.size(); i++) {
// 		if (i != 0 && str[i - 1] != str[i]) // new group, split by space
// 			cout <<" ";
// 		cout << str[i];
// 	}
// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	string str;
// 	cin >> str;

// 	str += "$";	// a small trick to avoid special handling for last group

// 	int group_sz = 1;	// for first letter
// 	bool is_first_group = true;	// easy mark to avoid early _

// 	for (int i = 1; i < (int) str.size(); i++) {	// start from 1
// 		if (str[i - 1] != str[i]) { // new group
// 			if (!is_first_group)
// 				cout << "_";	// split with previous group
// 			cout << str[i - 1] << group_sz;

// 			group_sz = 0;
// 			is_first_group = 0;
// 		}
// 		++group_sz;
// 	}
// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	string a, b;

// 	cin >> a >> b;

// 	int sz = a.size();

// 	if (sz < b.size())
// 		sz = b.size();

// 	int smaller = -1;

// 	for (int i = 0; smaller == -1 && i < sz; ++i) {
// 		if (a[i] != b[i]) {
// 			if (a[i] < b[i])
// 				smaller = 0;
// 			else
// 				smaller = 1;
// 		}
// 	}
// 	if (smaller == -1) { // then the first letters are common. Small in length is smaller
// 		if (a.size() <= b.size())
// 			smaller = 0;
// 		else
// 			smaller = 1;
// 	}
// 	if (smaller == 0)
// 		cout << "YES\n";
// 	else
// 		cout << "NO\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
	string num;

	// Guarantee input: must be 6 digits or more
	cin >> num;

	int sz = num.size();

	int carry = 0;
	for (int i = 0; i < sz; ++i) {
		int digit = num[sz - 1 - i] - '0';

		if (i < 4)
			digit += 5;			// add 5 in first 4 times
		digit += carry;		// add any carry

		if (digit >= 10)
			digit -= 10, carry = 1;
		else
			carry = 0;

		num[sz - 1 - i] = digit + '0';
	}
	if(carry)
		cout<<1;
	cout << num;

	return 0;
}

