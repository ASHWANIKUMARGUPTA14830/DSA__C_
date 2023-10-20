/*#include<iostream>
using namespace std;
class M{
	protected:
		int m;
	public:
		void get_m(int);
		
};
class N{
	protected:
		int n;
	public:
		void get_n(int);
};
class P:public M, public N{
	public:
		void display(void);
};
void M::get_m(int x){
	m = x;
}
void N::get_n(int y){
	n = y;
}
void P::display(void){
	
	cout<<"m="<<m<<"\n";
	cout<<"n="<<n<<"\n";
	cout<<"m*n="<<m*n<<"\n";
	
}
int main(){
	P p;
	p.get_m(10);
	p.get_n(20);
	p.display();
	return 0;
}
*/

#include<iostream>
using namespace std;
class A{
	private:
		int a;
	protected:
		int b;
	public:
		void getA(){
			cin>>a;
			cin>>b;
		}
		void showA(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
		
		
		
};


class B{
	private:
		int c;
	protected:
		int d;
	public:
		void getB(){
			cin>>c;
			cin>>d;
		}
		void showB(){
			cout<<c<<endl;
			cout<<d<<endl;
		}
		
		
};

class C{
	private:
		int e;
	protected:
		int f;
	void getC(){
		cin>>e;
		cin>>f;
	}
	void showC(){
		cout<<e<<endl;
		cout<<f<<endl;
	}
};

int main(){
	P p;
	p.getA();
	p.getB();
	p.showA();
	p.showB();
	
	return 0;
	
	
}
