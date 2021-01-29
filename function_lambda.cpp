#include <iostream>
#include <vector>

using namespace std;

int main(){

    auto maior=[](vector<int>n)->int{
        auto m=0;
        for(int x:n){
            m=(m>x) ? m:x;
        }

        return m;
    };

    cout << maior({1,2,34,4,5,6,7,8,99})<< endl;

	return 0;
}
