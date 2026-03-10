#include<iostream>
using namespace std;
class Library{
	protected:
		string title;
		string aunthor;
		int ID;
		public:
			Library(string title,string aunthor,int ID){
				this->title=title;
				this->aunthor=aunthor;
				this->ID=ID;
			}
		virtual void display(){
			cout<<"title ="<<title<<endl;
			cout<<"aunthor = "<<aunthor<<endl;
			cout<<"ID = "<<ID<<endl;
		}
};
class Book:public Library{
	private:
	int numPage;
	string Genre;
	public:
		Book(string title,string aunthor,int ID, string Genre,int numPage):Library(title,aunthor, ID){
				this->numPage=numPage;
				this->Genre=Genre;
		}
		 void display()override{
			cout<<"title ="<<title<<endl;
			cout<<"aunthor = "<<aunthor<<endl;
			cout<<"ID = "<<ID<<endl;
			cout<<"nmuPage = "<<numPage<<endl;
			cout<<"Genre = "<<Genre<<endl;
		}
	 void add(){
        if(numPage >= 300)
            cout<<"This is a long reading material"<<endl;
        else
            cout<<"This is a short reading material"<<endl;
    }	
};  
class Magazine:public Library{
	private:
	int issuenum;
	string month;
	public:
Magazine(string title,string aunthor,int ID,int issuenum,string month):Library(title,aunthor, ID){
				this->month=month;
				this->issuenum=issuenum;
		}	
		 void display()override{
			cout<<"title ="<<title<<endl;
			cout<<"aunthor = "<<aunthor<<endl;
			cout<<"ID = "<<ID<<endl;
			cout<<"issuenum = "<<issuenum<<endl;
			cout<<"month = "<<month<<endl;
		}
		

};
class audioBook:Library{
	private:
	int minutes;
	string Nname;
	public:
audioBook ( string title,string aunthor,int ID,int minutes,string Nname):Library(title,aunthor, ID){

				this->minutes=minutes;
				this->Nname=Nname;
		}	
		 void display()override{
			cout<<"title ="<<title<<endl;
			cout<<"aunthor = "<<aunthor<<endl;
			cout<<"ID = "<<ID<<endl;
			cout<<"minunttes="<<minutes<<endl;
			cout<<"Name="<<Nname<<endl;
		}

};
int main(){
	Book B1("power","shabnam",243,"History",123);
	Book B2("war","amna",235,"history",500);
	Magazine M1("diseases","Ali",132,20,"April");
	Magazine M2("event","Ahmad",133,50,"May");
	audioBook a1("math","sara",456,35,"zara");
	audioBook a2("English","nayab",345,60,"asawira");
	B1.display();
	B1.add();
	B2.display();
	B2.add();
	M1.display();
	M2.display();
	a1.display();
	a2.display();
	return 0;
}
