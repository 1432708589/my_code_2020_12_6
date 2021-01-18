#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int tmp = 0;
//	vector<int>vec(3, 1);  //3个元素 都是1,再插入是从第4个元素开始插入的
	vector<int>vec;
	cout << vec.size() << endl;
	for(int i = 0; i < 3; i++) {
		cin >> tmp;
		vec.push_back(tmp);

	}
	sort(vec.begin(), vec.end());  //对vector排序
	vector<int>::iterator it = vec.begin();   //用迭代器访问元素
	for(it = vec.begin(); it < vec.end(); it++) {  //it是指针
		cout << *it << endl;
//		cout << vec.front() << endl; //返回的是元素的引用
//		cout << vec.begin() << endl; 返回的是迭代器，这样会报错

	}

	return 0;
}