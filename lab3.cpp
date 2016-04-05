#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ifstream FileIn("file.in", ios::in);
	if(!FileIn){
		cout << "Failed opening." << endl;
		exit;
	}
	
	int amount,total=0,i=0;
	FileIn >> amount;
	vector <int> v1(amount);
	
	while(FileIn >> v1[i]) i++;

	sort(v1.begin(),v1.end());
	
	for(i=0;i<5;i++) total+=v1.at(amount-i-1);
	
	cout << total << endl;
	return 0;
}
