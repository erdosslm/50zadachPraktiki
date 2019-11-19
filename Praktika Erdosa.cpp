//1
#include <iostream>
using namespace std;
int main(){
	cout << "Silence is golden" << endl;
}
//2
#include <iostream>
using namespace std;
int main() {
	cout << "Monday" << endl;
	cout << "November"<< endl;
	cout << "Erdos" << endl;

}
//3
#include <iostream>
using namespace std;
int main() {
	cout << "0" << endl;
	cout << "00" << endl;
	cout << "000" << endl;
	cout << "0000" << endl;
	cout << "00000" << endl;
//}
//4
#include <iostream>
using namespace std;
int main(){
	for (int i = 0; i < 5; i++) {
		cout << "AAAAAAAA" << endl;
	}
}
//5
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "*     " << "*     " << "*"<<endl;
	cout << " *   " << "* " << "*" <<"   *"<< endl;;
	cout << "  * " << "*   " << "* "<<"*"<<endl;
	cout << "   *" << "     *"<<endl;
	return 0;
}
//6
#include <iostream>
using namespace std;
int main() {
	int a, b, c, sum;
	cin >> a >> b >> c;
	sum = a + b - c;
	cout << sum << endl;
	return 0;
}
//7
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, sum;
	a = 0.5;
	b = 0.25;
	sum = a + b;
	cout << sum << endl;
	return 0;
}
//8
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b, sum;
	a = 2;
	b = 3;
	sum = (a + (4 * b))*(a - (3 * b)) + (a*a);
	cout << sum << endl;
	return 0;
}
//9
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, sum;
	x = -2;
	sum = abs(x)+pow(x,5);
	cout << sum << endl;
	return 0;
}
//10
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x, sum;
	x = 1.7;
	sum = pow((x + 1),2) + 3*(x + 1);
	cout << sum << endl;
	return 0;
}
//11
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x, sum;
	x = -2.34;
	sum = ((abs(x - 5) - (sin(x))) / 3)
		+ sqrt(pow(x,2)+2014)*(cos(2 * x)) - 3;
	cout << sum << endl;
	return 0;
}
//12
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x,e, sum;
	x = 3.6;
	e = 2.7182818284590452354;
	sum = pow(e, x - 2) + abs(sin(x)) 
		- pow(x, 4)*cos(1 / x);
	cout << sum << endl;
	return 0;
}
//13
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x,a,b,sum;
	x = 1;
	a = 0.1;
	b = 0.2;
	sum = pow((pow(x, 2) + b), 1/5) -
		(pow(b, 2)*(pow(sin(x + a), 3)))/x ;
	cout << sum << endl;
	return 0;
}
//14
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a, b, sum,proiz;
	cin >> a >> b;
	sum = a + b;
	proiz = a * b;
	cout <<"sum="<< sum << endl;
	cout << "proiz=" << proiz << endl;
	return 0;
}
//15
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a, s1, s2;
	cin >> a;
	s1 = pow(a, 2);
	s2 = pow(a, 3);
	cout << "kvadrat etogo chisla=" << s1 << endl;
	cout << "kub etogo chisla=" << s2 << endl;
	return 0;
}
//16
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a, b, c, s1, s2, s3;
	cin >> a >> b >> c;
	s1 = a * 2;
	s2 = b - 3;
	s3 = pow(c, 2);
		cout << s1 + s2 + s3 << endl;
	return 0;
}
//17
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a, b, c, s1, s2;
	cin >> a >> b >> c;
	s1 = (a + b + c) / 3;
	s2 = (a*2)-(c*3)-(b*3);
	cout <<"srednee arifm="<<s1 << endl;
	cout <<"raznoct="<< s2 << endl;
	return 0;
}
//18
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a, s1, s2;
	cin >> a;
	s1 = a*4;
	s2 = pow(a,2);
	cout << "Perimetr=" << s1 << endl;
	cout << "Area=" << s2 << endl;
	return 0;
}
//19
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double  a,b,s1,s2;
	cout << "vvedite price 1kg konfet"<<endl;
	cin >> a;
	cout << "vvedite price 1kg pechenya"<<endl;
	cin >> b;
	s1 = (a / 1000) * 300;
	s2 = (b / 1000) * 400;
	cout << "stoimost 300 gr konfet=" <<
		s1<<' '<< "rublya" << endl;
	cout << "stoimost 400 gr pechenya=" << 
		s2<<' '<< "rublya" << endl;
	cout << "stoimost treh pokupok,kazhdaya iz 2 kg pechenya i 1.8 kg konfet=" <<
		((b * 2) + a + ((a / 1000) * 800)) * 3 <<' ' <<"rublya" << endl;

	return 0;
}
//20
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double  t,s,v;
	cout << "vvedite vremya v minutah" << endl;
	cin >> t;
	cout << "vvedite rasstoyanie v kilometrah" << endl;
	cin >> s;
	v = (s*1000) / (t*60);
	cout << "scorost="<<v<<"m/s"<< endl;
	return 0;
}
//21
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a,b,s1,s2,s3;
	cin >> a;
	cin >> b;
	s1 = 0.5*a*b;
	s3 = sqrt(pow(a, 2) + pow(b, 2));
	s2 = a + b + s3;
	cout << "ploshad=" << s1 << endl;
	cout << "perimetr=" << s2 << endl;
	cout << "gipotenuza=" << s3 << endl;
	return 0;
}
//22
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a, s1;
	cin >> a;
	s1 = (a*1.8)+32;
	cout << s1 << "F" << endl;
	return 0;
}
//23 X
#include"pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  x, a, y, k;
	cout << "vvedite ves konfet" << endl;
	cin >> x;
	cout << x << "kg konfet" << endl;
	cout << "vvedite stoimost" << endl;
	cin >> a;
	cout << a << "rubley" << endl;
	

	s1 = (a*1.8) + 32;
	cout << s1 << "F" << endl;
	return 0;
}
//24
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  days, sale, sum;
	cout << "vvedite colichestvo dney" << endl;
	cin >> days;
	cout << "vvedite procent skidki" << endl;
	cin >> sale;
	cout << "vvedite summu" << endl;
	cin >> sum;
	sale /= 100;
	for (int i = 0; i < days; i++){
		sum += 3;
		sale += sum * sale;
		cout << "pribil=" << sum << endl;
	}
	return 0;
}
//25
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  weeks, months, years,days;
	cin >> weeks >> months >> years;
	days = (weeks * 7) + (months * 30) + (years * 365);
	cout << days;
	return 0;
}
//26
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  x,y;
	cin >> x >> y;
	swap(x, y);
	cout << x<<" "<<y<<endl;
	return 0;
}
//27
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a, b, c,s1,s2,s3;
	a = 0;
	b = 2;
	c = 5;
	s1 = a + b;
	s2 = c - b;
	s3 = a + b + c;
	cout << "a=" << s1 << endl;
	cout << "b=" << s2 << endl;
	cout << "c=" << s3 << endl;
	return 0;
}
//28
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double vklad;
	int proc;
	cout << "vvedite summu vklada : ";
	cin >> vklad;
	cout << "vvedite godovoi procent: ";
	cin >> proc;
	vklad += (proc * vklad * 5) / 100;
	cout <<"itogovaya summa cherez 5 let ="<< vklad << endl;
	return 0;
}
//29
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  x,y;
	cin >> x >> y;
	swap(x, y);
	cout << x<<" "<<y<<endl;
	return 0;
}
//30
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int  a,s1,s2,s3;
	cin >> a;
	s1= (a*a)*(a*a);
	s2 = (a*a)*(a*a)*(a*a);
	s3 = (a*a*a)*(a*a*a)*(a*a*a)*(a*a*a)*(a*a*a);
	cout << "a)" <<s1 <<endl;
	cout << "b)" << s2 << endl;
	cout << "c)" << s3 << endl;
	return 0;
}
//31
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << 647 / 170;
	return 0;
}
//32 X
#include "pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, y, chastnoe;
	y = 237;
	chastnoe = (y / 10);
	x = chastnoe * 10;
	return 0;
}
//33
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	cout << sqrt(x - sqrt(y))<< endl; 
	return 0;
}
//34
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > 3) {
		x = x + 10;
	}
	else {
		x = x - 10;
	}
	cout << x << endl;
	return 0;
}
//35
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x < 7) {
		cout<<"yes"<<endl;
	}
	else if(x>10){
		cout << "no" << endl;
	}
if(x==9){
cout << "error" << endl;
}
	return 0;
}
//36
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Vvedite mesyac ";
	cin >> n;
	if (n == 1) {
		cout << "January" << endl;
	}
	if (n== 2) {
		cout << "February" << endl;
	}
	if (n == 3) {
		cout << "March" << endl;
	}
	if (n == 4) {
			cout << "April" << endl;
		}
	if (n == 5) {
			cout << "May" << endl;
		}
	if (n ==6) {
			cout << "June" << endl;
		}
	if (n == 7) {
			cout << "July" << endl;
		}
	if (n == 8) {
			cout << "August" << endl;
		}
	if (n == 9) {
			cout << "September" << endl;
		}
	if (n == 10) {
			cout << "October" << endl;
		}
	if (n == 11) {
			cout << "November" << endl;
		}
	if (n == 12) {
			cout << "December" << endl;
		}
	return 0;
}
//37
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << endl;
	}
	else {
		cout << b << endl;
	}
	return 0;
}
//38
#include "pch.h"
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if ((a - b) >= 100)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
//39
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << "Yes" << endl;
    }
	else {
		cin >> a >> b;
	}
		cout <<a<<" "<<b << endl;
	return 0;
}
//40?
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a ;
	if (-10<a<10) {
		a = a + 5;
	}
	else {
		a = a - 10;
	}
	cout << a << endl;
	return 0;
}
//41?
#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a>100) {
		a = 0;
	}
	if (a < -100) {
		a = 0;
	}
	else {
		a = a + 1;
	}
	cout << a << endl;
	return 0;
}
//41
#include"pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a<100 && a>-100) {
		cout << a - a;
	}
	else
		cout << a + 1;
	return 0;
}
//42?
#include "pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (2 <= a <= 5) {
		a += 10;
		cout << a << endl;
	}
	 if (7 <= a <= 40) {
		a -= 100;
		cout << a << endl;

	}
	if (a <= 0 && a > 3000) {
		a *= 3;
		cout << a << endl;

	}
	else {
		a = 0;
		cout << a << endl;

	}

	return 0;
}
//43
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите месяц ";
	cin >> n;
	if (n == 12)
		cout << "Зима" << endl;
	if (n == 1)
		cout << "Зима" << endl;
	if (n == 2)
		cout << "Зима" << endl;
	if (n == 3)
		cout << "Весна" << endl;
	if (n == 4)
		cout << "Весна" << endl;
	if (n == 5)
		cout << "Весна" << endl;
	if (n == 6)
		cout << "Лето" << endl;
	if (n == 7)
		cout << "Лето" << endl;
	if (n == 8)
		cout << "Лето" << endl;
	if (n == 9)
		cout << "Осень" << endl;
	if (n == 10)
		cout << "Осень" << endl;
	if (n == 11)
		cout << "Осень" << endl;
	return 0;
}
//44
#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	if (a && b != 10 && a % 2 == 0) {
		cout << a + b << endl;
	}
	else {
		cout << a * b << endl;
	}
		return 0;
}
//45
#include <iostream>
using namespace std;
int main() {
	int a, b,c;
	cin >> a >> b >> c;
	if (a&&b&&c > 10 && (a&&b/3)) {
		cout << "yes" << endl;
	}
	else {
		cout <<"no" << endl;
	}
	return 0;
}
//46	
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a&&b&&c%5==0) {
		cout << a+b+c << endl;
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}
//47
#include <iostream>
using namespace std;
int main() {
	int a, b, c,max;
	cin >> a >> b >> c;
	max = a;
	if (max<b){
		max=b;
	}
	if (max<c) {
		max = c;
	}
		cout << max << endl;
	return 0;
}
//48
#include <iostream>
using namespace std;
int main() {
	int a, b, c,s;
	cin >> a >> b >> c;
	if (b > a && c > a) {
		s=b + c;
	}
	else if(a > b&& c > b){
		s=a + c;
	}
	else { 
		s=a + b; 
	}
	cout << s << endl;
	return 0;
}
//49
#include <iostream>
using namespace std;
int main() {
	int a[4], max = 0;
	for (int i = 0; i < 4; ++i) {
		cin >> a[i];
		if (max < a[i] && a[i] % 2 == 0) max = a[i];
	}
	if (!max) cout << "Not found";
	else {
		cout << max;
	}
	return 0;++
}
//50
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b || a == c || b == c) {
		cout << "yes" << endl;
	}
	return 0;
}