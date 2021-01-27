#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<algorithm>
//list 双向链表
using namespace std;
int main(void)
{
	list<int>lst;
	lst.push_back(3);
	lst.push_front(8);
	
	list<int>::iterator it = lst.begin();
	
	for(;it != lst.end(); it++) {
		cout << *it << endl;
	}
	
	lst.insert(it, 88);
//	it++;     迭代器++只能到lst.end(),再往后就不能加加，只能push元素后，再在所有元素范围内加加
	lst.insert(it, 99);
	--it;
	cout << *it << endl;
	
	return 0;
}