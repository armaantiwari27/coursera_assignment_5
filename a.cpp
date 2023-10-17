#include<iostream>
using namespace std;
class point{
	int x;
	int y;
	public:
		point(){
			x=0;
			y=0;
		}
		point(int a,int b){
			x=a;
			y=b;
		}
		point operator +(point p){
			point result;
			result.x=x+p.x;
			result.y=y+p.y;
            return result;
		}
        point operator -(point p){
			point result;
			result.x=x-p.x;
			result.y=y-p.y;
            //return result;
		}
		void show();
};
void point::show(){
	cout<<"( "<<x<<" , "<<y<<") ";
} 
int main(){
	point p1(10,20),p2(11,22),p3;
	p3=p1+p2;
	p2-p1;
	cout<<"\np1=";
	p1.show();
	cout<<"\np2=";
	p2.show();
	cout<<"\np3=";
	p3.show();
	return 0;
	}
