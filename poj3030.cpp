#include <iostream>

using namespace std;

int main(){
	int iter, r, e, c;
	cin >> iter;
	for(int i = 0; i < iter; ++i){
		cin >> r >> e >> c;
		if((e-c) > r){
			cout << "advertise\n";
		}
		else if ((e-c) == r){
			cout << "does not matter\n";
		}
		else{
			cout << "do not advertise\n";
		}
	}
	return 0;
}
