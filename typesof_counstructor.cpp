#include<iostream>
using namespace std;
class cricle{
	private:
		int radius;
		int perimeter;
		float area;
	public:
	cricle(){//default
		cout<<"Enter the radius"<<endl;
		cin>>radius;
	}
	cal_perimeter(){
		perimeter=2*3.14*radius;
		cout<<"Perimeter ="<<perimeter<<endl;
	}
	cal_area(){
		area=3.14*radius*radius;
		cout<<"Area ="<<area<<endl;
	}
	cricle(int radius1){ //Prameterized
		radius=radius1;
		cout<<"parameterized counstructor"<<endl;
	}
	cricle(cricle &obj){//copy
		radius=obj.radius;
	}
	~cricle(){
		cout<<"the decounstroctor"<<endl;
	}
	
};
int main(){
	cricle c1;
	c1.cal_perimeter();
	c1.cal_area();
	cricle c2(20);
	c2.cal_perimeter();
	c2.cal_area();
	cricle c3=c1;
	c3.cal_perimeter();
	c3.cal_area();
	cout<<"The Code is executed"<<endl;
}
