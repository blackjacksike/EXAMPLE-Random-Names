#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
	srand((unsigned)time(NULL));
	string fullName;
	vector<string> firstName;
	firstName.push_back("Alphonse");
	firstName.push_back("Antoine");
	firstName.push_back("Amelia");
	firstName.push_back("Gaston");
	firstName.push_back("John");
	firstName.push_back("Peter");
	firstName.push_back("William");
	firstName.push_back("Jack");
	vector<string> lastName;
	lastName.push_back("Bell");
	lastName.push_back("Crane");
	lastName.push_back("Dreyfus");
	lastName.push_back("Gray");
	lastName.push_back("Brown");
	int rand1=rand()%firstName.size();
	int rand2=rand()%lastName.size();
	fullName=firstName[rand1]+" "+lastName[rand2];
	cout<<fullName<<endl;
	cout<<"Press Enter to exit"<<endl;
	std::getchar();
	return 0;
}