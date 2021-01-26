#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<string>

using namespace std;
int main(void)
{
	set<string>s;
	map<string, string>mapStudent;
	mapStudent.insert(make_pair("dahuang", "level1"));
	mapStudent.insert(pair<string, string>("zhanghuang", "level2"));
	
	map<string, string>::iterator iter = mapStudent.begin();
	for(;iter != mapStudent.end(); iter++) {
		cout << iter->first << endl;
		cout << iter->second << endl;
	}
					  
	s.insert("caishx");
	s.insert("xiaoming");
	set<string>::iterator it = s.begin();

	for( ;it != s.end(); it++) {
		cout << *it << endl;
		cout << s.size() << endl;
		
	}
	
	
	
	
	return 0;
}