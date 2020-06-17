#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main() {
	ofstream ofs("ランダムウォーク.csv");
	srand(18140024);
	for (int i = 0; i < 100; i++) { //試行回数
		double sum = 0; //スタート位置
		for (int j = 0; j < 50; j++) { //時刻50秒まで
			int p; //一秒ごとに-1か１のどちらかに進む
			double x;
			x = (rand() + 0.5) / (RAND_MAX + 1);//0から1の乱数作成
			if (0 <= x && x <= 0.5) { //0から0.5までの値が出る確率は1/2
				p = 1;//xが上の条件である場合+1進める
				sum += p;
				ofs << sum<<",";
			}
			else if (0.5 < x && x <= 1) {　//0.5から1までの値が出る確率は1/2
				p = -1;//xが上の条件の場合-1進める
				sum += p;
				ofs << sum<<"," ;
			}
		}
		ofs << sum << endl; //1秒ごとの座標を表示
		ofs<< endl;
	}
	
}
