#include<iostream>
#include<time.h>
#include<cstring>
using namespace std;
int main()
{ 
    char ch;
	cout<<"HELLO LETS PLAY ROCK PAPER AND SCISSOR\n";
	cout<<"select your choice :\nrock(click r)?\tpaper(click p)?\tscissor(click s)?\n";
	cin>>ch;
	char a[3]={'r','p','s'};
	int index=rand()%3;
	cout<<"the computer chose "<<a[index]<<endl;
	if(ch==a[index])
	{
		cout<<"the game is a draw\n";
	}
	if(ch=='r'&&a[index]=='s')
	{
		cout<<"you win\n";
	}
	if(ch=='s'&&a[index]=='r')
	{
		cout<<"you lose\n";
	}
	if(ch=='p'&&a[index]=='r')
	{
		cout<<"you win\n";
	}
	if(ch=='r'&&a[index]=='p')
	{
		cout<<"you lose\n";
	}
	if(ch=='s'&&a[index]=='p')
	{
		cout<<"you win\n";
	}
	if(ch=='p'&&a[index]=='s')
	{
		cout<<"you lose\n";
	}
}