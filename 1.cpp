#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class libary{
	
	private:
		int mBL=0;
		string lName;
		string lPass;
		string id;
		string name;
		string author;
		float price;
		string publisher;
		string genre;
		string avalibility;
		
		string bName;
		string bId;
		long phN;
		string iDate;
		long fRate=0;
	
	public:	
		void menu();
		void adminLogin();
		void adminMenu();
		void loginLibarian();
		void loginLibariannow();
		void changeFine();
		void maxBarrow();
		void libarian();
		void inputBook();
		void updateBook();
		void deleteBook();
		void serchBook();
		void aviCheck();
		void maxBorrowCh();
		void issueAdd();
		void issueBook();
		void addBorrowers();
		void returnBook();
		void deleteBorrowers();
		void searchBorrowers();
		
		
		
};
	


void libary::menu(){

int uInput;		
	system("cls");
	
//Main Menu	
	cout<<"\t\t\t __________________________________________________________________"<<endl;
	
	cout<<"\t\t\t|                                                                  |"<<endl;

	cout<<"\t\t\t|              -------Libary Management System-------              |"<<endl;
	
	cout<<"\t\t\t|                                                                  | "<<endl;
	
	cout<<"\t\t\t|                                                                  |"<<endl;
	
	cout<<"\t\t\t|                                                                  |"<<endl;
	
	cout<<"\t\t\t|                          01: Admin                               |"<<endl;
	
	cout<<"\t\t\t|                                                                  |"<<endl;
	
	cout<<"\t\t\t|                          02: Libarian                            |"<<endl;

	 
	cout<<"\t\t\t|                                                                  |"<<endl;
	
	cout<<"\t\t\t|                          03: Exit                                |"<<endl;
	
	cout<<"\t\t\t|                                                                  |"<<endl;
	
	cout<<"\t\t\t|                                                                  |"<<endl;
	
	cout<<"\t\t\t|__________________________________________________________________|"<<endl;

	

//get input
	cout<<"Enter your Choise? ";
	cin>>uInput;


	switch(uInput){
		
		case 1:{
			
			int logInput;	
			cout<<"01) Login Admin---------"<<endl;
			cout<<"02) Back--------------"<<endl;
				
			cout<<"Enter Your Choise? ";
			cin>>logInput;
				
			if(logInput==1){
				adminLogin();
			}
			else if(logInput==2){
				menu();
			}
			else{
				cout<<"Try Again Choise in the Given Option \a"<<endl;
				menu();
			}
			
			break;	
		}
		
		case 2:{
			int logInput2;	
			cout<<"01) Login Libarian---------"<<endl;
			cout<<"02) Back--------------"<<endl;
				
			cout<<"Enter Your Choise? ";
			cin>>logInput2;
				
			if(logInput2==1){
				loginLibariannow();
			}
			else if(logInput2==2){
				menu();
			}
			else{
				cout<<"Try Again Choise in the Given Option \a"<<endl;
				menu();
			}
			
 
			break;
		}
		case 3:{
			exit(0);
			break;
	
		}
	
	
		default:{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			menu();
			
			break;
		}
	
	
	
	}

}





void libary::adminLogin(){


	system("cls");
	string adminPass; 
	string adminName,aPwd;
	
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       -------ADMIN LOGIN-------        "<<endl;
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	
	
	fstream File;						
	
	File.open("AdminUserPwd.txt",ios::out);		
	                                                                          
	
	aPwd = "1234";
	
	File << adminName<< " " << aPwd ;			
	
	File.close();					
	
	
	
	
	cout<<"\n\n\t\t\t\tEnter Your User Name: ";
	cin>>adminName;

	cout<<"\n\n\t\t\t\tEnter Your Password: ";
	cin>>adminPass;	
		
	if(aPwd==adminPass){
		adminMenu();
	}
	
	else{
		cout<<"Wrong Password Try Again"<<endl;
	}	adminLogin();	

}







void libary::adminMenu(){

int adInput;
	
	system("cls");
	system("Color 0C");
		start:
		cout<<"\t\t\t __________________________________________________________________"<<endl;
		
		cout<<"\t\t\t|                   ----Welcome to Admin Menu----                  |"<<endl;
		
		cout<<"\t\t\t|                                                                  |"<<endl;
	
		cout<<"\t\t\t|          01.Change the Fine Rate                                 |"<<endl;
		
		cout<<"\t\t\t|          02.Modify Maximum Borrowing Limit                       |"<<endl;
		
		cout<<"\t\t\t|          03.Login to Libarian                                    |"<<endl;
		
		cout<<"\t\t\t|          04.Back                                                 |"<<endl;
		
		cout<<"\t\t\t|          05.Exit                                                 |"<<endl;
		
		cout<<"\t\t\t|__________________________________________________________________|"<<endl;
	
	
	
		cout<<"Enter your Choise? ";
		cin>>adInput;


		switch(adInput){
			
			case 1:{
				changeFine();
				
				break;
			}
			case 2:{
				
	 			maxBarrow();
				break;
			}
			
			case 3:{
				
				loginLibarian();
				break;
			}
			case 4:{
				menu();
				break;
			}
			case 5:{
				exit(0);
				break;
			}
			default:{
				menu();
				break;
			}
		}
		
}



void libary::loginLibarian(){
	
	system("cls");
	cin.ignore();
	cout<<"Enter Libarian User Name: ";
	getline(cin,lName);                                         
	
	cout<<"Enter Libarian Password: ";
	cin>>lPass;
	
fstream File;
			
		File.open("libarianlog.txt",std::ios::out);
		
		
			if(!File){
				cout<<"File Open Failed..!";
			}else{
				File<<lName<<" "<<lPass<<endl;
				cout<<"Sucessful... Go it & Check it Out "<<endl;
				cout<<"---------------------------------"<<endl;	
				}
			
		File.close();
	
	
int ch;
		cout<<"1)Back"<<endl;
		cout<<"2)Exit"<<endl;
		
		
		cout<<"Enter Your Choise? ";
		cin>>ch;
			
			if(ch==1){
				
				adminMenu();
			}
			
			
			else if(ch==2){
				exit(0);
			}
			
			else{
			cout<<"Try Again Wrong Input"<<endl;  
			adminMenu();	
				
		}
	
	
}



void libary::loginLibariannow(){
	
	
	
	fstream File;

	File.open("libarianlog.txt",std::ios::in);
	
	if(!File){
		cout<<"File Cannot Be Opened !!";
	}else{
		
		while(!File.eof()){
			File>>lName>>lPass;
			
		}
		cout<<"-------------------------------------"<<endl;
		
	}
	File.close();
	
	
	
	
	
string nlName,nlPass;	
	
	
	cout<<"\n\n\t\t\t\tEnter Your User Name: ";
	cin>>nlName;

	cout<<"\n\n\t\t\t\tEnter Your Password: ";
	cin>>nlPass;	
		
	if(lPass==nlPass){
		libarian();
	}
	
	else{
		cout<<"Wrong Password Try Again"<<endl;
	}	menu();	

}





void libary::changeFine(){
	
system("cls");
int ch;


	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       -------FINE RATE-------        "<<endl;
	cout<<"\t\t\t\t---------------------------------------"<<endl;	
	
	
	
	fstream File;

	File.open("fine.txt",std::ios::in);
	
	if(!File){
		cout<<"File Cannot Be Opened !!";
	}else{
		
		while(!File.eof()){
			File>>fRate;
			
		}
		cout<<"-------------------------------------"<<endl;
		
	}
	File.close();
	
	
	
	cout<<"\n\nCurent Rate(Rs): "<<fRate<<endl;
	cout<<"\n---------------------------------------"<<endl;
	
	cout<<"1)Change the Fine Rate"<<endl;                                           
	cout<<"2)Back"<<endl;
	
	
	cout<<"Enter Your Choise? ";
	cin>>ch;
		
		if(ch==1){
			
			cout<<"\t\t\tChange the Fine Rate(Rs): ";
			cin>>fRate;
		
		}
		else if(ch==2){
			adminMenu();
		}
		
		else{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			adminMenu();
			
		}
		
			
	
		
			
			File.open("fine.txt",std::ios::out);
		
		
			if(!File){
				cout<<"File Open Failed..!";
			}else{
					cout<<"Sucessful... Go it & Check it Out "<<endl;
					File<<fRate<<endl;
					
					
				}
			File.close();
	
	
	cout<<"-------------------------------------"<<endl;
	cout<<"\n3)Back to Main Menu"<<endl;
	cout<<"4)Exit"<<endl;
	
	
	cout<<"\nEnter Your Choise? ";
	cin>>ch;
		
		if(ch==3){
			adminMenu();
			
		}
		else if(ch==4){
			exit(0);
		}
	
		else{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			adminMenu();
				
		}
			
}	





void libary::maxBarrow(){
	
		
system("cls");

int ch;


	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t -------Maximum Borrowing Limit------- "<<endl;
	cout<<"\t\t\t\t---------------------------------------"<<endl;	
	
	
	fstream File;

	File.open("maximumbook.txt",std::ios::in);
	
	if(!File){
		cout<<"File Cannot Be Opened !!";
	}else{
		
		while(!File.eof()){
			File>>mBL;
			
		}
		cout<<"-------------------------------------"<<endl;
		
	}
	File.close();
	
	
	
	cout<<"\n\nCurent Maximum Borrowing Limit: "<<mBL<<endl;
	cout<<"\n---------------------------------------"<<endl;
	
	
	
	cout<<"1)Change Maximum Borrowing Limit"<<endl;
	cout<<"2)Back"<<endl;
	
	
	cout<<"Enter Your Choise? ";
	cin>>ch;
		
		if(ch==1){
			
			cout<<"\t\t\tChange Maximum Borrowing Limit: ";
			cin>>mBL;
		
		}
		else if(ch==2){
			adminMenu();
		}
		
		else{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			adminMenu();
			
		}
	
			
			File.open("maximumbook.txt",std::ios::out);
		
		
			if(!File){
				cout<<"File Open Failed..!";
			}else{
					cout<<"Sucessful... Go it & Check it Out "<<endl;
					File<<mBL<<endl;
					
					
				}
			File.close();
	
	cout<<"-------------------------------------"<<endl;
	cout<<"\n3)Back to Main Menu"<<endl;
	cout<<"4)Exit"<<endl;
	
	
	cout<<"\nEnter Your Choise? ";
	cin>>ch;
		
		if(ch==3){
			adminMenu();
			
		}
		else if(ch==4){
			exit(0);                                                            
		}
	
		else{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			adminMenu();
			
		}
	
	
	
}








void libary::libarian(){
	
int lbInput;
int adInput;
int seInput;
int badInput;
int	bseInput;	
	
	do{
		system("Color 03");
		system("cls");
		start:
			
		cout<<" \t\t\t ___________________________________________________________________"<<endl;
		
		cout<<"\t\t\t|                 ----Welcome to Libarian Menu----                  |"<<endl;
		
		cout<<"\t\t\t|                                                                   |"<<endl;
		
		cout<<"\t\t\t|                   01.Add and Delete Books                         |"<<endl;
		
		cout<<"\t\t\t|                   02.Search and Update Books                      |"<<endl;
		
		cout<<"\t\t\t|                   03.Issue Books                                  |"<<endl;
		
		cout<<"\t\t\t|                   04.Accept Returned Books                        |"<<endl;
		
		cout<<"\t\t\t|                   05.Add and Delete Borrowers                     |"<<endl;
		
		cout<<"\t\t\t|                   06.Search and Update Borrowers                  |"<<endl;
		
		cout<<"\t\t\t|                   07.Back                                         |"<<endl;
		
		cout<<"\t\t\t|                   08.Exit                                         |"<<endl;
		
		cout<<"\t\t\t|___________________________________________________________________|"<<endl;
	
	cout<<"Enter Your Choise? ";
	cin>>lbInput;
	
	switch(lbInput){
		
		case 1:{
			cout<<"01) Add Books---------"<<endl;
			cout<<"02) Delete Books------"<<endl;
			cout<<"03) Back--------------"<<endl;
			
			cout<<"Enter Your Choise? ";
			cin>>adInput;
			
			if(adInput==1){
				inputBook();
			}
			else if(adInput==2){
				deleteBook();
			}
			else if(adInput==3){
				goto start;
			}
			else{
				cout<<"Try Again Choise in the Given Option \a"<<endl;
			}
			
			break;
			system("cls");
		}
		case 2:{
			cout<<"01) Search Books---------"<<endl;
			cout<<"02) Update Books------"<<endl;
			cout<<"03) Back--------------"<<endl;
			
			cout<<"Enter Your Choise? ";
			cin>>bseInput;
			
			if(bseInput==1){
				serchBook();
			}
			else if(bseInput==2){
				updateBook();
			}
			else if(bseInput==3){
				goto start;
			}
			else{
				cout<<"Try Again Choise in the Given Option \a"<<endl;
			}
			
			break;
			system("cls");
		

		}
		
		case 3:{
			issueBook();
			break;
		}
		
		case 4:{
			returnBook();
			break;
		}
		
		case 5:{
			cout<<"01) Add Borrowers ----"<<endl;
			cout<<"02) Delete Borrowers ----"<<endl;
			cout<<"03) Back-----------------"<<endl;
			
			cout<<"Enter Your Choise? ";
			cin>>badInput;
			
			if(badInput==1){
				addBorrowers();                           
			}
			else if(badInput==2){
				deleteBorrowers();
			}
			else if(badInput==3){
				goto start;
			}
			else{
				cout<<"Try Again Choise in the Given Option \a"<<endl;
			}
			
			break;
			system("cls");
		
			
			
	
		}
		
		case 6:{
			
			cout<<"01) Search Borrowers ----"<<endl;
			cout<<"02) Update Borrowers ----"<<endl;
			cout<<"03) Back-----------------"<<endl;
			
			cout<<"Enter Your Choise? ";
			cin>>bseInput;
			
			if(bseInput==1){
				searchBorrowers();
			}
			else if(bseInput==2){
				
			}
			else if(bseInput==3){
				goto start;
			}
			else{
				cout<<"Try Again Choise in the Given Option \a"<<endl;
			}
			                                                                        
			break;
			system("cls");
		
			
			
			
			break;
		}
		
		case 7:{
			menu();
			break;
		}
		
		default:{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			libarian();
			
			break;
		}
		
		
	}
				
 }while(lbInput!=8);

}

                                   





void libary::inputBook(){

int ch;

system("cls");
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       -------Add BOOK-------        "<<endl;
	cout<<"\t\t\t\t---------------------------------------"<<endl;


	cin.ignore();
	cout<<"Enter Your Book Id: ";
	getline(cin,id);
	                                                                      
	
	cout<<"Enter Your Book Name: ";
	getline(cin,name);	


	cout<<"Enter Your Book Publisher: ";
	getline(cin,publisher);
	
	
	cout<<"Enter Your Book Author: ";
	getline(cin,author);
	
	cout<<"Enter Your Book Price: ";
	cin>>price;
	

	cout<<"---------------------------------"<<endl;

	
	fstream File;
			
		File.open("Book.txt",std::ios::app);
		
		
			if(!File){
				cout<<"File Open Failed..!";
			}else{
				File<<id<<" "<<name<<" "<<publisher<<" "<<author<<" "<<price<<endl;
				cout<<"Sucessful... Go it & Check it Out "<<endl;
				cout<<"---------------------------------"<<endl;	
				}
			
		File.close();

		cout<<"\n01)Add More Book----"<<endl;
		cout<<"02)Back-------------"<<endl;

        cout<<"Enter Your Choise? "<<endl;
        cin>>ch;
        
        if(ch==1){
        	inputBook();
		}
        else if(ch==2){
        	libarian();
        	
		}
		else{
			cout<<"Try again Please Select in the Given Option\a"<<endl;
			libarian();
		}
    
}



void libary::deleteBook(){

system("cls");	
bool found=false;	
string nid;
int ch;
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		cout<<"\t\t\t\t       ------DELETE BOOK-------        "<<endl;
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		cout<<"Enter Id Which One Want Delete ";
		cin>>nid;
		
		fstream File;
		fstream temp;
		                                                                               
		
			//open the input file in read mode(in) 
			File.open("Book.txt",ios::in);                                               
			//open the temp file in write mode(out)
			temp.open("temp.txt",ios::out);
			
			//if one of the files open has faild
			if(!File||!temp){
				
				cout<<"File can not be open"<<endl;
			}else{
				while(File>>id>>name>>publisher>>author>>price){
					if(nid==id){
						found=true;
					}else{
						temp<<id<<" "<<name<<" "<<publisher<<" "<<author<<" "<<price<<endl;
					}
				}
				
			}
			File.close();
			temp.close();
			
			if(found){
				remove("Book.txt");
				rename("temp.txt","Book.txt");
				cout<<"Record Has Been Deleted";
					
			}else{
				remove("temp.txt");
				cout<<"Record Not Found";
			}	

		cout<<"\n01)Delete More Book----"<<endl;
		cout<<"02)Back-------------"<<endl;

        cout<<"Enter Your Choise? "<<endl;
        cin>>ch;
        
        if(ch==1){
        	deleteBook();
		}
        else if(ch==2){
        	libarian();
        	
		}
		else{
			cout<<"Try again Please Select in the Given Option\a"<<endl;
			libarian();
		}





}




void libary::serchBook(){


system("cls");
string nid;
bool found=0;
int ch;

	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       -------SEARCH BOOK-------        "<<endl;	
	cout<<"\t\t\t\t---------------------------------------"<<endl;


		cout<<"Enter Id Which One Want to Search: ";
		cin>>nid;
		
		fstream File;
		
		
			//open the input file in read mode(in) 
			File.open("Book.txt",ios::in);
			
			//if one of the files open has faild
			if(!File){
				
				cout<<"File can not be open"<<endl;
			}else{
				while(File>>id>>name>>publisher>>author>>price){
					if(nid==id){
						cout<<"---------------------------------"<<endl;
						cout<<"Book Id    :"<<id<<endl;
						cout<<"Book Name  :"<<name<<endl;
						cout<<"Publisher  :"<<publisher<<endl;
						cout<<"Author     :"<<author<<endl;
						cout<<"---------------------------------"<<endl;
						found++;
					}
			
						
					}
					if(found==0){
						cout<<"Try Again...Book Id Not Found"<<endl;
					}
				}
				File.close();	



		cout<<"\n01)Search More Book----"<<endl;
		cout<<"02)Back-------------"<<endl;

        cout<<"Enter Your Choise? ";
        cin>>ch;
        
        if(ch==1){
        	serchBook();
		}
        else if(ch==2){
        	libarian();
        	
		}
		else{
			cout<<"Try again Please Select in the Given Option\a"<<endl;
			libarian();
		}


}
			
			
			
									
	








void libary::updateBook(){

int found=0;
string bookId;
int ch;
	
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       ------UPDATE BOOK-------        "<<endl;
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	
	fstream File,File1;	
	File.open("Book.txt",std::ios::in|ios::out);	
		if(!File){
			cout<<"Sorry..Data is Not Found";
			File.close();
		}
		else{
			cout<<"\nEnter Your Book Id Which You Want to Modify: ";
			cin>>bookId;
			File1.open("temp.txt",std::ios::app |std::ios::out );
		
			
			while(!File.eof()){
				
				if(bookId==id){
					
				File<<id<<" "<<name<<" "<<publisher<<" "<<author<<" "<<price<<endl;
				
				}
				else{
					
					
					cout<<"---------------------------------"<<endl;
					cin.ignore();
					cout<<"Enter Your Book Id: ";
					getline(cin,id);
					
					
					cout<<"Enter Your Book Name: ";
					getline(cin,name);	
				
				
					cout<<"Enter Your Book Publisher: ";
					getline(cin,publisher);
				
					cout<<"---------------------------------"<<endl;
					
					File<<id<<" "<<name<<" "<<publisher<<endl;
				
					found++;
					cout<<"Sucessfuly Updated.... "<<endl;
					libarian();	
				}
					
			
					if(found==0){
						cout<<"Book Id is Not Found... "<<endl;
						libarian();
						
					}
			}
			
			File.close();
			File1.close();
			remove("Book.txt");
			rename("temp.txt","Book.txt");
		}
	
	
		cout<<"\n01)Update More Book----"<<endl;
		cout<<"02)Back-------------"<<endl;

        cout<<"Enter Your Choise? ";
        cin>>ch;
        
        if(ch==1){
        	updateBook();
		}
        else if(ch==2){
        	libarian();
        	
		}
		else{
			cout<<"Try again Please Select in the Given Option\a"<<endl;
			libarian();
		}
	
	
}

void libary::aviCheck(){

int isInput;
int ch2;
	system("cls");
		
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		cout<<"\t\t\t\t       ------Avilibility-------        "<<endl;
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		
				

string nid;
int found=0;




		cout<<"Enter Id Which One Want to Issue: ";
		cin>>nid;
		
		fstream File;
		
		
			//open the input file in read mode(in) 
			File.open("Book.txt",ios::in);
			
			//if one of the files open has faild
			if(!File){
				
				cout<<"File can not be open"<<endl;
			}else{
				while(File>>id>>name>>publisher>>author>>price){
					if(nid==id){
						cout<<"---------------------------------"<<endl;
						cout<<"        Book is Avalibale        "<<endl;
						cout<<"---------------------------------"<<endl;
						cout<<"Book Id    :"<<id<<endl;
						cout<<"Book Name  :"<<name<<endl;
						cout<<"Publisher  :"<<publisher<<endl;
						cout<<"Author     :"<<author<<endl;
						cout<<"Price      :"<<price<<endl;
						cout<<"---------------------------------"<<endl;
						found++;
					}
					
					}
					if(found==0){
						cout<<"Try Again...Book Id Not Found"<<endl;
						
						
						cout<<"\n1) Try Again"<<endl;
						cout<<"2) Back"<<endl;
						
						cout<<"Enter Your Choise? ";
						cin>>ch2;
							
							if(ch2==1){
								aviCheck();	
							}
							else if(ch2==2){
								libarian();
							}
							else{
								cout<<"Try Again Wrong Input"<<endl;
								libarian();
							}
					}
				}
				File.close();	

		cout<<"1) Issue BooK"<<endl;
		cout<<"2) BacK"<<endl;
		
		cout<<"Enter Your Choise";
		cin>>isInput;
		
		if(isInput==1){
			issueAdd();
			
		}
		else if(isInput==2){
			libarian();
		}
		else{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			libarian();
			
		}
		
		
}

void libary::maxBorrowCh(){

int aIR;
int nIB;

	
	fstream File;

	File.open("maximumbook.txt",std::ios::in);
	
	if(!File){
		cout<<"File Cannot Be Opened !!";
	}else{
		
		while(!File.eof()){
			File>>mBL;
			
		}
		cout<<"---------------------------------"<<endl;
		
	}
	File.close();
	
	
	cout<<"How Many Book Issue for One Borrower: ";
	cin>>nIB;
	
	if(nIB<=mBL){
		aviCheck();
	}
	
	else if(nIB>mBL){
		cout<<"Noted..! Max Borrowing Limit is:"<<mBL<<endl;
		maxBorrowCh();
	}
	
	
	
}
	





void libary::issueAdd(){


bool found=false;

int addMo;	
string nid;		
		
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		cout<<"\t\t\t\t       ------ISSUE BOOK-------        "<<endl;
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		
		
		cout<<"Borrower Id: ";
		cin>>bId;
		
		cout<<"Book Id: ";
		cin>>nid;
		
		cout<<"Issue Date(M.D): ";
		cin>>iDate;
		
		
		cout<<"----------------------------------------------"<<endl;
		
		fstream File;
			
		File.open("issue.txt",std::ios::app);
		
		
			if(!File){
				cout<<"File Open Failed..!";
			}else{
				File<<bId<<" "<<nid<<" "<<iDate<<endl;
				cout<<"Sucessful... "<<endl;
				cout<<"---------------------------------"<<endl;	
				}
			

	File.close();
	
	
		
	fstream temp;
		
		
			//open the input file in read mode(in) 
			File.open("Book.txt",ios::in);
			//open the temp file in write mode(out)
			temp.open("temp.txt",ios::out);
			
			//if one of the files open has faild
			if(!File||!temp){
				
				cout<<"File can not be open"<<endl;
			}else{
				while(File>>id>>name>>publisher){
					if(nid==id){
						found=true;
					}else{
						temp<<id<<" "<<name<<" "<<publisher<<endl;
					}
				}
				
			}
			File.close();
			temp.close();
			
			if(found){
				remove("Book.txt");
				rename("temp.txt","Book.txt");
				cout<<"Book Has Been Suceessfully Issue"<<endl;
				cout<<"--------------------------------"<<endl;
				
			}else{
				remove("temp.txt");
				cout<<"Record Not Found";
			}	
	
	
		
		cout<<"1) Add More Book"<<endl;
		cout<<"2) Back"<<endl;
		
		cout<<"Enter Your Choise? ";
		cin>>addMo;			
		
		if(addMo==1){
			aviCheck();
		}
		else if(addMo==2){                                                                  
			libarian();
		}

		else{
			cout<<"Try Again Choise in the Given Option \a"<<endl;
			libarian();
			
		}
}











void libary::issueBook(){
system("cls");
int ch;
	
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       ------ISSUE BOOK-------        "<<endl;
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	
	cout<<"\n\t\t-----Please Check Avilibility of the Book Before Issue-----"<<endl;
	
	cout<<"\n1) Check Avilibility"<<endl;
	cout<<"2) Back"<<endl;
	
	cout<<"Enter Your Choise? ";
	cin>>ch;
	
	if(ch==1){
		maxBorrowCh();	
	}
						
	else if(ch==2){
		libarian();
	}
				
	else{
		cout<<"Try Again Choise in the Given Option \a"<<endl;
		libarian();
				
	}		
			
											
						
				
		
}
	


void libary::returnBook(){
	





}

	
	
	
	
	


void libary::addBorrowers(){

int borrowerInput;

system("cls");
	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       -------Add BORROWERS-------     "<<endl;
	cout<<"\t\t\t\t---------------------------------------"<<endl;


	cin.ignore();
	cout<<"Enter Your Borrower Id: ";
	getline(cin,bId);
	
	
	cout<<"Enter Your Borrower Name: ";
	getline(cin,bName);	


	cout<<"Enter Your Borrower Phone Number: ";
	cin>>phN;

	cout<<"---------------------------------"<<endl;

	
	fstream File;
			
		File.open("Borrowers.txt",std::ios::app);
		
		
			if(!File){
				cout<<"File Open Failed..!";
			}else{
				File<<bId<<" "<<bName<<" "<<phN<<endl;
				cout<<"Sucessful... Go it & Check it Out "<<endl;
				cout<<"---------------------------------"<<endl;	
				}
			
		File.close();

		cout<<"\n01)Add More Borrowers----"<<endl;
		cout<<"02)Back-------------"<<endl;

        cout<<"Enter Your Choise? "<<endl;
        cin>>borrowerInput;
        
        if(borrowerInput==1){
        	addBorrowers();
		}
        else if(borrowerInput==2){
        	libarian();
        	
		}
		else{
			cout<<"Try again Please Select in the Given Option\a"<<endl;
			libarian();
		}

	
}



void libary::deleteBorrowers(){
	
system("cls");	
bool found=false;	
string nid;
int ch;
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		cout<<"\t\t\t\t       ------DELETE BORROWERS-------        "<<endl;
		cout<<"\t\t\t\t---------------------------------------"<<endl;
		cout<<"Enter Id Which One Want Delete ";
		cin>>nid;
		
		fstream File;
		fstream temp;
		
		
			//open the input file in read mode(in) 
			File.open("Borrowers.txt",ios::in);
			//open the temp file in write mode(out)
			temp.open("temp.txt",ios::out);
			
			//if one of the files open has faild
			if(!File||!temp){
				
				cout<<"File can not be open"<<endl;
			}else{
				while(File>>bId>>bName>>phN){
					if(nid==bId){
						found=true;
					}else{
						temp<<bId<<" "<<bName<<" "<<phN<<endl;
					}
				}
				
			}
			File.close();
			temp.close();
			
			if(found){
				remove("Borrowers.txt");
				rename("temp.txt","Borrowers.txt");
				cout<<"Record Has Been Deleted";
				
			}else{
				remove("temp.txt");
				cout<<"Record Not Found";
			}	
	
	
		cout<<"\n01)Delete More Borrowers----"<<endl;
		cout<<"02)Back-------------"<<endl;

        cout<<"Enter Your Choise? ";
        cin>>ch;
        
        if(ch==1){
        	deleteBorrowers();
		}
        else if(ch==2){
        	libarian();
        	
		}
		else{
			cout<<"Try again Please Select in the Given Option\a"<<endl;
			libarian();
		}
	
	
}



void libary::searchBorrowers(){

system("cls");
string nid;
int found=0;
int ch;

	cout<<"\t\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t\t       -------SEARCH BORROWERS-------  "<<endl;	
	cout<<"\t\t\t\t---------------------------------------"<<endl;


		cout<<"Enter Id Which One Want to Search: ";
		cin>>nid;
		
		fstream File;
		
		
			//open the input file in read mode(in) 
			File.open("Borrowers.txt",ios::in);
			
			//if one of the files open has faild
			if(!File){
				
				cout<<"File can not be open"<<endl;
			}else{
				while(File>>bId>>bName>>phN){
					if(nid==bId){
						cout<<"---------------------------------"<<endl;
						cout<<"Borrowers Id    :"<<bId<<endl;
						cout<<"Borrowers Name  :"<<bName<<endl;
						cout<<"Phone Number    :"<<phN<<endl;
						cout<<"---------------------------------"<<endl;
						found++;
					}
					
					}
					if(found==0){
						cout<<"Try Again...Borrow Id Not Found"<<endl;
					}
				}
				File.close();	
			
			cout<<"\n01)Search More Borrowers----"<<endl;
			cout<<"02)Back-------------"<<endl;

	        cout<<"Enter Your Choise? ";
	        cin>>ch;
	        
	        if(ch==1){
	        	searchBorrowers();
			}
	        else if(ch==2){
	        	libarian();
	        	
			}
			else{
				cout<<"Try again Please Select in the Given Option\a"<<endl;
				libarian();
			}
			
			
				
	
}

                                                                   













	


int main(int argc, char** argv) {


system("cls");
	system("Color CF"); // "Color XY", X - backgroung color, Y - text color

	cout<<"\n\n\n\n\n\n\n\n\t\t\t * --------------WELCOME TO LIBARY MANAGEMENT SYSTEM *-------------"<<endl;
	getch();

	libary project;
	project.menu();
	return 0;
}	
	
