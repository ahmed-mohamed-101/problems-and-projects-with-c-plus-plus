// #include <iostream>
// using namespace std;

// struct emplyee {
// 	string name;
// 	int age;
// 	double salary;
// 	char gender;

// 	void read_employee() {
// 		cout << "Enter employee 4 entries: ";
// 		cin >> name >> age;
// 		cin >> salary >> gender;
// 	}

// 	void print_employee() {
// 		cout << name << " has salary " << salary << "\n";
// 	}

// 	int get_age() {
// 		return age;
// 	}
// 	void set_age(int new_age) {
// 		age = new_age;
// 	}
// };

// const int MAX = 10000;

// emplyee emplyees_arr[MAX];
// int added = 0;	// Number of employees

// void print_employees() {
// 	for (int i = 0; i < added; ++i)
// 		emplyees_arr[i].print_employee();
// }

// int main() {
// 	emplyees_arr[added++].read_employee();
// 	emplyees_arr[added++].read_employee();
// 	print_employees();
// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// struct queue {
// 	int arr[100];
// 	int len;

// 	queue() {
// 		len = 0;
// 	}

// 	void add_end(int value) {
// 		arr[len++] = value;
// 	}
// 	void add_front(int value) {
// 		// Shift right
// 		for (int i = len-1; i >= 0; --i)
// 			arr[i+1] = arr[i];
// 		arr[0] = value;
// 		len++;
// 	}

// 	int remove_front() {
// 		int ret = arr[0];
// 		// Shift left
// 		for (int i = 1; i < len; ++i)
// 			arr[i-1] = arr[i];
// 		--len;
// 		return ret;
// 	}

// 	void print() {
// 		for (int i = 0; i < len; ++i)
// 			cout<<arr[i]<<" ";
// 		cout<<"\n";
// 	}
// };

// int main() {
// 	queue my_queue;

// 	my_queue.add_end(10);
// 	my_queue.add_end(20);
// 	my_queue.add_end(30);
// 	my_queue.print();

// 	my_queue.add_front(1);
// 	my_queue.add_front(4);
// 	my_queue.print();

// 	cout<<my_queue.remove_front()<<"\n";
// 	my_queue.print();

// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
