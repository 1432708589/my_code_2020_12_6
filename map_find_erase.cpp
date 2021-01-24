#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;
int main(void)
{
	map<string,string>mapStudent;
	mapStudent.insert(make_pair("xiaoming", "level1"));
	mapStudent.insert(pair<string,string>("dahuang", "level2"));
	mapStudent["lihuang"] = "level4";
		
	mapStudent.erase("dahuang");     //擦除元素
	map<string, string>::iterator iter = mapStudent.begin();
	iter = mapStudent.find("xiaoming");    //find元素
	cout << iter->first << endl;
	cout << iter->second << endl;
	for (; iter != mapStudent.end(); iter++) {
		cout << iter->first << endl;
		cout << iter->second << endl;
	}	
	return 0;
}