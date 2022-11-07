#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <list>

using namespace std;

int main() {

	vector<string> f={"ローソン","ファミマ","セブンイレブン"};
	//vector<int>::iterator it;

	for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++) {
		cout << *it_f << endl;
	}

	list<int> lst;
	list<int>::iterator itr;
	itr = lst.begin();
	itr = lst.end();
	itr--;
	itr--;

	return 0;
}