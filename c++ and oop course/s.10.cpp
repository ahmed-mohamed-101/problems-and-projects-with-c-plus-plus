// #include<iostream>
// using namespace std;

// int main() {
// 	int arr[100][100];

// 	int rows, cols;
// 	cin >> rows >> cols;

// 	for (int row = 0; row < rows; ++row)
// 		for (int col = 0; col < cols; ++col)
// 			cin >> arr[row][col];

// 	int max_i = 0, max_j = 0;

// 	for (int i = 0; i < rows; ++i) {
// 		for (int j = 0; j < cols; ++j) {
// 			if (arr[i][j] >= arr[max_i][max_j])
// 				max_i = i, max_j = j;
// 		}
// 	}
// 	cout << "Max value at position " << max_i << " " << max_j
// 			<< " with value = " << arr[max_i][max_j];
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int arr[100][100];

// 	int rows, cols;
// 	cin >> rows >> cols;

// 	for (int i = 0; i < rows; ++i)
// 		for (int j = 0; j < cols; ++j)
// 			cin >> arr[i][j];

// 	int i = 0, j = 0;

// 	int left_diagonal = 0;
// 	while (i < rows && j < cols)
// 		left_diagonal += arr[i++][j++];

// 	int right_diagonal = 0;
// 	i = 0, j = cols-1;
// 	while (i < rows && j >= 0)
// 		right_diagonal += arr[i++][j--];

// 	int last_row = 0;
// 	j = 0;
// 	while (j < cols)
// 		last_row += arr[rows-1][j++];

// 	int last_col = 0;
// 	i = 0;
// 	while (i < rows)
// 		last_col += arr[i++][cols-1];

// 	cout << left_diagonal << " " << right_diagonal << "\n";
// 	cout << last_row << " " << last_col << "\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int arr[100][100];

// 	int rows, cols;
// 	cin >> rows >> cols;

// 	for (int i = 0; i < rows; ++i)
// 		for (int j = 0; j < cols; ++j)
// 			cin >> arr[i][j];

// 	int c1, c2;
// 	cin >> c1 >> c2;

// 	for (int i = 0; i < rows; ++i) {
// 		// swap [i][c1] with [i][c2]
// 		int tmp = arr[i][c1];
// 		arr[i][c1] = arr[i][c2];
// 		arr[i][c2] = tmp;
// 	}
// 	for (int i = 0; i < rows; ++i) {
// 		for (int j = 0; j < cols; ++j)
// 			cout << arr[i][j] << " ";
// 		cout << "\n";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int arr[100][100];

// 	int rows, cols;
// 	cin >> rows >> cols;

// 	for (int i = 0; i < rows; ++i)
// 		for (int j = 0; j < cols; ++j)
// 			cin >> arr[i][j];

// 	int i = 0, j = 0, sum = 0;

// 	while (i < rows && j < cols) {
// 		sum += arr[i][j];
// 		cout<<arr[i][j]<<"\n";

// 		int next_val, best_i = -1, best_j = -1;

// 		// is right ok position?
// 		if (j + 1 < cols)
// 			next_val = arr[i][j + 1], best_i = i, best_j = j + 1;

// 		// is down ok position?
// 		if (i + 1 < rows) {
// 			if (best_i == -1 || next_val < arr[i + 1][j])
// 				next_val = arr[i + 1][j], best_i = i + 1, best_j = j;
// 		}
// 		// is diagonal ok position?
// 		if (i + 1 < rows && j + 1 < cols) {
// 			if (next_val < arr[i + 1][j + 1])		// best_i == -1 ||   no need
// 				next_val = arr[i + 1][j + 1], best_i = i + 1, best_j = j + 1;
// 		}

// 		if (best_i == -1)
// 			break;
// 		i = best_i, j = best_j;
// 	}
// 	cout << sum << "\n";

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	// Ok to not intialize. we will read immediately
// 	int arr[100][100];
// 	int n, m ;

// 	cin >> n >> m;
// 	for (int i = 0; i < n; ++i) {
// 		for (int j = 0; j < m; ++j) {
// 			cin >> arr[i][j];
// 		}
// 	}

// 	int q;
// 	cin >> q;

// 	while (q--) {
// 		int r1, r2;
// 		cin >> r1 >> r2;
// 		r1--;
// 		r2--;

// 		bool is_smaller = true;
// 		for (int j = 0; j < m; ++j) {
// 			if (arr[r1][j] >= arr[r2][j]) {
// 				is_smaller = false;
// 				break;
// 			}
// 		}

// 		if (is_smaller)
// 			cout << "YES\n";
// 		else
// 			cout << "NO\n";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int n, upper = 0, lower = 0, val;
// 	// No need to create matrix!
// 	cin >> n;
// 	for (int i = 0; i < n; ++i) {
// 		for (int j = 0; j < n; ++j) {
// 			cin >> val;

// 			if (i <= j)
// 				lower += val;

// 			if (i >= j)
// 				upper += val;
// 		}
// 	}

// 	cout << lower << "\n";
// 	cout << upper << "\n";
	


// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int arr1[100][100];
// 	int arr2[100][100];
// 	int n, m;

// 	cin >> n >> m;
// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < m; ++j)
// 			cin >> arr1[i][j];

// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < m; ++j)
// 			arr2[j][i] = arr1[i][j];

// 	for (int i = 0; i < m; ++i) {
// 		for (int j = 0; j < n; ++j)
// 			cout << arr2[i][j] << " ";
// 		cout << "\n";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	bool is_prime[100][100] = { 0 };
// 	int n, m, val;

// 	cin >> n >> m;
// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < m; ++j) {
// 			cin >> val;

// 			if (val <= 1)
// 				continue;

// 			is_prime[i][j] = 1;
// 			for (int k = 2; k < val; ++k) {
// 				if (val % k == 0) {
// 					is_prime[i][j] = 0;
// 					break;
// 				}
// 			}
// 		}

// 	int q, si, sj, rs, cls; // 1 0 2 2
// 	cin >> q;

// 	while (q--) {
// 		cin >> si >> sj >> rs >> cls;
// 		int cnt = 0;

// 		for (int i = si; i <= si + rs - 1; ++i)
// 			for (int j = sj; j <= sj + cls - 1; ++j)
// 				cnt += is_prime[i][j];

// 		cout << cnt << "\n";
// 	}

// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int arr[100][100];
// 	int n, m;

// 	cin >> n >> m;
// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < m; ++j)
// 			cin >> arr[i][j];

// 	//{ d, r,  u,  l, ul, dr, ur, dl };
// 	int di[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
// 	int dj[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };

// 	for (int i = 0; i < n; ++i) {
// 		for (int j = 0; j < m; ++j) {
// 			bool valid_mountain = true;	// if no neighbors, will remain true!

// 			// check the 8 neighbors using dir array
// 			for (int d = 0; d < 8 && valid_mountain; ++d) {
// 				int ni = i + di[d];
// 				int nj = j + dj[d];

// 				if (ni < 0 || ni >= n || nj < 0 || nj >= m)
// 					continue;	// outside borders

// 				if (arr[i][j] <= arr[ni][nj]) {
// 					valid_mountain = false;
// 					break;
// 				}
// 			}

// 			if (valid_mountain)
// 				cout << i << " " << j << "\n";
// 		}
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
// 	int n, m, k, r = 0, c = 0;

// 	cin >> n >> m >> k;

// 	// Direction from 1 to 4: up, right, down, left
// 	int rd[4] = { -1, 0, 1, 0 };
// 	int cd[4] = { 0, 1, 0, -1 };

// 	while (k--) {
// 		int dir, steps;
// 		cin >> dir >> steps;
// 		--dir;

// 		r = (r + rd[dir] * steps) % n;
// 		c = (c + cd[dir] * steps) % m;

// 		if (r < 0)
// 			r += n;
// 		if (c < 0)
// 			c += m;

// 		cout << r << " " << c << "\n";
// 	}

// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////