// #include<iostream>
// using namespace std;

// void print_3n_plus_1(int n) {
// 	cout << n << " ";
// 	if (n == 1)
// 		return;

// 	if (n % 2 == 0)
// 		print_3n_plus_1(n / 2);
// 	else
// 		print_3n_plus_1(3 * n + 1);
// }

// int main() {
// 	print_3n_plus_1(6);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int length_3n_plus_1(int n) {
// 	if (n == 1)
// 		return 1;

// 	if (n % 2 == 0)
// 		return 1 + length_3n_plus_1(n / 2);

// 	return 1 + length_3n_plus_1(3 * n + 1);
// }
// // 6 3 10 5 16 8 4 2 1
// int main() {
// 	cout<<length_3n_plus_1(6);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int arr_max(int arr[], int len) {
// 	if (len == 1)
// 		return arr[0];

// 	int sub_result = arr_max(arr, len - 1);
// 	return max(sub_result, arr[len - 1]);
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	cout << arr_max(arr, 5);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int arr_sum(int arr[], int len) {
// 	if (len == 1)
// 		return arr[0];

// 	int sub_result = arr_sum(arr, len - 1);
// 	return sub_result + arr[len - 1];
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	cout << arr_sum(arr, 5);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// double arr_average(double arr[], int len) {
// 	if (len == 1)
// 		return arr[0];

// 	double sub_result = arr_average(arr, len - 1);
// 	// Now this was average of len-1. So sum / (len-1)
// 	sub_result = sub_result * (len-1);

// 	return (sub_result + arr[len - 1] ) / len;
// }

// int main() {
// 	double arr[] = { 1, 8, 2, 10, 3 };

// 	cout << arr_average(arr, 5);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// void array_increment(int arr[], int len) {
// 	if (len == 0)
// 		return;

// 	array_increment(arr, len - 1);
// 	arr[len-1] += len-1;
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	array_increment(arr, 5);

// 	for (int i = 0; i < 5; ++i) {
// 		cout<<arr[i]<<" ";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// void accumulate_arr(int arr[], int len) {
// 	if (len == 1)
// 		return;

// 	accumulate_arr(arr, len - 1);
// 	arr[len-1] += arr[len-2];
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	accumulate_arr(arr, 5);

// 	for (int i = 0; i < 5; ++i) {
// 		cout<<arr[i]<<" ";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// void left_max(int arr[], int len) {
// 	if (len == 1)
// 		return;

// 	left_max(arr, len - 1);
// 	arr[len-1] = max(arr[len-1], arr[len-2]);
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	left_max(arr, 5);

// 	for (int i = 0; i < 5; ++i) {
// 		cout<<arr[i]<<" ";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// void right_max(int arr[], int len) {
// 	if (len == 1)
// 		return;

// 	right_max(arr + 1, len-1);	// arr+1 is the a new array shifted. E.g. { 1, 8, 2, 10, 3 } => {8, 2, 10, 3 }
// 	arr[0] = max(arr[0], arr[1]);	// Then we only need to think about arr (0)
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	right_max(arr, 5);

// 	for (int i = 0; i < 5; ++i) {
// 		cout<<arr[i]<<" ";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int sufix_sum(int arr[], int len, int cnt) {
// 	if (cnt == 0)
// 		return 0;

// 	return arr[len - 1] + sufix_sum(arr, len - 1, cnt - 1);
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	cout << sufix_sum(arr, 5, 3);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;


// int prefix_sum(int arr[], int cnt) {
// 	if (cnt == 0)
// 		return 0;

// 	return arr[0] + prefix_sum(arr+1, cnt - 1);
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 10, 3 };

// 	cout << prefix_sum(arr, 3)<<"\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// // start & end are indices

// bool is_palindrome_v1(int arr[], int start, int end) {
// 	if (start >= end)
// 		return true;

// 	if(arr[start] != arr[end])
// 		return false;

// 	return is_palindrome_v1(arr, start+1, end-1);
// }

// bool is_palindrome_v2(int arr[], int end) {
// 	if (end <= 0)
// 		return true;


// 	if(arr[0] != arr[end])
// 		return false;

// 	return is_palindrome_v2(arr + 1, end-2); // real -1 and the minust for shifting
// }

// int main() {
// 	int arr[] = { 1, 8, 2, 8, 1 };

// 	cout << is_palindrome_v1(arr, 0, 4)<<"\n";
// 	cout << is_palindrome_v2(arr, 4)<<"\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// bool is_prefix(string main, string prefix, int start_pos = 0)
// {
// 	if(start_pos == prefix.size())
// 		return true;

// 	if(main[start_pos] != prefix[start_pos])
// 		return false;

// 	return is_prefix(main, prefix, start_pos + 1);
// }

// int main() {

// 	cout << is_prefix("abcdefg", "abcd", 3)<<"\n";
// 	cout << is_prefix("abcdefg", "", 3)<<"\n";
// 	cout << is_prefix("abcdefg", "abd", 3)<<"\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// void do_something1(int n) {	// print number digit by digit reversed
// 	if (n) {
// 		cout << n % 10;
// 		do_something1(n / 10);
// 	}
// }

// void do_something2(int n) {
// 	if (n) {
// 		do_something2(n / 10);
// 		cout << n % 10;
// 	}
// }

// int main() {
// 	do_something1(123456);
// 	cout << "\n";
// 	do_something2(123456);

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// bool is_prime(int m, int cur_test_number = 3) {
// 	if (m == 2){
//     cout << m << " ";
// 		return true;
//   }

// 	if (m <= 1 || m % 2 == 0)
// 		return false;

// 	if (m == cur_test_number){
//     cout << m << " ";
// 		return true;
//   }
// 	if (m % cur_test_number == 0)
// 		return false;


// 	return is_prime(m, cur_test_number + 1);
// }

// int count_primes(int start, int end) {
// 	if (start > end)
// 		return 0;

// 	int result = count_primes(start + 1, end);
// 	if (is_prime(start))
// 		result += 1;

// 	return result;
// }

// int main() {
//   int count = count_primes(2, 10);
// 	cout<< endl << count;
// 	//cout<<count_primes(10, 5000000)<<"\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int fib(int n) {
	if (n <= 1)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main() {
	cout << fib(5
) << "\n";

	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////