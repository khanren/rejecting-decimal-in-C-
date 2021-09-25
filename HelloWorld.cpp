#include <iostream>
#include <iomanip>
using namespace std;
class Room{
public:
    string RoomType;
   	string PackageType;
    string NumberofNights;
    int ChargeperNights;

    Room(string roomtype, string packagetype, string numberofnights, int chargepernights)    {
        RoomType = roomtype;
        PackageType = packagetype;
        NumberofNights = numberofnights;
        ChargeperNights = chargepernights;
    }
};
int main(){
	char ch;
	int n;
do{
	cout<<"Please select a process you want:\n ";
	cout<<"1 Display package information\n";
	cout<<" 2 Find total staying cost\n";
	cout<<" 3 Exit this ptogram\n";
	while(!(cin>>n) || n<1 || n>3){
	cout<<"You have enter the invalid input, please enter again:\n";
	cin.clear();
	cin.ignore(256,'\n');
	}
	cout<<"\n";
	if(n==1){
	Room roomArray[12]={Room("Economic","Package A","First 5 nights",40),Room(" "," ","6th night and onwards",30),Room(" ","Package B","First 5 nights",50),Room(""," ","6th night and onwards",40),Room("Standard","Package A","First 5 nights",100),Room(" "," ","6th night and onwards",90),Room(" ","Package B","First 5 nights",115),Room(" "," ","6th night and onwards",100),Room("Deluxe","Package A","First 3 nights",150),Room(" "," ","4th night and onwards",130),Room(" ","Package B","First 3 nights",250),Room(" "," ","4th night and onwards",220)};
	cout
        << left
        << setw(15)
        << "Room Type"
        << left
        << setw(15)
        << "Package Type"
        << left
        << setw(30)
        << "Number of Nights"
        << left
        << setw(15)
        << "Charge per Nights"
        << endl;
    for(int i=0;i<12;i++){
    	cout
            << left
            << setw(15)
            << roomArray[i].RoomType
            << left
            << setw(15)
            << roomArray[i].PackageType
            << left
            << setw(30)
            << roomArray[i].NumberofNights
            << left
            << setw(15)
            << roomArray[i].ChargeperNights
            << endl;
	}
	cout<<"Do you want to continue the operation? If yes please enter Y else press any key to exit:\n";
	cin>>ch;
	cout<<"\n";
}
else if(n==2){
float y[1],suma,sumb,rm;
int x[2];
	cout<<"Enter which room type you want (Economic = 1 Standard = 2 Deluxe = 3):\n";
	while(!(cin>>x[0]) || x[0]<1 || x[0]>3){
	cout<<"You have enter the invalid input, please enter again:\n";
	cin.clear();
	cin.ignore(256,'\n');
	}
    cout<<"Enter which package you want (Package A = 1 Package B = 2 ):\n"; 
    while(!(cin>>x[1]) || x[1]<1 || x[1]>2){
	cout<<"You have enter the invalid input, please enter again:\n";
	cin.clear();
	cin.ignore(256,'\n');
	} 
	cout<<"Enter how many night you want stay (1 > 30):\n";   	
   	while(!(cin>>x[2]) || x[2]<1 || x[2]>30){
    cout<<"You have enter the invalid input, please enter again:\n";
	cin.clear();
	cin.ignore(256,'\n');
	}	
	if(x[0]==1 & x[1]==1){
			cout<<"You have selected Economic Room with Package A.\n"; 
	}
	else if(x[0]==1 && x[1]==2){
		cout<<"You have selected Economic Room with Package B.\n"; 
	}
	else if(x[0]==2 && x[1]==1){
		cout<<"You have selected Standard Room with Package A.\n"; 
	}
	else if(x[0]==2 && x[1]==2){
		cout<<"You have selected Standard Room with Package B.\n"; 
	}
	else if(x[0]==3 && x[1]==1){
		cout<<"You have selected Deluxe Room with Package A.\n"; 
	}
	else if(x[0]==3 && x[1]==2){
		cout<<"You have selected Deluxe Room with Package B.\n"; 
	}	
    if (x[0]==1 && x[1]==1) {
    	if(x[2]>5){
    	y[0]=x[2]-5;
    	y[1]=5*40;
    	rm=y[0]*30;    
    	suma=(y[1]+ rm)+(y[1]+ rm)*0.06;
    	cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}	
		else{
		suma=(x[2]*40)+(x[2]*40)*0.06;
		cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}
	}    	
    else if(x[0]==1 && x[1]==2){
    	if(x[2]>5){
    	y[0]=x[2]-5;
    	y[1]=5*50;
    	rm=y[0]*40;    
    	suma=(y[1]+ rm)+(y[1]+ rm)*0.06;
    	cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}	
		else{
		suma=(x[2]*50)+(x[2]*50)*0.06;
		cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}
	}
    else if (x[0]==2 && x[1]==1){
    	if(x[2]>5){
    	y[0]=x[2]-5;
    	y[1]=5*100;
    	rm=y[0]*90;    
    	suma=(y[1]+ rm)+(y[1]+ rm)*0.06;
    	cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}	
		else{
		suma=(x[2]*100)+(x[2]*100)*0.06;
		cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}
	}
    else if (x[0]==2 && x[1]==2){
    	if(x[2]>5){
    	y[0]=x[2]-5;
    	y[1]=5*115;
    	rm=y[0]*100;    
    	suma=(y[1]+ rm)+(y[1]+ rm)*0.06;
    	cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}	
		else{
		suma=(x[2]*115)+(x[2]*115)*0.06;
		cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}
	}
	else if (x[0]==3 && x[1]==1){
    	if(x[2]>3){
    	y[0]=x[2]-3;
    	y[1]=3*150;
    	rm=y[0]*130;    
    	suma=(y[1]+ rm)+(y[1]+ rm)*0.06;
    	cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}	
		else{
		suma=(x[2]*150)+(x[2]*150)*0.06;
		cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}
	}
	else if (x[0]==3 && x[1]==2){
    	if(x[2]>3){
    	y[0]=x[2]-3;
    	y[1]=3*250;
    	rm=y[0]*220;    
    	suma=(y[1]+ rm)+(y[1]+ rm)*0.06;
    	cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}	
		else{
		suma=(x[2]*250)+(x[2]*250)*0.06;
		cout<<fixed<<setprecision(2)<<"Your total payment is:RM"<<suma<<"\n";
		}
	}	
	cout<<"6% taxes are included.\n";	
	cout<<"Do you want to continue the operation? If yes please enter Y else press any key to exit:\n";
	cin>>ch;
}
else{
	cout<<"See you again~~\n";
	return 0;
}
}
while(ch=='Y'|| ch=='y');	
}
