// #include<iostream>
// using namespace std;


// int main() {
// 	const int N = 200;
// 	int n, a[N];

// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}

// 	bool increasing = 1; /** we will assume that the array is increasing at first **/
// 	for (int i = 1; i < n; i++) {
// 		if (a[i] < a[i - 1]) {
// 			increasing = 0;
// 			break;
// 		}
// 	}
// 	if (increasing) {
// 		cout << "YES\n";
// 	} else {
// 		cout << "NO\n";
// 	}
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {

// 	const int N = 199;	// < 200 = 199 elements

// 	int n, a[N], mn = 10000, mx = -1;

// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 		if (a[i] < mn) {
// 			mn = a[i];
// 		}
// 		if (a[i] > mx) {
// 			mx = a[i];
// 		}
// 	}

// 	for (int i = 0; i < n; i++) {
// 		if (a[i] == mn)
// 			a[i] = mx;
// 		else if (a[i] == mx)
// 			a[i] = mn;
// 	}

// 	for (int i = 0; i < n; i++) {
// 		if (i)
// 			cout << " ";
// 		cout << a[i];
// 	}
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <cassert>
// using namespace std;

// int main() {
// 	int arr[999];	// < 1000 = 999 elements

// 	int n;   // assume n > 0
// 	cin >> n;

// 	// Let's do it first with an array
// 	for (int i = 0; i < n; i++)
// 		cin >> arr[i];

// 	// As the list is sorted, it is enough to check if an element as same as the previous or not
// 	// if equal, then duplicate. If not, then it is the first of its value!
// 	// Always make use of the given information :)
// 	cout<<arr[0]<<" ";
// 	for (int i = 1; i < n; i++) {
// 		assert(arr[i] >= arr[i-1]);  // make sure input is ordered

// 		if (arr[i] != arr[i-1])
// 			cout << arr[i]<<" ";
// 	}
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	// The size of the array should be larger than
// 	// the maximum value of N
// 	int arr[999];

// 	int N;
// 	cin >> N;

// 	for (int i = 0; i < N; i++)
// 		cin >> arr[i];

// 	// We need to compare the value at the left half
// 	// to those in the right half
// 	// The value at index (0) should be compared to the value at index (N-1)
// 	// Then the value at index (1) should be compared to the value at index (N-2)
// 	// So, clearly we need to increment the left index and decrement the right one
// 	// On reaching the index N/2, we are sure that we have compared all the elements
// 	// of both sides so we don't need to do anything and the array is palindrome
// 	for (int i = 0; i < N / 2; i++) {
// 		if (arr[i] != arr[N - 1 - i]) {
// 			cout << "NO";
// 			return 0;
// 		}
// 	}
// 	cout << "YES";
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	const int N = 200;

// 	int n, a[N];

// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];

// 	int mn;
// 	bool first_time = true;

// 	for (int i = 0; i < n-1; i++) {
// 		for (int j = i + 1; j < n; j++) {
// 			int tmp = a[i] + a[j] + j - i;
// 			if (first_time || tmp < mn) {
// 				mn = tmp;
// 				first_time = false;
// 			}
// 		}
// 	}
// 	cout << mn << endl;
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int n, tmp, mn[3];

// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		int value;
// 		cin >> value;

// 		if (i < 3)
// 			mn[i] = value;
// 		else {
// 			// Find maximum position
// 			int mx_pos = 0;
// 			for (int j = 1; j < 3; ++j) {
// 				if (mn[mx_pos] < mn[j])
// 					mx_pos = j;
// 			}

// 			if (value < mn[mx_pos])
// 				mn[mx_pos] = value;
// 		}
// 	}

// 	// let's order the first 3 values. We can do in several ways
// 	// Find maximum position
// 	int mx_pos = 0;
// 	for (int j = 1; j < 3; ++j) {
// 		if (mn[mx_pos] < mn[j])
// 			mx_pos = j;
// 	}
// 	// swap max with last
// 	tmp = mn[2];
// 	mn[2] = mn[mx_pos];
// 	mn[mx_pos] = tmp;

// 	// Swap first 2 elements if needed
// 	if (mn[0] > mn[1]) {
// 		tmp = mn[0];
// 		mn[0] = mn[1];
// 		mn[1] = tmp;
// 	}

// 	for (int i = 0; i < 3; i++)
// 		cout << mn[i] << " ";	// not ordered


// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	// As values are 0-500, we can make array of 501 mark the last value in it
// 	// Then we answer the queries directly

// 	const int N = 500 + 1;
// 	int n, q, x, ans[N];

// 	for (int i = 0; i < N; i++)
// 		ans[i] = -1; /** at first the answer of any number is -1 **/

// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> x;
// 		ans[x] = i;/** update the answer for x to be i **/
// 	}
// 	int num;
// 	cin >> q;
// 	while (q--) {
// 		cin >> num;
// 		cout << ans[num] << endl;
// 	}
// 	return 0;
// }

//////////////////////////////////////////////or

// #include<iostream>
// using namespace std;

// int main() {
// 	int n, q, a[200];

// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 		cin >> a[i];

// 	cin >> q;
// 	while (q--) {
// 		int num;
// 		cin >> num;

// 		int pos = -1;
// 		// search from the end
// 		for (int i = n-1; i >= 0; --i) {
// 			if (a[i] == num) {
// 				pos = i;
// 				break;
// 			}
// 		}
// 		cout << pos << "\n";
// 	}
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	const int MAX = 270 + 500 + 1;
// 	int frequency[MAX] = { 0 };	// initialize with zeros. You can't do for other values (e.g. 1) this way.

// 	for (int i = 0; i < n; i++) {
// 		int value;
// 		cin >> value;

// 		value += 500;	// shift all values to be positive
// 		frequency[value]++;
// 	}

// 	int mx_pos = 0;
// 	for (int i = 0; i < MAX; i++) {
// 		if (frequency[mx_pos] < frequency[i])
// 			mx_pos = i;
// 	}
// 	cout << mx_pos - 500 << " has repeated " << frequency[mx_pos] << " times ";
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	int n, x, occurrence[10] = {0};

// 	cin >> n;

// 	for (int i = 0; i < n; i++) {
// 		cin >> x;
		
// 		if (x == 0)
// 			occurrence[0]++;

// 		while (x) {
// 			int digit = x % 10;
// 			occurrence[digit]++;
// 			x /= 10;
// 		}

// 	}
// 	for (int i = 0; i <= 9; i++) {
// 		cout << i << " " << occurrence[i] << endl;
// 	}

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <cassert>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	// Again, mark in an array to know if visited or not! No nested loops!
// 	const int MAX = 500 + 1;
// 	int is_visited[MAX] = { 0 };

// 	for (int i = 0; i < n; i++) {
// 		int value;
// 		cin >> value;
// 		assert(0 <= value && value <= 500);

// 		if (!is_visited[value])
// 			cout<<value<<" ";
// 		is_visited[value] = 1;
// 	}
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	const int N = 201;	// Be careful. last value is 200, so we need array 201
// 	int sequence[N], indx;

// 	int occurrence[N * 10] = { 0 };	// possibly i-th value is much less than 10 * i

// 	cin >> indx;
// 	sequence[0] = 0;
// 	occurrence[0] = 1;	// use a value as an index in the array

// 	for (int i = 1; i <= indx; i++) {
// 		int cur = sequence[i - 1] - (i - 1) - 1;

// 		if (cur < 0 || occurrence[cur])
// 			cur = sequence[i - 1] + (i - 1) + 1;

// 		sequence[i] = cur;
// 		occurrence[cur] = 1;
// 	}

// 	cout << sequence[indx];

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
// 	const int N = 199;
// 	int n, k;
// 	int arr[N];

// 	cin >> k >> n;
// 	for (int i = 0; i < n; i++)
// 		cin >> arr[i];

// 	int max_sum = 0;	// First k values
// 	int min_index = 0;
// 	for (int i = 0; i < k; i++)
// 		max_sum += arr[i];

// 	int sum = max_sum;
// 	for (int i = k; i < n; i++) {
// 		// remove element before and add current element. Now they are new k elements
// 		sum = sum - arr[i - k] + arr[i];

// 		if (sum > max_sum) {
// 			max_sum = sum;
// 			min_index = i - (k - 1);
// 		}
// 	}
// 	cout << min_index << " " << min_index + k - 1 << " " << max_sum << "\n";
// 
// }

////////////////////////////////////////////////////////////////Or

// #include <iostream>
// using namespace std;

// int main() {
// 	const int N = 199;
// 	int n, k;
// 	int arr[N];

// 	cin >> k >> n;
// 	for (int i = 0; i < n; i++)
// 		cin >> arr[i];

// 	int max_sum = 0;	// First k values
// 	int min_index = 0;
// 	for (int i = 0; i < k; i++)
// 		max_sum += arr[i];

// 	int sum = max_sum;
// 	for (int i = k; i < n; i++) {
// 		// remove element before and add current element. Now they are new k elements
// 		sum = sum - arr[i - k] + arr[i];

// 		if (sum > max_sum) {
// 			max_sum = sum;
// 			min_index = i - (k - 1);
// 		}
// 	}
// 	cout << min_index << " " << min_index + k - 1 << " " << max_sum << "\n";

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	// Let's mark them in 0-based array
	bool is_removed[199] = { 0 };
	int last_pos = 0;	// The first position to simulate from it

	// We will just simulate the running.
	// Start from last killed position
	// Count K times, but skip these killed positions already
	for (int t = 0; t < n; ++t) {
    
		int remaining_alive = n - t;
		int current_k = k;
		// Ignore this if/else condition for now. See bottom of code. It is for handling very large K
		if (k % remaining_alive == 0)
			current_k = remaining_alive;
		else
			current_k = k % remaining_alive;

		int step = 0;
		int last_person = -1;
		while (step < current_k) {
			if (is_removed[last_pos] == 0)	// not removed. consider it and increment the step
				last_person = last_pos, step++;
			last_pos = (last_pos + 1) % n;	// loop back to the array if needed
		}
		is_removed[last_person] = 1;
		cout << last_person + 1 << "\n";
	}
	
	/*
	 * About the if else. We want to handle when k is so big
	 * Let's say remaining_alive = 4 and k = 6
	 * 		This is the same as if k = 2   (6%4 = 2)
	 *
	 * 	Similarly
	 * 	Let's say remaining_alive = 4 and k = 10
	 * 		This is the same as if k = 2   (10%4 = 2)
	 *
	 * 	This is the same as the useless cycles in the clock
	 * 		4 is same as any 4 + k*12
	 *
	 * 	So in general, we don't need to iterate k times
	 * 		we only need: k % remaining_alive
	 *
	 * 	But we need 1 special case handling to k % remaining_alive == 0
	 * 		In this case we iterate remaining_alive steps
	 */

	return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////