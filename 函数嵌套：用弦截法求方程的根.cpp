//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//double f(double);				//�Խ�Ҫ�õ��ĺ������ͷ��������  ���ֻ��main������������Χ��ֻ������main ���溯��֮��ĵ��þ���Ҫ�����Ⱥ�˳����
//double xpoint(double, double);
//double root(double, double);
//
//int main() {
//	double x1, x2, f1, f2, x;
//	do {                           // do whileѭ�������ִ�� do Ȼ���ж�������ִ��
//		cout << "input x1, x2:";
//		cin >> x1 >> x2;
//		f1 = f(x1);
//		f2 = f(x2);
//	} while (f1 * f2 >= 0);  //  ֻ����������Ϊfalse�Ż�����ѭ����Ҳ��˵����������������������ִ��
//	x = root(x1, x2);		////��������һ��������x�Ķ���������ʱ�� ����ִ��root����,ȥ�ƽ���
//	cout << setiosflags(ios::fixed) << setprecision(7);
//	cout << "A root of equation is " << x << endl;
//	return 0;
//}
//
//double f(double x) {		//���̿��Ըı�
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
//double root(double x1,double x2) {   //��������һ��������x�Ķ���������ʱ�� ����ִ��root����
//	double x, y, y1;
//	y1 = f(x1);
//	do {
//		x = xpoint(x1, x2);  // ���߽���x��
//		y = f(x);
//		if (y * y1 > 0) {
//			y1 = y;				// ��������ڣ�x1 x������   ������˵�x1 y1
//			x1 = x;		
//		}
//		else x2 = x;			//������ڣ�x1 x������	�����Ҷϵ� x2 y2
//	} while (fabs(y) >= 0.00001);  //�ú���ֵ�ӽ���0 x����������Ҫ����Ǹ���
//	return x;
//}
