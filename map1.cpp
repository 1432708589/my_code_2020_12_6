#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;
int main(void)
{
	char tmp = 'd';
	int j = 3;
	vector<int>vecInt;
	vector<char>vecChar;

	map<int,char>mapCharater;

	for(int i = 0; i < 3; i++) {
		vecChar.push_back(tmp);
		tmp--;
	}
	vector<char>::iterator it = vecChar.begin();
	for(it = vecChar.begin(); it < vecChar.end(); it++) {
		mapCharater.insert(pair<int,char>(j--, *it));
	}

	map<int,char>::iterator iter;// = mapCharater.begin();
	for(iter = mapCharater.begin(); iter != mapCharater.end(); iter++) {
		cout << iter->first << endl;
	}

	return 0;
}