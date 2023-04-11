#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
	int in;
	vector<int> out;
	while(1){
		cin >> in;
		if(in != 0){
			int avg = 0, blocks[in], moves = 0;
			for(int i = 0; i < in; ++i){
				cin >> blocks[i];
				avg += blocks[i];
			}
			avg = avg/in;
			for(int i = 0; i < in; ++i){
				if(blocks[i] != avg){
					moves += abs(blocks[i] - avg);
				}
			}
			moves = moves/2;
			out.push_back(moves);
		}
		else{
			break;
		}
	}
	for(int i = 0; i < out.size(); ++i){
		cout << "Set #" << i+1 << "\n";
		cout << "The minimum number of moves is " << out[i] << ".\n\n";
	}


	return 0;
}
