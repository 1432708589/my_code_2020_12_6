#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
	
	vector<int>vec;
//	vector<int>::iterator it = vec.begin();
	vec[0] = 90;    //vector是不定长数组，这样子赋值，并不能确定vector长度，只是赋值，会崩溃，无法起到初始化的效果，初始化要用push_back,
	vec[1] = 2;
	vec[2] = 0;
	//vec.push_back(0);  //用push_back插入后vector的长度是确认的，相当于初始化
	//vec.push_back(4);
	//vec.push_back(88);
	//for (;it != vec.end(); it++) {
	/*	cout << vec.front() << endl;
		cout << vec.back() << endl;*/

	//}
	
	map<string, string>mapStudent;
	mapStudent.insert(make_pair("xiaoming", "age 11"));
	mapStudent.insert(pair<string,string>("caishixi", "age 12"));
	
	map<string, string>::iterator iter = mapStudent.begin();
	for (;iter != mapStudent.end(); iter++) {
		cout << iter->first << endl;
		cout << iter->second << endl;
		
	}
	return 0;
}