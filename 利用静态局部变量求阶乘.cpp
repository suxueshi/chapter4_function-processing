//#include<iostream>
//using namespace std;
//int fac(int);
//int main() {        //降低可读性，且占内存， 如不必要 不要使用静态局部变量
//	int i;
//	for (i = 1; i <= 5; i++) {    
//		cout << i << "!=" << fac(i) << endl;    //每次调用一个i 就输出这个i的阶乘，同时保留，以便下次再乘（i+1)
//	}
//	return 0;
//}
//
//int fac(int n) {
//	static int y = 1; //y为静态局部变量，函数结束时y值不释放
//	y = y * n;		// 所以每次调用fac 都会用到上一次fac调用后的y值  也就能顺序的输出阶乘了 但是不能打乱顺序
//	return y;
//}