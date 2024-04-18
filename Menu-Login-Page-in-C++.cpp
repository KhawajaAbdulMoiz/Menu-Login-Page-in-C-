#include<iostream>
using namespace std;
int main(){
	 	string new_name, new_password, confime_password, Mini_password, New_user_name  ;

	string User_Name, User_Password;
	int choice ,login_Attempt =0;
	Repat:
	cout<<"_________Welcome to the Login page___________" <<endl;
	cout<<"------------------------------------Menu-------------------------------------------"<<endl;
	cout<<"|Press 1 to Login .                          |  "<<endl;
	cout<<"|Press 2 to Register .                       |  "<<endl;
	cout<<"|Press 3 to If your forgot password .        |   "<<endl;
	cout<<"|Press 4 to Exist .                          |   "<<endl;
	cout<<"        Please enter the choice : ";
	 cin>>choice;
	
	
	switch(choice){
		case 1:
			cout<<"________Login page__________"<<endl;

		while(login_Attempt<5){ // use how many time use
			cout<<"Please enter your user name : ";
			cin>>User_Name;
			cout<<"Please enter your user password : ";
			cin>>User_Password;
			
			if(User_Name=="Faraz" && User_Password=="1234"){// first decide User_Name and User_Password and condition true Page is login.
	    cout << "\n======================================\n";
        cout << "\nWelcome to the Login page .\n \n";
        cout << "=========================================\n";
							       goto Repat;

				break;
			}
			else{
				cout<<"Invalid Login attempt. Please Try again ."<<endl;
				login_Attempt++;// one time wrong and again repat at least 5 time.
			}
			if(login_Attempt==5){
				cout<<"Too many login attempts ! The program will now terminate ."<<endl;
				return 0;
				
			}
		}	
			       goto Repat;

	       break;
	       
	 case 2:
 User_Name="Faraz Ahmed";


cout<<"_____Create New Account_____"<<endl;

    cout << "Enter the new username : ";
    cin>>new_name;
    if(new_name!=User_Name){ // 
    	}
    else{
	    	cout<<"UserName already exists Try another one";
return 0;
}	
	cout << "Enter New password: ";
    cin>>new_password;
    cout << "Confirm the password: ";
    cin>>confime_password;

if(confime_password == new_password ){
     
        
        cout << "\n===================================\n";
        cout << "\nSuccessfully new account created! \n \n";
        cout << "===================================\n";
        break;}
    else{
        cout << "\nPassword confirmation not correct! \n" << endl;
        break;
}

goto Repat;

break;
   case 3:
   			while(login_Attempt<5){
   	cout<<"_________Forgot password____________"<<endl;
   	User_Name="Faraz_Ahmed";
   	cout<<"Enter the your user name : ";
   	cin>>New_user_name;
   	if(User_Name==New_user_name){
   		cout<<"Enter the New password: ";
   		cin>>new_password;
   		cout<<"Enter Confirm the password :";
   		cin>>confime_password;
   		if(confime_password==new_password){
   		  cout << "\n===================================\n";
        cout << "\nSuccessfully Forgot password ! \n \n";
        cout << "===================================\n";
		   }
		   else{
		   cout << "Password confirmation not correct!" << endl;

		   }
	   }
   	else{
   		cout<<"Sorry! Your account not found! "<<endl;
   		login_Attempt++;
   }
   	if(login_Attempt==5){
				cout<<"Too many login attempts ! The program will now terminate ."<<endl;
				return 0;
				
			}
   }
      	goto Repat;

   	break;
   	case 4:
   	   cout << "Exiting program...."<<endl;
    exit(0);
	    default:
		cout<<"Invalid choice! Please enter a number between 1 and 4"<<endl;
					
goto Repat;// progarm repat until you enter not 4 .
	}

	
	
	return 0;
}
