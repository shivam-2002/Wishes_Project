#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	for(int i=0;i<7;i++)
	{
		Sleep(20);
		cout<<"  ";
		///H
		for(int j1=0;j1<10;j1++)
		{
			Sleep(10);
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
		//A
		cout<<"  ";
		for(int j2=0;j2<12;j2++)
		{
			Sleep(10);
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
		//P
		for(int j3=0;j3<7;j3++)
		{
			Sleep(10);
			if(i==0)
			{
				cout<<"@";
			}
			else if((j3==0 || j3==6)&&(i<4))
			{
				cout<<"@";
			}
			else if(i==3)
			{
				cout<<"@";
			}
			else if(j3==0)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		//P
		for(int j4=0;j4<7;j4++)
		{
			Sleep(10);
			if(i==0)
			{
				cout<<"@";
			}
			else if((j4==0 || j4==6)&&(i<4))
			{
				cout<<"@";
			}
			else if(i==3)
			{
				cout<<"@";
			}
			else if(j4==0)
			{
				cout<<"@";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		//Y
		for(int j5=0;j5<7;j5++)
		{
			Sleep(10);
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
		
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	
	for(int i=0;i<7;i++)
	{
		Sleep(10);
		cout<<"                                                  ";
		//D
		for(int j6=0;j6<9;j6++)
		{
			Sleep(20);
			if(i==0 || i==6)
			{
				cout<<"*";
			}
			else if(j6==2 || j6==8)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		//U
		for(int j7=0;j7<7;j7++)
		{
			Sleep(10);
			if(i==6)
			{
				cout<<"*";
			}
			else if(j7==0 || j7==6)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"  ";
		//S
		for(int j8=0;j8<7;j8++)
		{
			Sleep(10);
			if(i==0 || i==3 || i==6 || (i<3 && j8==0) || (i>3 && j8==6)) {
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"  ";
		//S
		for(int j2=0;j2<7;j2++)
		{
			Sleep(10);
			if(i==0 || i==3 || i==6 || (i<3 && j2==0) || (i>3 && j2==6)) {
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"  ";
		//E
		for(int j=0;j<7;j++)
		{
			Sleep(10);
			if(i==0 || i==3 || i==6 || j==0)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		//H
		cout<<"  ";
		for(int j7=0;j7<7;j7++)
		{
			Sleep(10);
			if(j7==0 || j7==6 || i==3)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		//R
		cout<<"  ";
		for(int j=0;j<7;j++) {
			Sleep(10);
			if(i==0 || j==0 || (j==6 && i<3) || i==3 || (i>3 && i==j)) {
				cout<<"*";
			} else{
				cout<<" ";
			}
		}
		//A
		cout<<"  ";
		for(int j2=0;j2<12;j2++)
		{
			Sleep(10);
			if(j2==5-i || j2==5+i)
			{
				cout<<"*";
			}
			else if(i==3 &&(j2<5+i && j2>5-i))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
}
