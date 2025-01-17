#include<iostream>
#include<string.h>
using namespace std;
class mall
{
	public:
		void bill()
		{
			int i,n,price,tbill=0;
			char name[25];
			cout<<"Enter the Number of products :";
			cin>>n;
			for(i=0;i<n;i++)
			{
				cout<<"Name of product";
				cin>> name;
				cout<<"Price ";
				cin>> price;
				tbill+=price;	
			}
			cout<<"Total bill is"<<tbill;
		}
};
int main()
{
	mall a;
	a.bill();
}
