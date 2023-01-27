#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

struct Candidate
{
	char name1[50];
	char name2[50];
	char fname1[50];
	char fname2[50];
	int age;
	int halka;
	double cnic;
	char qualification[100];
};
struct Voter
{
	char name1[50];
	char name2[50];
	int halka;
	int age;
	double cnic;
};


int main()
{
	int option ,c1 ,vote[11]={0} ,v1;
	struct Candidate candidate;
	struct Voter voter;
	ofstream candidateData;
	
	c1=0;
	//welcome menue
	system("color 3f");
	cout<<"\t\t\t||        ||"<<endl;
	cout<<"\t\t\t||        ||"<<endl;
	cout<<"\t\t\t||  //\\\\  ||"<<endl;
	cout<<"\t\t\t|| //  \\\\ ||"<<endl;
	cout<<"\t\t\t||//    \\\\||elcome to Elections 2023"<<endl;
	getch();
	start:system("cls");
	system("color b0");
	
	//Options
	cout<<"\t\t\tSelect an option:\n\n\t\t\t1)Apply for a seat\n\t\t\t2)Cast a vote\n\t\t\t3)Check Results"<<endl;
	cout<<"\t\t\t";
	cin>>option;
	
	//Applying for a seat
	if (option==1)
	{
		
		system("cls");
		system("color f6");
		cout<<"Enter the following requirments"<<endl<<endl;
		cout<<"Name: ";
		cin>>candidate.name1>>candidate.name2;
		cout<<"Father Name: ";
		cin>>candidate.fname1>>candidate.fname2;
		cout<<"Age: ";
		cin>>candidate.age;
		cout<<"CNIC: ";
		cin>>candidate.cnic;
		cout<<"Qualification: ";
		cin>>candidate.qualification;
		cout<<"Enter your halka No(1-342)";
		cin>>candidate.halka;
		if (candidate.age>=25 && candidate.age<=65 &&candidate.halka>0 && candidate.halka<=342)
		{
			cout<<"you are eligiable"<<endl;
			candidateData.open("data.txt");
			candidateData<<"Name :"<<candidate.name1<<" "<<candidate.name2<<endl;
			candidateData<<"Father Name :"<<candidate.fname1<<" "<<candidate.fname2<<endl;
			candidateData<<"Age :"<<candidate.age<<endl;
			candidateData<<"CNIC :"<<candidate.cnic<<endl;
			candidateData<<"Qualification :"<<candidate.qualification;
			candidateData.close();
			c1=1;
		}
		else
		{
			system("color c0");
			cout<<"you are not eligible";
		}
		goto start;
	}
	
	//Casting a vote
	else if(option==2)
	{
		system("cls");
		system("color 5f");
		cout<<"Name: ";
		cin>>voter.name1>>voter.name2;
		cout<<"CNIC: ";
		cin>>voter.cnic;
		cout<<"Age";
		cin>>voter.age;
		cout<<"Enter Your Halka Number: ";
		cin>>voter.halka;
		if(voter.age<=18)
		{
			if(voter.halka==candidate.halka)
			{
				system("cls");
				cout<<"Select the party you want to vote for: "<<endl;
				cout<<"1)Pakistan Peoples Party"<<endl;
				cout<<"2)Pakistan Muslim League (N)"<<endl;
				cout<<"3)Pakistan Muslim League (Q)"<<endl;
				cout<<"4)Muttahida Qaumi Movement"<<endl;
				cout<<"5)Awami National Party"<<endl;
				cout<<"6)National Peoples Party"<<endl;
				cout<<"7)Balochistan National Party "<<endl;
				cout<<"8)Pakistan Tehreek-e-Insaf"<<endl;
				cout<<"9)Jamiat Ulema-e-Islam (F)"<<endl;
				cout<<"10)"<<candidate.name1<<" "<<candidate.name2<<"(Independent)"<<endl;
				cin>>v1;
				if(v1<11)
				{
					vote[v1]++;
				}
				else
				{
					goto invalid;
		
				system("cls");
				cout<<"Select the party you want to vote for: "<<endl;
				cout<<"1)Pakistan Peoples Party"<<endl;
				cout<<"2)Pakistan Muslim League (N)"<<endl;
				cout<<"3)Pakistan Muslim League (Q)"<<endl;
				cout<<"4)Muttahida Qaumi Movement"<<endl;
				cout<<"5)Awami National Party"<<endl;
				cout<<"6)National Peoples Party"<<endl;
				cout<<"7)Balochistan National Party "<<endl;
				cout<<"8)Pakistan Tehreek-e-Insaf"<<endl;
				cout<<"9)Jamiat Ulema-e-Islam (F)"<<endl;
				cout<<"10)Independent"<<endl;
				cin>>v1;
				}
				if(v1<11)
				{
					vote[v1]++;
				}
				else
				{
					goto invalid;
				}
	}
		else
		{
			cout<<"You Are not eligable";
		}
		
		
	
		system("pause");
		cout<<"Thank You"<<endl;
		system("pause");
		goto start;
	}
	
	//results
	else if(option==3)
	{
		system("color e0");
		system("cls");
		
		
		system("pause");
		goto start;
	}
	
	//invalid selectoins
	else
	{	invalid:
		system("cls");
		system("color c0");
		cout<<"invalid selection"<<endl;
		system("pause");
		goto start;
	}	
}
}


