#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
	vector<int> vec;
	map<string,string>mapStudent;
	
	mapStudent["xiaoming"] = "level1";
	mapStudent["xiaotong"] = "level2";
	mapStudent["zhangwen"] = "level3";
	mapStudent.insert(make_pair("caishixiong", "level4"));
	mapStudent.insert(pair<string, string>("liwei", "level6"));
	
	map<string,string>::iterator iter = mapStudent.begin();
	
	for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++) {    //map 会根据key 值ascii自动排序
		cout << iter->first << endl;
		cout << iter->second << endl;
	}
	
	
	return 0;
}