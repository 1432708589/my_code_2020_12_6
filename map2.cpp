#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
	int tmp = 5;
	vector<int>vec = {1, 2, 3};;
	map<int,string>mapStr;
	
	vector<int>::iterator it = vec.begin();
	map<int,string>::iterator iter = mapStr.begin();
	for(it = vec.begin(); it < vec.end(); it++) {
		vec.push_back(tmp++);	
	}
	mapStr[1] = "student1";
	mapStr[2] = "student2";
	mapStr[3] = "student3";
	for(int i = 0; i < 3; i++){
		
		mapStr.insert(pair<int,string>(tmp++,"abc"));
		
	}
	for(iter = mapStr.begin(); iter != mapStr.end(); iter++){
		cout << iter->first << endl;
		cout << iter->second << endl;
	}
	
	return 0;
}