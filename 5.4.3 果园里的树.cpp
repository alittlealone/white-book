/**
** 5.4.3 果园里的树
**/

#include <iostream>
#include <math.h>
using namespace std;

//三角形(x0,y0)(x1,y1)(x2,y2)的有向面积
double area(double x0, double y0, double x1, double y1, double x2, double y2) {
	return (x0 * y1 + x2 * y0 + x1 * y2 - x2 * y1 - x0 * y2 - x1 * y0) / 2;
} 

//判断点O(i,j)是否在三角形内部 
//判断SABC是否等于SABO+SBCO+SOCA
bool is_in(double s, double i, double j, double x0, double y0, double x1, double y1, double x2, double y2) {
	double s1 = area(x0, y0, x1, y1, i, j);
	double s2 = area(x1, y1, x2, y2, i, j);
	double s3 = area(i, j, x2, y2, x0, y0);
	if(fabs(s - s1 - s2 - s3) <= pow(10, -9)) return 1;
	else return 0;
} 

double min3(double x, double y, double z) {
	double r;
	r = x;
	if(y < r) r = y;
	if(z < r) r = z;
	return r;
}

double max3(double x, double y, double z) {
	double r;
	r = x;
	if(y > r) r = y;
	if(z > r) r = z;
	return r;
}

int main() {
	double x0, y0, x1, y1, x2, y2;
	int i, j; 
	while(cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2) {
		int count = 0;
		double s = area(x0, y0, x1, y1, x2, y2);
		for(i = ceil(min3(x0, x1, x2)); i <= floor(max3(x0, x1, x2)); i++) {
			for(j = ceil(min3(y0, y1, y2)); j <= floor(max3(y0, y1, y2)); j++) {
				if(is_in(s, i, j, x0, y0, x1, y1, x2, y2)) count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}