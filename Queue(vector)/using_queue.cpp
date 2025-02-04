#include <iostream>
#include <iomanip>
#include "queue.h"

using namespace std;

int main()
{
	Queue<int> q;
	int n;
	for(int i = 0; i < 10; i++)
	{
		cout << "Add " << i+1 << " element to the queue: ";
		cin >> n;
		q.Add(n);
	}
	for(int i = 0; i < 10; i++)
	{
		int data;
		q.Remove(data);
		cout << "Remove element from the query " << setw(5) << data << "\n";
	}
	return 0;
}