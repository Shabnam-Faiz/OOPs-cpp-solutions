#include<iostream>
using namespace std;
class anemal{
	private:
    int age;
};
class cat:public anemal{
	public:
		void display(){
			cout<<"age = "<<age<<endl;
		}
		
};
int main (){
	cat c1;
	c1.age(5);
	c1.display();
}

