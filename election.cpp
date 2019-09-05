#include<iostream>
using namespace std;

int bjp=0; int congres=0; int others=0;

void BJP()
{

  bjp++;
}

void Congres()
{
  congres++;
}

void Others()
{
   others++;
}

void Details()
{
   cout<<"Detail of all party \n\n";
  cout<<"\n BJP:"<<bjp<<endl;
  cout<<"\n Congres:"<<congres<<endl;
  cout<<"\n Others:"<<others<<endl;
}

void winner()
{
  if (bjp>congres)
  {
     if(bjp>others)
     cout<<"\n BJP WON BY "<<bjp-others<<" votes";
     else
     cout<<"\n Ohter party won by "<<others-bjp<<" votes";
  }
  else
  if(congres>others)
  cout<<"\n Congres won by "<<congres-others<<" votes";
  else
  cout<<"\n Other party won by "<<others-congres<<" votes";

}

int main()
{
 int a,i,party;
 cout<<"1.BJP"<<endl;
 cout<<"2.Congres"<<endl;
 cout<<"3.Others"<<endl;
 cout<<"4.Show Details"<<endl;
 cout<<"\n Enter o. of voters :";
 cin>>a;
 for(i=0;i<a;i++)
 {
    cout<<"\n enter your choice:";
    cin>>party;
    switch(party)
    {
      case 1:
		BJP();
		break;
      case 2:
        Congres();
		break;
      case 3:
        Others();
        break;
	  default:
		cout<<"invalid input";

    }
    cout<<"\n Thank you for your vote \n \n";
 }
 Details();
 cout<<"\n \n";
 winner();
 return 0;

}