#include <iostream>
#include <vector>

using namespace std;

int main(){

    int x[10]{0,1,2,3,4,5,6,7,8,9};

    vector<int> n{9,7,6,5,4,3,2,1,0};

    for(int i:x){
        cout << i << endl;
    }

    for(int i:n){
        cout << i << endl;
    }

	return 0;
}
