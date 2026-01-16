  #include <iostream>
using namespace std;

int main() {
	int data[] = { 1,2,4,5,1,8,2,3,6,1,4,2,32 };
	int collection_size = 13;

	int unique[13];
	int unique_count = 0;

	for (int i = 0; i < collection_size; i++) {
		bool found = false;
		for (int j = 0; j < unique_count; j++) {
			if (data[i] == unique[j]) {
				found = true;
				break;
			}
		}
		if (!found) {
			unique[unique_count++] = data[i];
		}
	}

	cout << "The collection contains " << unique_count << " unique numbers, they are : ";

	for (int i = 0; i < unique_count; i++) {
		cout << unique[i] << " ";
	}

	return 0;
}
