#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	vector<int>m{0,1,2,3,4,5,6,7,8,9};
	vector<int>::iterator it;

	/*
	for(it=n.begin();it!=n.end();it++){
        cout << *it << endl;
	}
	*/

	for(auto ele:m){
        cout << ele << endl;
	}

	cout << "For_Each-----------------------------------------------------\n\n";

	vector<int>n{1,1,2,3,4,5,6,7,8,9};

    for_each(n.begin(),n.end(),[](int num)
    {
        num+=10;
        cout << num << endl;
    });

	return 0;
}
