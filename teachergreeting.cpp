#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	for(int i=0;i<7;i++)
	{
		//Sleep(100);
		for(int j=0;j<7;j++)
		{
			Sleep(50);
			if(i==0)
			{
				cout<<"@ ";
			}
			else if(j==3)
			{
				cout<<"@";
			}
			else
			{
				cout<<"  ";
			}
		}
		
		cout<<"  ";
		if(i>0)
		{
			cout<<" ";
		}
		for(int j1=0;j1<10;j1++)
		{
			Sleep(50);
			if(j1==0 ||j1==9)
			{
				cout<<"@";
			}
			else if(i==3)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		for(int j2=0;j2<12;j2++)
		{
			Sleep(50);
			if(j2==5-i || j2==5+i)
			{
				cout<<"@";
			}
			else if(i==3 &&(j2<5+i && j2>5-i))
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		for(int j=0;j<7;j++)
		{
			Sleep(50);
			if(j==0)
			{
				cout<<"@";
			}
			else if(j==6)
			{
				cout<<"@";
			}
			else if(i==j)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"   ";
		for(int j=0;j<7;j++)
		{
			Sleep(50);
			if(j==0)
			{
				cout<<"@";
			}
			else if(i+j==6 && i<4)
			{
				cout<<"@";
			}
			else if(i==j && i>3)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
			
		}
		
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<"                     ";
		//Y
		for(int j5=0;j5<7;j5++)
		{
			Sleep(50);
			if((j5==i || j5==6-i)&&(i<4))
			{
				cout<<"@";
			}
			else if(j5==3 && i>=4)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"     ";
		for(int j=0;j<7;j++)
		{
			Sleep(50);
			if(j==0 || j==6 || i==0 || i==6)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"   ";
		for(int j=0;j<7;j++)
		{
			Sleep(50);
			if(j==0 || j==6 || i==6)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	for(int i=0;i<7;i++)
	{
		Sleep(50);
		for(int j=0;j<7;j++)
		{
			Sleep(50);
			if(j==0 || j==6 || (i==j && i<4) || (i+j==7 && i<4))
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		for(int j2=0;j2<12;j2++)
		{
			Sleep(50);
			if(j2==5-i || j2==5+i)
			{
				cout<<"@";
			}
			else if(i==3 &&(j2<5+i && j2>5-i))
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		if(i==0)
		{
			cout<<"&";
		}
		else
		{
			cout<<" ";
		}
		cout<<"  ";
		for(int j2=0;j2<12;j2++)
		{
			Sleep(50);
			if(j2==5-i || j2==5+i)
			{
				cout<<"@";
			}
			else if(i==3 &&(j2<5+i && j2>5-i))
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		for(int j=0;j<7;j++)
		{
			Sleep(50);
			if(j==0 || j==6 || (i==j && i<4) || (i+j==7 && i<4))
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
