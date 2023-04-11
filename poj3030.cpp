#include <iostream>

using namespace std;

int main(){
	int iter, r, e, c, diff;
	cin >> iter;
	for(int i = 0; i < iter; ++i){
		cin >> r >> e >> c;
		diff = e - c;
		if(diff > r){
			cout << "advertise\n";
		}
		else if (diff == r){
			cout << "does not matter\n";
		}
		else{
			cout << "do not advertise\n";
		}
	}
	return 0;
}
