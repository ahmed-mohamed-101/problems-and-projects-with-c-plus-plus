// #include<iostream>
// using namespace std;

// int max(int a, int b, int c) {
// 	return max(a, max(b, c));
// }

// int max(int a, int b, int c, int d) {
// 	return max(a, max(b, c, d));
// }
// int max(int a, int b, int c, int d, int e) {
// 	return max(a, max(b, c, d, e));
// }
// int max(int a, int b, int c, int d, int e, int f) {
// 	return max(max(a, b, c, d, e), f);
// 	//return max(a, max(b, c, d, e, f));	// or this way
// }

// int main() {
// 	cout<<max(1, 2, 3, 4, 5, 6);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// string reverse_str(const string & str)
// {
// 	string ret = str;
// 	int st = 0, en = (int)str.size()-1;
// 	while(st < en) {
// 		// swap
// 		char tmp = ret[en];
// 		ret[en] = ret[st];
// 		ret[st] = tmp;

// 		st++, en--;
// 	}
// 	return ret;
// }

// int main() {
// 	cout<<reverse_str("")<<"\n";
// 	cout<<reverse_str("abcd")<<"\n";
// 	cout<<reverse_str("abcde")<<"\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int menu() {
// 	int choice = -1;
// 	while (choice == -1) {
// 		if (true) {
// 			cout << "\nMenu;\n";
// 			cout << "1) Add 2 numbers\n";
// 			cout << "2) Subtract 2 numbers\n";
// 			cout << "3) Multiply 2 numbers\n";
// 			cout << "4) Divide 2 numbers\n";
// 			cout << "5) Exit\n";
// 		}

// 		cout << "\nEnter your menu choice [1 - 5]: ";
// 		cin >> choice;

// 		if (!(1 <= choice && choice <= 5)) {
// 			cout << "Invalid choice. Try again\n";
// 			choice = -1;	// loop keep working
// 		}
// 	}
// 	return choice;
// }

// void read_2_num(double &a, double &b) {
// 	cout << "Enter 2 numbers: ";
// 	cin >> a >> b;
// }

// void add(double a, double b) {
// 	cout << "a + b = " << a + b << "\n";
// }

// void subtract(double a, double b) {
// 	cout << "a - b = " << a - b << "\n";
// }

// void multiply(double a, double b) {
// 	cout << "a * b = " << a * b << "\n";
// }

// void divide(double a, double b) {
// 	if (b != 0)
// 		cout << "a / b = " << a / b << "\n";
// 	else
// 		cout << "can't divide by zero\n";
// }

// int main() {
// 	int total_operations = 0;
// 	double a, b;

// 	while (true) {
// 		int choice = menu();

// 		if (choice == 5)
// 			break;

// 		total_operations++;

// 		read_2_num(a, b);

// 		if (choice == 1)
// 			add(a, b);
// 		else if (choice == 2)
// 			subtract(a, b);
// 		else if (choice == 3)
// 			multiply(a, b);
// 		else if (choice == 4)
// 			divide(a, b);
// 	}
// 	cout << "Total operations: " << total_operations;

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int read_array(int arr[]) {
// 	int len;
// 	cin >> len;
// 	for (int i = 0; i < len; ++i)
// 		cin >> arr[i];

// 	return len;
// }

// bool is_palindrome(int arr[], int n) {
// 	int st = 0, en = n - 1;
// 	while (st < en) {
// 		if (arr[st] != arr[en])
// 			return false;
// 		st++, en--;
// 	}
// 	return true;
// }

// int main() {
// 	int arr[100];
// 	int len = read_array(arr);
// 	cout<<is_palindrome(arr, len);
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// void set_powers(int arr[], int len = 5, int m = 2) {
// 	arr[0] = 1;

// 	for (int i = 1; i < len; ++i) {
// 		arr[i] = arr[i - 1] * m;
// 	}
// }

// int main() {
// 	int arr[100];
// 	int len, m;
// 	cin >> len >> m;

// 	set_powers(arr, len, m);

// 	for (int i = 0; i < len; ++i)
// 		cout << arr[i] << " ";
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

bool is_prime(int num)
{
	if(num <= 1)
		return false;	

	for (int i = 2; i < num; ++i) {
		if(num % i == 0)
			return false;
	}
	return true;
}

int nth_prime(int n)
{
	for (int i = 2; ; ++i) {
		if(is_prime(i)) {
			--n;
			if(n == 0)
				return i;
		}
	}
	return -1;
}

int main() {
	for (int i = 1; i < 20; ++i) {
		cout<<nth_prime(i)<<" ";
	}

	return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// bool starts_with(string input, string pattern, int pos) {
// 	if (pos + pattern.size() > input.size())
// 		return false;

// 	for (int i = 0; i < (int) pattern.size(); ++i) {
// 		if (pattern[i] != input[i + pos])
// 			return false;
// 	}
// 	return true;
// }

// string replace_str(string input, string pattern, string to) {
// 	string res = "";
// 	for (int pos = 0; pos < (int) input.size(); ++pos) {
// 		if (starts_with(input, pattern, pos)) {
// 			res += to;
// 			pos += (int) pattern.size() - 1;	// Move to next right position
// 		} else
// 			res += input[pos];
// 	}

// 	return res;
// }

// int main() {
// 	cout << starts_with("aabcabaaad", "aa", 0) << "\n";
// 	cout << starts_with("aabcabaaad", "aa", 1) << "\n";
// 	cout << starts_with("aabcabaaad", "aabcabaaad", 0) << "\n";
// 	cout << starts_with("aabcabaaad", "baaad", 5) << "\n";
// 	cout << starts_with("aabcabaaad", "baaad", 4) << "\n";

// 	cout << replace_str("aabcabaaad", "aa", "x") << "\n";
// 	cout << replace_str("aabcabaaad", "aa", "aaaa") << "\n";
// 	cout << replace_str("aabcabaaad", "aa", "") << "\n";

// 	return 0;
// }

