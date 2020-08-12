//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//double f(double);				//对将要用到的函数在最开头进行声明  如果只在main里面声明，范围就只适用于main 后面函数之间的调用就需要考虑先后顺序了
//double xpoint(double, double);
//double root(double, double);
//
//int main() {
//	double x1, x2, f1, f2, x;
//	do {                           // do while循环语句先执行 do 然后判断条件再执行
//		cout << "input x1, x2:";
//		cin >> x1 >> x2;
//		f1 = f(x1);
//		f2 = f(x2);
//	} while (f1 * f2 >= 0);  //  只有括号里面为false才会跳出循环，也就说满足括号里面的条件会继续执行
//	x = root(x1, x2);		////当给出了一个包含根x的定义域区间时候 ，就执行root函数,去逼近根
//	cout << setiosflags(ios::fixed) << setprecision(7);
//	cout << "A root of equation is " << x << endl;
//	return 0;
//}
//
//double f(double x) {		//方程可以改变
//	double y;
//	y = x * x * x - 5 * x * x + 16 * x - 80;
//	return y;
//}
//
//double xpoint(double x1,double x2) {
//	double y;
//	y = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
//	return y;
//}
//
//double root(double x1,double x2) {   //当给出了一个包含根x的定义域区间时候 ，就执行root函数
//	double x, y, y1;
//	y1 = f(x1);
//	do {
//		x = xpoint(x1, x2);  // 弦线交于x点
//		y = f(x);
//		if (y * y1 > 0) {
//			y1 = y;				// 如果根不在（x1 x）区间   更新左端点x1 y1
//			x1 = x;		
//		}
//		else x2 = x;			//如果根在（x1 x）区间	更新右断点 x2 y2
//	} while (fabs(y) >= 0.00001);  //让函数值接近于0 x就是我们需要求的那个根
//	return x;
//}
