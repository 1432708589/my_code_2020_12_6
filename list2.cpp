#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<algorithm>

using namespace std;
int main(void)
{
	
	
	list<int>lst;
	lst.push_front(1);
	lst.push_back(44);
	list<int>::iterator it = lst.begin();
	for(; it != lst.end(); it++) {
		cout << *it << endl;   //1 44
		
	}
//	it--;
	lst.insert(it, 88);
	lst.insert(it, 99);    //it 已经到end了
	it--;
	cout << *it << endl;  //输出 99
	for(it = lst.begin(); it != lst.end(); it++) {
		cout << *it << endl;    //输出1 44 88 99
		
	}
	return 0;
	
}