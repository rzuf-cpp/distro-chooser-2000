#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

string distro1;
string distro2;

int max;
int choose;

int end;

int main()
{
    int max = 101;
    cout<<"2 operating sistems to choose"<<endl;
    //I am not good in english
    cout<<"distro one:";
    cin>>distro1;
    cout<<"distro two:";
    cin>>distro2;
    srand(time(0));
    choose = rand()%max;
    
	if(choose <= 50)
	{
		cout<<distro1<<" is a winner"<<endl;
	}
	else if(choose >= 50)
	{
		cout<<distro2<<" is a winner"<<endl;
	}
	
	cout<<"choose any number, and then press enter key to exit"<<endl;
	cin>>end;
	    
    return 0;
}


