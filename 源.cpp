#include <iostream>

#define PI 3.1415927
// 模糊的延伸距离。
#define TH 1.4
// 误差调整系数。
#define A 1.151301

using namespace std;

float f(int deltax, int deltay, float th);
int main(){
	double sum = 0.0;
	for (int i = -2; i < 3; i++){
		for (int j = -2; j < 3; j++){
			float t = f(abs(i), abs(j), TH) * A;
			cout << t << "\n";
			sum += t;
		}
	}
	cout << sum << " " << A / sum;

	system("pause");
	return 0;
}
float f(int x, int y, float th){
	float d = 2 * th * th;
	return exp(-(x*x + y*y) / d) / d / PI;
}