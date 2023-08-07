#include <iostream >
#include<fstream>
#include<string>
using namespace std;
const int cars=6;
class CarSale
{
private:                                              // Hidding Data 
                                                      //Encapsulation concept 
	string first_name,last_name ,cnic,address; 
	int phnumber ;
	string car_name,car_model,car_type,car_color,car_reg,car_company;
	string car_running,car_engine;
public:
	 CarSale()        //Default Constructor 
	 { 
	 	system ("cls");
	 	cout <<"\n\n\t\t\tEnter Your First Name                  : ";
		cin.ignore();
		getline(cin,first_name);  
	 	cout <<"\n\t\t\tEnter Your Last Name                   : ";
		getline(cin,last_name);
	 	cout <<"\n\t\t\tEnter your Cnic no                     : ";
	 	cin.ignore();
		getline(cin,cnic);
		cout << "\n\t\t\tEnter Your Address                     : ";
		cin.ignore();
		getline(cin,address);
	 	cout <<"\n\t\t\tEnter the Phone number                 : ";
		cin.ignore();
		cin>>phnumber ;
		cout << "\n\t\t\tEnter Company of Car                  : ";
		cin.ignore();
		getline (cin,car_company);
		cout << "\n\t\t\tEnter Name of Car                     : ";
		cin.ignore();
		getline(cin,car_name);
		cout << "\n\t\t\tEnter Model No. of Car                : ";
		cin.ignore();
		getline(cin,car_model);
		cout << "\n\t\t\tEnter Engine Capacity of Car          : ";
		cin.ignore();
		cin>>car_engine;
		cout << "\n\t\t\tEnter Type of Car                     : ";
		cin.ignore();
		getline(cin,car_type);
		cout << "\n\t\t\tEnter Reg No. of Car                  : ";
		cin.ignore();
		getline(cin,car_reg);
		cout << "\n\t\t\tEnter Colour of Car                   : ";
		cin.ignore();
		cin>>car_color;
		cout << "\n\t\t\tHow much Km is the running of Car?    : ";
		cin>>car_running;
	 }      
     void txtfile()
     {
     	ofstream out ;
     
	 	out.open("Saled information .txt",ios::app) ;
	 	out <<"\n\n\t\t\t\tInformation of the Sellers \n\n";
	 	out <<"\nYour Name                      : "<<first_name<<" "<<last_name;
	 	out <<"\nCnic no                        : ";
	 	out <<cnic;
	 	out <<"\nPhone number                   : ";
	 	out <<phnumber ;
		out <<"\nCompany of Car                 : ";
		out <<car_company;
		out <<"\nName of Car                    : ";
		out <<car_name;
		out <<"\nModel No. of Car               : ";
		out <<car_model;
		out <<"\nEngine Capacity of Car         : ";
		out <<car_engine; 
		out <<"\nEnter Type of Car              : ";
		out << car_type;
		out <<"\nReg No. of Car                 : ";
		out << car_reg;
		out <<"\nEnter Colour of Car            : ";
		out << car_color;
		out <<"\nRunning of Car                 : ";
		out <<car_running;
	 	out.close();	
	 }
	 ~CarSale()
	 {
		 cout<< " Thank You for Visiting ";
	 }

	 
		 void Car_Sale_Price()
	 {
	 
		 int cust_price,price;
		 system ("cls");
		 cout <<"\n\n\n\n\t\t\t\tSet price for selling the Car : ";
		 cout <<"\n\n\n\t\t\t NOte: Follow these step to make deal sucessfull \n";
		 cout <<"\n\t\t\t1) Your Price must be greter than 4 lack .\n";
		 cout <<"\t\t\t2) If your Price is less 10% then market rate it will be accepted .\n";
		 cout <<"\t\t\t3) if it is less more 10% then deal will cancelled .";
		 cout << "\n\n\n\t\t\t Enter Price on which Customer want to Sale his Car : ";
		 cin>>cust_price;
		 cout << "\n\t\t\t Enter Market Rate of This Car : ";
		 cin>>price;
		 if((cust_price>=price&&cust_price>400000)||(price ==cust_price-(cust_price*10/100)||cust_price==price-(price*10/100)) )
		 {
		 cout << "\n\t\t\t Congratulations!! Your have a sucessfull deal you will be Notified through an SmS "<<endl; 
			txtfile();
				ofstream out ;
	 	out.open("Saled information .txt",ios::app) ;
	 	out <<"\nPrice Demand : "<<price;
	 	out <<"__\n";
		out.close();			
	}
		 else 
		 {
	     cout << "\n Sorry Couldn't make Deal this Time "<<endl; 
		 }		 	 
	 }
};

class ShowRoom
{
protected:
	string Company_name;
public:
	ShowRoom(){}        //Default Constructor

	ShowRoom(string C_nm)    //Parametrize Constructor
	{
		Company_name=C_nm;
	}     
};
class Vehicle
{
protected:
	string car_name,car_type,car_model,car_condition,car_color;
		int car_price;
public:
	Vehicle(){}    //Default Constructor

	Vehicle(string car_nm,string car_mod,string car_ty,string car_cond,int car_pr,string car_col)  //Parametrize Constructor
	{
		car_name=car_nm;
		car_model=car_mod;
		car_type=car_ty;
		car_condition=car_cond;
		car_price=car_pr;
		car_color=car_color;
	}

};
class Specification
{
protected:
	int car_engine;
	float car_ARAI_mileage,car_City_mileage;
	string petrol_type,Max_power,Max_torque;
public:
	Specification(){}    //Default Constructor

	Specification(int car_eng,float car_ARAI_mile,float car_City_mile,string pet_type,string MAX_Power,string MAX_Torque)    //Paramatrize Constructor
	{
		
			car_engine=car_eng;
		
		car_ARAI_mileage=car_ARAI_mile;
		car_City_mileage=car_City_mile;
		petrol_type=pet_type;
		Max_power=MAX_Power;
		Max_torque=MAX_Torque;
	}
};
class Features
{
protected:
	string power_steering,AntiLock_Braking,Air_Condition;
	string driv_AIRbag,pas_AIR_bag,Fog_lights,Alloy_Rims;
	string Spoiler,sports_mode;
public:
	Features(){}      //Default Constructor
	
	Features(string power_steer,string AntiLock_Brak,string Air_Cond,string driv_AIRBAG,string pas_AIR_BAG,string Fog_ligh,string Alloy_Rim,string Spoil,string sport_mode)
	{
		power_steering=power_steer;
		AntiLock_Braking=AntiLock_Brak;
		Air_Condition=Air_Cond;
		driv_AIRbag=driv_AIRBAG;
		pas_AIR_bag=pas_AIR_BAG;
		Fog_lights=Fog_ligh;
		Alloy_Rims=Alloy_Rim;
		Spoiler=Spoil;
		sports_mode=sport_mode;
	}
};
class Menu:public ShowRoom,public Vehicle,public Specification,public Features       //Inheritence Concept
{
public:
	Menu () {}   //Default Constructor

Menu(string C_nm,string car_nm,string car_mod,string car_ty,string car_cond,int car_pr,string car_col,int car_eng,float car_ARAI_mile,float car_City_mile,string pet_type,string MAX_Power,
string MAX_Torque,string power_steer,string AntiLock_Brak,string Air_Cond,string driv_AIRBAG,string pas_AIR_BAG,string Fog_ligh,string Alloy_Rim,
string Spoil,string sport_mode) : ShowRoom(C_nm),Vehicle(car_nm,car_mod,car_ty,car_cond,car_pr,car_col),Specification(car_eng,car_ARAI_mile,car_City_mile,pet_type,MAX_Power,
MAX_Torque),Features(power_steer,AntiLock_Brak,Air_Cond,driv_AIRBAG,pas_AIR_BAG,Fog_ligh,Alloy_Rim,Spoil,sport_mode)
	{}
    
	void print()
	{
		cout<< "\t Company Name          : "<<Company_name<<endl;
		cout<< "\t Car Name              : "<<car_name<<endl;
		cout<< "\t Car Models            : "<<car_model<<endl;
		cout<< "\t Conditon Of Car       : "<<car_condition<<endl;
		cout<< "\t Car Types             : "<<car_type<<endl;
		cout<< "\t Car Engines           : "<<car_engine<<endl;
		cout<< "\t ARAI Mileage          : "<<car_ARAI_mileage<<endl;
		cout<< "\t City Mileage          : "<<car_City_mileage<<endl;
		cout<< "\t Petrol Type           : "<<petrol_type<<endl;
		cout<< "\t Maximum Power         : "<<Max_power<<endl;
		cout<< "\t Maximum Torque        : "<<Max_torque<<endl;
		cout<< "\t Power Steering        : "<<power_steering<<endl;
		cout<< "\t Anti-Lock Breaking    : "<<AntiLock_Braking<<endl;
		cout<< "\t Air Condition         : "<<Air_Condition<<endl;
		cout<< "\t Driver Air Bag        : "<<driv_AIRbag<<endl;
		cout<< "\t Passanger Air Bag     : "<<pas_AIR_bag<<endl;
		cout<< "\t Fog Lights            : "<<Fog_lights<<endl;
		cout<< "\t Alloy Rims            : "<<Alloy_Rims<<endl;
		cout<< "\t Spoiler               : "<<Spoiler<<endl;
		cout<< "\t Sports Mode           : "<<sports_mode<<endl;
		cout<< "\t Car Color             : "<<car_color<<endl;
		cout<< "\t Price Of Car          : "<<car_price<<endl<<endl;
			ofstream out ; 
		out.open("abc.txt",ios::app);
		out<< "\t Company Name          : "<<Company_name<<endl;
		out<< "\t Car Name              : "<<car_name<<endl;
		out<< "\t Car Models            : "<<car_model<<endl;
		out<< "\t Condition Of Car      : "<<car_condition<<endl;
		out<< "\t Car Types             : "<<car_type<<endl;
		out<< "\t Car Engines           : "<<car_engine<<endl;
		out<< "\t ARAI Mileage          : "<<car_ARAI_mileage<<endl;
		out<< "\t City Mileage          : "<<car_City_mileage<<endl;
		out<< "\t Petrol Type           : "<<petrol_type<<endl;
		out<< "\t Maximum Power         : "<<Max_power<<endl;
		out<< "\t Maximum Torque        : "<<Max_torque<<endl;
		out<< "\t Power Steering        : "<<power_steering<<endl;
		out<< "\t Anti-Lock Breaking    : "<<AntiLock_Braking<<endl;
		out<< "\t Air Condition         : "<<Air_Condition<<endl;
		out<< "\t Driver Air Bag        : "<<driv_AIRbag<<endl;
		out<< "\t Passanger Air Bag     : "<<pas_AIR_bag<<endl;
		out<< "\t Fog Lights            : "<<Fog_lights<<endl;
		out<< "\t Alloy Rims            : "<<Alloy_Rims<<endl;
		out<< "\t Spoiler               : "<<Spoiler<<endl;
		out<< "\t Sports Mode           : "<<sports_mode<<endl;
		out<< "\t Car Color             : "<<car_color<<endl;
		out<< "\t Price Of Car          : "<<car_price<<endl<<endl;
		out <<"__\n\n";
		out.close();
	}
};

class PersonDetails
{
protected:
	string first_name,last_name,cnic,address;
	int phone_number,total_price;
public:
	
	PersonDetails()
	{
	}
	void input ()
	{
	
	 	cout <<"\n\n\t\t\tEnter Your First Name                 : ";
	 	cin.ignore();
		getline(cin,first_name); 
	 	cout <<"\n\t\t\tEnter Your Last Name                   : ";
		getline(cin,last_name);
	 	cout <<"\n\t\t\tEnter your Cnic no                     : ";
	 	cin.ignore();
		getline(cin,cnic);
		cout <<"\n\t\t\tEnter your Address                     : ";
		cin.ignore();
		getline(cin,address);
	 	cout <<"\n\t\t\tEnter the Phone number                 : ";
		cin.ignore();
		cin>>phone_number ;
	}

	virtual void display()=0;                                //Pure Virtual Function Abstract class 

	virtual int Price(){return 0;}                           //Dynamic Run polymorphism

};
class CarPurchase : public PersonDetails,public Menu              //Multiple Inheritance
{
public:
	CarPurchase()
	{}

	void search_car()
	{
		string name_car;
		
		cout<< " Enter Name of Car u want to Buy "<<endl;
		cin.ignore();
		getline(cin,name_car);

		string line;
	
		ifstream in; 
		in.open("abc.txt");
		while(!in.eof())
	    {
			  getline(in,line);
			if(line.find(name_car,0))
			{
		    cout<< " Congratz ";
		    cout<< " Your Car is founded "<<endl;
		    }
		      in.close();
		}
	}
    
	int Price()
	{
		int tax=car_price*10/100;
		total_price=tax+car_price;
		return total_price;
	}
	void display()
	{
		ofstream out ;
		out.open("Car_pur_cust_info.txt");
		cout <<"\n\n__\n";
		cout <<"		Information car Purchase"<<endl ;  
		cout <<"__\n";
		cout<< " Name           : "<<first_name<<" "<<last_name<<endl;
		cout<< " CNIC           : "<<cnic<<endl;
		cout<< " Address        : "<<address<<endl;
		cout<< " Phone Number   : "<<phone_number<<endl;
		cout<< " Total Price is : "<<total_price<<endl; 
		cout <<"__\n";
		out <<"\n\n__\n";
		out <<"		Information car Purchase"<<endl ;  
		out <<"__\n";
		out<< " Name           : "<<first_name<<" "<<last_name<<endl;
		out<< " CNIC           : "<<cnic<<endl;
		out<< " Address        : "<<address<<endl;
		out<< " Phone Number   : "<<phone_number<<endl;
		out<< " Total Price is : "<<total_price<<endl; 
		out <<"__\n";
		out.close();
	}
};
class System:public CarPurchase
{
protected:
	string navigation,security_system;
public:
	System()
	{
		cout<< " Do u want navigation system in your car ? ";
		cin.ignore();
		getline(cin,navigation);

		cout<< " Do u want security system in your car ? ";
		getline(cin,security_system);
	}

	int Price()
	{
		if(navigation=="Yes"||navigation=="yes")
			total_price=total_price+30000;
		else if(security_system=="Yes"||security_system=="yes")
			total_price=total_price+25000;
		return total_price;
	}
	void display()
	{
		cout<< " Navigation System       : "<<navigation<<endl;
		cout<< " Security System         : "<<security_system<<endl;
		cout<< " Your Final Bill is      : "<<total_price<<endl;
	}
};
class Modify
{
public:
	string oil_change,service,Tyre_change,nitro,music_player;
	Modify()
	{
		
		cout<< " Do u want oil change ";
		getline(cin,oil_change);
		cout<< " Do u want Car Service ";
		cin.ignore();
		getline(cin,service);
		cout<< " Do u want to upgrade Nitro system ";
		getline(cin,nitro);
		cout<< " Do u want to modify Tyres ";
		getline(cin,Tyre_change);
		cout<< " Do u want to add new Music Player ";
		getline(cin,music_player);
	}
};
class Aggregrate
{
private:                                           
	Modify* modify;     //HAS a Relationship     
public:                                 // Aggregration concept    
	string car_name;
	 Aggregrate(Modify*m)
	{
		modify=m;
		cout<< " Enter Car name ";
		getline(cin,car_name);
	}
	void print()
	{
		ofstream  out;
		out.open("CAR_modification.txt",ios::app);
		cout<< " Car Name      : "<<car_name<<endl;
		cout<< " Oil Change    : "<<modify->oil_change<<endl;
		cout<< " Car Service   : "<<modify->service<<endl;
		cout<< " Nitro System  : "<<modify->nitro<<endl;
		cout<< " Tyres Change  : "<<modify->Tyre_change<<endl;
		cout<< " Music Player  : "<<modify->music_player<<endl;
		out <<"_"<<endl;
		out <<"		 Car_Modification Details \n";
		out <<"_"<<endl;
		out<< " Car Name        : "<<car_name<<endl;
		out<< " Oil Change      : "<<modify->oil_change<<endl;
		out<< " Car Service     : "<<modify->service<<endl;
		out<< " Nitro System    : "<<modify->nitro<<endl;
		out<< " Tyres Change    : "<<modify->Tyre_change<<endl;
		out<< " Music Player    : "<<modify->music_player<<endl;
		out <<"_"<<endl;
		out.close();
	}
};
void develper_option ()
{
	char w;
	jump :
	system("cls");
  	cout <<"\n\n\t\t\t\t____\n";
	cout <<"\n\t\t\t\t               Welcome \n";
	cout <<"\n\t\t\t\t____\n";
	cout <<"\n\t\t\t\tPress 1 to Read Saled information file . ";
 	cout <<"\n\t\t\t\tPress 2 to Read  abc file . ";
 	cout <<"\n\t\t\t\tPress 3 to Read  Car_pur_cust_info file . ";
 	cout <<"\n\t\t\t\tPress 4 to Read  CAR_modification . ";
	cin >>w;
	cout <<endl<<endl;
	if (w=='1')
	{
		string data; 
	ifstream in;
	in.open("Saled information file.txt");
	if (in.is_open())
	{
	while (getline(in, data)) {
		cout << data << endl;
	}
	in.close();	
	}

else {
	cout <<"Sorry Not Avaiable At This Moment Thankyou ";

}
}
	else if (w=='2')
	{
		string data; 
	ifstream in;
	if (in.is_open())
	{
	in.open("abc.txt");
	while (getline(in, data)) {
		cout << data << endl;
	}
	in.close();
}
	else {
	cout <<"Sorry Not Avaiable At This Moment Thankyou ";}
}
	else if (w=='3')
	{
		
		string data; 
	ifstream in;
	if (in.is_open())
	{
	
	in.open("Car_pur_cust_info.txt");
	while (getline(in, data)) {
		cout << data << endl;
	}
	in.close();	
}
	else {
	cout <<"Sorry Not Avaiable At This Moment Thankyou ";
}
}
	else if (w=='4')
	{
		string data; 
	ifstream in;
	if (in.is_open())
	{
	in.open("CAR_modification.txt");
	while (getline(in, data)) {
		cout << data << endl;
	}
	in.close();
	}	else {
	cout <<"Sorry Not Avaiable At This Moment Thankyou ";

}
	}		

	else {
		cout <<"\n\n\t\t\t\tIncorrect entry\n\n\t\t\t\t\t";
		system ("pause");
		goto jump ;
	}		
};
int main()
{
Menu M[cars]={
Menu("Honda","City","2020","Manual","0 Meter",2800000,"Black",1200,17.43,13.52,"Petrol","(bhp@rpm)117.6bhp@6600rpm","(nm@rpm)145Nm@4600rpm","Yes","Yes","Yes","Yes","No","No","No","Yes","Yes"),
Menu("Honda","BR-V","2019","Auto","Used",3900000,"White",1500,15.11,11.22,"Petrol","(bhp@rpm)117.6bhp@6600rpm","(nm@rpm)145Nm@4600rpm","Yes","Yes","Yes","Yes","No","No","No","Yes","No"),
Menu("Honda","Vesel","2018","Auto","Used",3400000,"Metallic Grey",1800,16.54,20.75,"Petrol","(bhp@rpm)98bhp@3600rpm","(nm@rpm)1843Nm@3300rpm","Yes","No","Yes","Yes","Yes","No","Yes","Yes","Yes"),          
Menu("Honda","Amaze","2017","Auto","0 Meter",3200000,"Red",1600,24.07,19.68,"Diesel","(bhp@rpm)78.9bhp@3600rpm","(nm@rpm)160Nm@1750rpm","Yes","No","Yes","Yes","Yes","No","Yes","Yes","Yes"),
Menu("Honda","Accord","2021","Manual","0 Meter",3700000,"Silver",1400,27.03,21.95,"Diesel","(bhp@rpm)98.6bhp@3600rpm","(nm@rpm)200Nm@1750rpm","Yes","No","Yes","Yes","Yes","No","Yes","Yes","Yes"),
Menu("Honda","Civic","2016","Auto","Used",3000000,"Grey",1500,16.65,20.45,"Petrol (hybrid) ","(bhp@rpm)139.46bhp@6500rpm","(nm@rpm)174Nm@4300rpm","Yes","No","Yes","Yes","Yes","No","Yes","Yes","Yes")};		

   char a;
   again:
   	cout <<"\n\n\n\t\t\t\tCAR SHOWROOM ";
	cout <<"\n\t\t\t\t------------\n\n ";
   cout<< "\t\t\t| What do u Want to Choose ? \n\t\t\t|";
   cout<< "\n\t\t\t| Press 1 to Sale the Car \n\t\t\t| Press 2 to Purchase the Car \n\t\t\t| Press 3 to Modify Your Car \n\t\t\t\t\t\t\t";
   cin>>a;
   if(a=='1')
   {
    CarSale Cs;
	Cs.Car_Sale_Price();
   }
   
   else if(a=='2')
   {
	for(int i=0;i<cars;i++)	
		M[i].print();
	
    CarPurchase Car;
	PersonDetails *ptr;
	ptr=&Car;
	ptr->input();
	ptr->Price();
	ptr->display();
	Car.search_car();
	System S;
	ptr=&S;
	ptr->Price();
	ptr->display();
   }

   else if(a=='3')
   {
	Modify mod=Modify();
	Aggregrate ag=Aggregrate(&mod);
	ag.print();
   }	
   else
   {
	   cout << " Sorry U entered wrong choice ";
       goto again;
   }
   
   system("pause");
	return 0;
}