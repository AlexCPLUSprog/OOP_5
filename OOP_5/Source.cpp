#include <iostream>

// STL ����������
// vector - ������, ������
// forward list - ���������������� ������
// list / ���������� (���������������) ������
// queue - �������
// stack - ����
// map - ��� 
// set - ���, ����� ��������
// unordered_map - ��������������� ���
// unordered_set - ��������������� ���
// priority_queue - ������������ �������
// multiset
// multimap

#include <vector>
#include <queue>
#include <stack>
#include <map>

// cppreference
int main() {

	//int arr[] = { 125, 54 };
	std::vector<int> arr = { 123, 54 };
	std::vector<int> vec;
	arr.push_back(622);
	arr.reserve(20); // ���������� ����� ����������� (capacity)
	arr.shrink_to_fit(); // ����� ����������� �� ������� (size)
	for (size_t i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	// std::vector<int>::iterator it;
	std::cout << "\n=====================\n";
	for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++) {
		std::cout << *it << " ";
	}
	
	std::cout << '\n';
	std::cout << "arr size: " << arr.size() << "\n";
	std::cout << "arr capacity: " << arr.capacity() << "\n";
	
	std::cout << "=====================\n";

	std::vector<int> abc(10, 3);
	for (size_t i = 0; i < abc.size(); i++) {
		std::cout << abc[i] << " ";
	}

	std::cout << "\n=====================\n=====================\n=====================\n";

	std::vector<int> my_vector = { 42, 65, 77 };
	std::cout << *my_vector.begin() << '\n';
	// std::cout << *my_vector.end() << '\n'; - ������ ����������, ����� �� ��������
	my_vector.emplace(my_vector.begin() + 1, 33);
	for (size_t i = 0; i < my_vector.size(); i++) {
		std::cout << my_vector[i] << " ";
	}
	std::cout << "\n=====================\n";

	// ��������� �� ������� vector
	// random access (��������� ������) O(1) - const time
	// �������/�������� O(n), n == vector.size()
	// [][][][]...[][][][][] memmove
	// ���������� ��������� O(n^2)

	my_vector.erase(my_vector.begin() + 1);	 // �������� ��������
	
	std::vector<std::vector<int>> vec2d(5, std::vector<int>(10,5));	// ��������� ������ (5 - ���������� �����, 10 - ������� �� �������)
	
	for (size_t i = 0; i < vec2d.size(); i++) {
		for (size_t j = 0; j < vec2d[i].size(); j++) {
			std::cout << vec2d[i][j] << " ";
		}
		std::cout << '\n';
	}

	std::cout << "=====================\n";

	std::queue<int> q; // ������� (FIFO) First In First Out
	q.push(5);
	q.push(3);
	q.push(1);
	std::cout << "q.front(): " << q.front() << "\n"; // ������ ������ �������
	q.pop(); // ������� ���� �������
	std::cout << "q.front(): " << q.front() << "\n";
	q.pop();
	std::cout << "q.front(): " << q.front() << "\n";
	q.push(4);
	q.push(8);
	q.push(55);

	// All operations of queue == O(1)
	while (!q.empty()) {
		std::cout << q.front() << " ";
		q.pop();
	}

	std::cout << "\n=====================\n";

	std::stack<std::string> my_stack; // LIFO Last In First Out
	my_stack.push("hello");
	my_stack.push("how are you?");
	my_stack.push("goodbye");

	while (!my_stack.empty()) {
		std::cout << my_stack.top() << " \n"; // top - ��������� ������� ����� ("������, ��� �������")
		my_stack.pop();
	}

	// map - ������������� ���������, �������� � ���� ���� key � value (���� � ��������), ��� ���� ���� ������ ���� ����������

	// id, O(logN) - 
	std::map<int, std::string> my_map;
	my_map.insert({ 1, "Vadim" });
	my_map.insert({ 2, "Andrew" });
	my_map.insert({ 3, "Bob" });
	my_map.insert({ 42, "Alex" });

	std::cout << "=====================\n";

	std::cout << my_map[1] << "\n";
	std::cout << my_map[42] << "\n";

}