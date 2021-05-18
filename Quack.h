#pragma once
#include<list>

using namespace std;
template <typename T>

class Quack 
{
private:
	list<T> mList;
public:
	// Return an element in the list
	T& Next() { if (mList.size() % 2 == 0) { return mList.back(); } else { return mList.front(); } }

	// Push an element to the back of a list
	void Push(const T& tWhat) { mList.push_back(tWhat); }

	// Pop an element from the list
	void Pop() { if (mList.size() % 2 == 0) { mList.pop_back(); } else { mList.pop_front(); } }
};