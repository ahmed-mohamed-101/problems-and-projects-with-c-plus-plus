// #include <iostream>
// using namespace std;

// int main()
// {
//   int x ;
//   cout << "enter x: ";
//   cin >> x;

//   int row = x;

//   while (row > 0) {
//     int stars_count = 1;
//     cout << stars_count << endl;
//     while (stars_count <= row)
//     {
//     cout <<"-" << stars_count;
//       cout << "*";
//       stars_count++;
//     }
//     cout << "\n";
//     row--;
//   }
//   return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int N;

// 	cin >> N;

// 	// Use doubles to: 1) allow any values 2) get average correctly
// 	double even_sum = 0, odd_sum = 0;
// 	int even_count = 0, odd_count = 0;

// 	int cnt = 1;
// 	while (cnt <= N) {
// 		double value;
// 		cin >> value;

// 		if (cnt % 2 == 0)	// even position
// 			even_sum += value, even_count++;
// 		else				// odd position
// 			odd_sum += value, odd_count++;

// 		cnt++;
// 	}

// 	cout <<odd_sum / odd_count << " " << even_sum / even_count << "\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int x = 5;
//   int rows = 1;

//   while (rows <= x){
//     int spaces = x-rows;
//     int x = 1;
//     while (x <= spaces)
//     {
//       cout << " ";
//       ++x;
//     }

//     int asterisks = rows * 2 - 1;
//     int y = 1;
//     while (y <= asterisks)
//     {
//       cout << "*";
//       ++y;
//     }

//     cout << "\n";
//     rows++;
//   }

//     int spaces = 0;
//   while(x > 0) {
//     int g = 1;
//     while (g <= spaces)
//     {
//       cout << " ";
//       g++;
//     }
//     spaces++;

//     int asterisks = x * 2 -1;
//     int z = 1;
//     while (z <= asterisks)
//     {
//       cout << "*";
//       ++z;
//     }

//     cout << "\n";
//     x--;
//   }
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int T;

// 	cin >> T;

// 	while (T > 0) {
// 		int N;
// 		cin >> N;

// 		int pos = 0;
// 		int result;

// 		while (pos < N) {
// 			int value;
// 			cin >> value;

// 			if (pos == 0)
// 				result = value;
// 			else if (result > value)
// 				result = value;

// 			pos++;
// 		}
// 		cout<<result<<"\n";

// 		--T;
// 	}
	// cout << "itis meeeeee";
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	int n_test = n;
// 	int n_last = 0;
// 	if (n % 10 == 0){
// 		cout << "the reversed number is = 0 and the multiplicity by 3 is = 0";
// 	}
	
// 	while (true){
// 		int x = n_test % 10;
// 		n_last = (n_last * 10) + x;
// 		n_test /= 10;
		
// 		if (n_test == 0){
// 			cout << n_last;
// 			break;
// 		}
// 	}
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int n; // 3
// 	int x; // 4
// 	cin >> n >> x;
// 	int y = 1;

// 	while (y <= n){
// 		int j = 1;
// 		while (j <= x){
// 			cout << y << " x " << j << " = " << y*j << endl;
// 			j++;
// 		}
// 		y++;
// 	}
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main() {
	
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////