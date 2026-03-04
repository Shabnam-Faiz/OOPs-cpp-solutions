#include<iostream>
using namespace std;
class Ridesystem {
	protected:
		string passengeName;
		int rideID;
		double bseFare;
		public:
		Ridesystem(string passengeName,int rideID,double bseFare){
			this->passengeName= passengeName;
			this->rideID=rideID;
			this->bseFare=bseFare;
		}
		virtual double calcul()=0;
		
		virtual	void display(){
			cout<<"passengeName = "<<passengeName<<endl;
			cout<<"rideID ="<<rideID<<endl;
			cout<<"bseFare = "<<bseFare<<endl;
		}
		
};
class economyRide:public Ridesystem{
	public:
	double distanceKm;
		public:
		economyRid(string passengeName,int rideID,	double bseFare,double distanceKm):Ridesystem(passengeName,rideID,bseFare){
			this->distanceKm=distanceKm;	
		}	
		virtual double calcul(){
			return finalFare=baseFare+(distanceKm*8);
		}
        	void display()ovrride{
		cout<<"passengeName = "<<passengeName<<endl;
			cout<<"rideID ="<<rideID<<endl;
			cout<<"bseFare = "<<bseFare<<endl;
			cout<<"distanceKm = "<<distanceKm<<endl;
		
	}
};
class luxuryRid:public distanceKm{
	
		double serviceCharge;
		double distanceKm;
		public:
	luxuryRide(string passengeName,int rideID,	double bseFare,double distanceKm,	double serviceCharge):Ridesystem(passengeName,rideID,bseFare){
	this->serviceCharge=serviceCharge;
	this->distanceKm=distanceKm;
}
virtual double calculad(){
	return finalFare=baseFare+(distanceKm*8)+serviceCharge;
}
	void	display()ovrrid{
		cout<<"passengeName = "<<passengeName<<endl;
			cout<<"rideID ="<<rideID<<endl;
			cout<<"bseFare = "<<bseFare<<endl;
			cout<<"serviceCharge ="<<serviceCharge<<endl;
cout<<" distanceKm="<<distanceKm<<endl;	
}
};
int main(){
	Ridesystem r1("sara",201,15);
	luxuryRid R1("ahmad",120,10,80);
	r1.display();
	R1.calculad();
}
