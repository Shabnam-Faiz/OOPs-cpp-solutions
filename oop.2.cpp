#include<iostream>
using namespace std;
class Smart_Ride_system{
    protected:
    string passengerName;
    int rideID;
    double BaseFare;
    public:
    Smart_Ride_system( string passengerName,
    int rideID,
    double BaseFare) {
        this->passengerName=passengerName;
        this->rideID=rideID;
        this->BaseFare=BaseFare;
    }
      virtual double calculated(){
          return 0;
      }
        virtual void display(){
        cout<<"passengerName = "<<passengerName<<endl;
        cout<<"rideID = "<<rideID<<endl;
        cout<<"BaseFare = "<<BaseFare<<endl;
    }
};
class EconomeRide : public Smart_Ride_system{
    private:
      double distenceKm  ;
      public:
    EconomeRide(string passengerName, int rideID,double BaseFare,double      distenceKm):Smart_Ride_system(passengerName,rideID,BaseFare){
       this->distenceKm=distenceKm;
    }
     virtual double calculated(){
         return BaseFare + (distenceKm * 8);
     }
     void display() override{
          cout<<"passengerName = "<<passengerName<<endl;
        cout<<"rideID = "<<rideID<<endl;
        cout<<"BaseFare = "<<BaseFare<<endl;
        cout<<"distenceKm = "<<distenceKm<<endl;
        cout<<"finalfare = "<<calculated()<<endl;
     }
};
class Luxry_Ride : public Smart_Ride_system{
    private:
    double distenceKm;
    double serviceCharge;
    public:
   Luxry_Ride(string passengerName, int rideID,double BaseFare,double distenceKm, double serviceCharge) : Smart_Ride_system(passengerName,rideID,BaseFare){
        this->distenceKm=distenceKm;
        this->serviceCharge=serviceCharge;
}
 virtual double calculated(){
    return BaseFare+(distenceKm * 12)+serviceCharge;
 }
 void display() override{
          cout<<"passengerName = "<<passengerName<<endl;
        cout<<"rideID = "<<rideID<<endl;
        cout<<"BaseFare = "<<BaseFare<<endl;
        cout<<"distenceKm = "<<distenceKm<<endl;
        cout<<"serviceCharge = "<<serviceCharge;
        cout<<"finalfare = "<<calculated()<<endl;
 }
};
int main(){
    EconomeRide E1("sara",201,100,15);
    E1.calculated();
    E1.display();
    Luxry_Ride L1("Ahmad",305,120,10,80);
  L1.calculated();
   L1.display();
    return 0;
}
