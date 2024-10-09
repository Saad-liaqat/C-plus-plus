#include<iostream>
using namespace std;
int main()
{
    int choice,amount;
	string phoneno;
	cout<<"please enter your mobile number";
	cin>>phoneno;
	cout<<"please select network \n1 for jazz\n2 for telenor \n3 for zong";
	cin>>choice;
	while(choice>3)
	{
		cout<<"please select network from above option";
		cin>>choice;
	}
	switch(choice)
	{
	
	    case 1:
	    cout<<"please enter amount for eassyload ( min 100)";
	    cin>>amount;
	    while(amount<100)
	    {
	    	cout<<"min amount should be 100";
	    	cin>>amount;
		}
	    cout<<"easyload sucessfull";
	    break;
	    case 2:
	    		    cout<<"please enter amount for eassyload ( min 30)";
	    cin>>amount;
	    while(amount<30)
	    {
	    	cout<<"min amount should be 30";
	    	cin>>amount;
		}
	    cout<<"easyload sucessfull";
	    break;
	    case 3:
	    	cout<<"please enter amount for eassyload ( min 50)";
	    cin>>amount;
	    while(amount<50)
	    {
	    	cout<<"min amount should be 50";
	    	cin>>amount;
		}
	    cout<<"easyload sucessfull";
	    break;
	}
}