#include<iostream>
#include<string.h>
using namespace std;
class A{
	private:
		int bba;
	protected:
		int cse;
	public:
		int bca;
	void getA(){
		cout<<"\nEnter the number of bba in university: ";
		cin>>bba;
		cout<<"\nEnter the number of cse in university: ";
		cin>>cse;
		cout<<"\nEnter the number of bca in university: ";
		cin>>bca;
	}
	void showA(){
		cout<<bba<<endl;
		cout<<cse<<endl;
		cout<<bca<<endl;
	}
};

class B{
	private:
		int hr;
	protected:
		int be;
	public:
		int bsc;
	void getB(){
		cout<<"\n Enter the numbers of hr in university: ";
		cin>>hr;
		cout<<"\n Enter the numbers of be in university: ";
		cin>>be;
		cout<<"\n Enter the numbers of bsc in university: ";
		cin>>bsc;
	}
	void showB(){
	cout<<hr<<endl;
	cout<<be<<endl;
	cout<<bsc<<endl;
	}
};
int main(){
	B a1;
	a1.getA();
	a1.getB();
	a1.showA();
	a1.showB();
	return 0;
}
