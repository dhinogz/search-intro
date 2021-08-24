#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::vector;

// Worst case O(n), best case O(1)
int simpleSearch(vector<int> &vec, int searchData)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == searchData)
		{
			return i;
		}
	}
	return -1;
}

void print(vector<int> &vec)
{
	for (int i=0; i<vec.size(); i++){
		cout << vec[i] << " ";
	}
	cout << "\n";
}


int main()
{
	int n, data, searchData;
	
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> data;
		vec[i] = data;
	}
	print(vec);
	cin >> searchData;
	int posSimple = simpleSearch(vec, searchData);
	
}