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
	s.insert("abc");
	s.insert("abd");
	s.insert("abc");
	
	set<string>::iterator it = s.begin();
	
	for(; it != s.end(); it++) {
		cout << *it << endl  //用法和vector类似
		//		cout << s[0] << endl;  vector可以这样，map：map[key]
	}
	return 0;
}