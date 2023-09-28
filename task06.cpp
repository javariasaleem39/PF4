#include<iostream>
using namespace std;

void passOrFail(int score);

main()
{
int score;
cout<<"Enter your score: ";
cin>>score;
passOrFail(score);
}

void passOrFail(int score)
{
if (score>50)
	cout<<"Pass"<<endl;
else
	cout<<"Fail";
}