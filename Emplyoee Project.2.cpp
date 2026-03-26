#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;
struct Employee
{
	string id;
	string name;
	string Dep;
	string post;
	double salary;
};

int main()
{	vector<Employee> data;
	Employee info;
	bool istrue=true,found;
	int index;string update,search,del;
	while(istrue)
	{
		cout<<"~~~ Welcome To Employee Managmeent System ~~~\n\n";
		cout<<"~~~ 1. Create  ~~~ \n";
		cout<<"~~~ 2. Display ~~~ \n";
		cout<<"~~~ 3. Search  ~~~ \n";
		cout<<"~~~ 4. Update  ~~~ \n";
		cout<<"~~~ 5. Delete  ~~~ \n";
		cout<<"~~~ 6.  Exit   ~~~ \n\n";
		char choice;
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case '1':
				cout<<"\n============================\n";
					cout<<"<<< Welcome To Create Menu >>>\n\n";
					cout<<"Enter Id : ";//id is sorted by itself
					cin>>info.id;
					cin.ignore(1000,'\n');
					cout<<"Enter Name : ";
					getline(cin,info.name);
					cout<<"Enter Departement : ";
					getline(cin,info.Dep);
					cout<<"Enter Designation : ";
					getline(cin,info.post);
					cout<<"Enter Salary : ";
					cin>>info.salary;
					cout<<"\n*** Record Sucessfully Added ***\n";
					data.push_back(info);			
				cout<<"\n------------------------------\n";
				break;
				
				case '2':
				cout<<" \n************************** "<<endl;
				cout<<"\n~~~ Dispaly Menu ~~~\n"<<endl;
				cout<<"\nTotal Employee in your Company = "<<data.size()<<endl<<endl;
				cout << left
    		 	<< setw(14)  << "ID"
     			<< setw(18) << "NAME"
     			<< setw(22) << "DEPARTMENT"
     			<< setw(15) << "POST"
     			<< setw(10) << "SALARY" << endl;

	cout << "---------------------------------------------------------------------\n" << endl;

		for(int i = 0; i < data.size(); i++)
			{
	    cout << left
    	    << setw(14)  << data[i].id
        	<< setw(18) << data[i].name
         	<< setw(22) << data[i].Dep
         	<< setw(15) << data[i].post
        	<< setw(10) << data[i].salary <<endl;
			}

				cout<<"\n **************************"<<endl;
				break;
				
				case '3':
					found=false;
					cout<<"\n=----------------------=\n";
					cout<<"\n <<<   Search Menu   >>>\n";
					cout<<"\nEnter the ID you want to search : ";
					cin.ignore(1000,'\n');
					getline(cin,search);
					index=0;
				for(int i=0;i<data.size();i++){
   				 if(data[i].id==search){
       				 index=i;
       				 found=true;
       				 break;
  					  }
					}
				if(!found){
    			cout<<"ID not found\n";
    			cout<<"\n******** ////// ********** \n";
    			break;
				}
			cout << left<<setw(14) << "\nID"<< setw(18)<<"NAME"<< setw(22)<< "DEPARTMENT"<< setw(15)<<"POST"<< setw(10) << "SALARY\n" ;
		cout << "---------------------------------------------------------------------\n" << endl;
			cout << left
    	    << setw(14)  << data[index].id
        	<< setw(18) << data[index].name
         	<< setw(22) << data[index].Dep
         	<< setw(15) << data[index].post
        	<< setw(10) << data[index].salary << endl <<endl;
				cout<<"\n---------||||||------"<<endl<<endl;
			break;
			
			case '4':
				found=false;
				cout<<"\n#### --------- ##### \n";
				cout<<"\nEnter the ID you want to Update : ";
				cin.ignore(1000,'\n');
				getline(cin,update);
				for(int i=0;i<data.size();i++){
   				 if(data[i].id==update){
       				 index=i;
     				 found=true;
       				 break;
  					  }
					}
				if(!found){
    			cout<<"ID not found\n";
    			cout<<"\n******** ////// ********** \n";
    			break;
				}
					cout<<"Enter New Id : ";
					cin>>data[index].id;
					cin.ignore(1000,'\n');
					cout<<"Enter New Name : ";
					getline(cin,data[index].name);
					cout<<"Enter New Departement : ";
					getline(cin,data[index].Dep);
					cout<<"Enter New Designation : ";
					getline(cin,data[index].post);
					cout<<"Enter New Salary : ";
					cin>>data[index].salary;
					cout<<"\n Record Sucessfully Updated \n";
					cout<<"\n#### --------- ##### \n";
				break;
				case '5':
					found=false;
				cout<<"\n******** ////// ********** \n";
				cout<<"Enter the id you want to Delete : ";
				cin.ignore(1000,'\n');
				getline(cin,del);
				for(int i=0;i<data.size();i++){
   				 if(data[i].id==del){
       				 index=i;
       				 found=true;
       				 break;
  					  }
					}
				if(!found){
    			cout<<"\nID not found\n";
    			cout<<"\n******** ////// ********** \n";
    			break;
				}
				cout<<endl<<data[index].id<<"\t"<<data[index].name<<"\t   "<<data[index].Dep<<"\t \t"<<data[index].post<<"\t"<<data[index].salary;
				data.erase(data.begin()+index);
				cout<<"\n\n|||  Sucessfully Deleted   |||\n";
				cout<<"\n******** ////// ********** \n";
				break;
				case '6':
					istrue=false;
					cout<<"\n******** ////// ********** \n";
					cout<<"\n*** Thank you for using EMS (Employee Management System) ***\n";
					cout<<"\n******** ////// ********** \n";
				break;
				default:
					cout<<"\n******** ////// ********** \n";
					cout<<"Ivalid input ... \n";
					cout<<"Try Again \n";
					cout<<"\n******** ////// ********** \n\n";
		}
	}
	return 0;
}
