#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

string distro1;
string distro2;

int max;
int chose;

int end;

int main()
{
    int max = 100;
    cout<<"2 operating sistems to chose"<<endl;
    //wiem ?e kalecze angielski
    cout<<"distro one:";
    cin>>distro1;
    cout<<"distro two:";
    cin>>distro2;
    srand(time(0));
    chose = rand()%max;
    
	if(chose <= 50)
	{
		cout<<distro1<<" is a winner"<<endl;
	}
	else if(chose >= 50)
	{
		cout<<distro2<<" is a winner"<<endl;
	}
	
	cout<<"chose the nuber and pres the enter to exit"<<endl;
	cin>>end;
	    
    return 0;
}


