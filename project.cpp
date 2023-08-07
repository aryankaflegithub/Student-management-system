#include<iostream>
#include<conio.h>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

class execute{	public: 

void enter()
{
	int num=0;
	cout<<"How many students do you want to enter??"<<endl;
	cin>>num;
	if(total==0)
	{
		total=num+total;
		for(int i=0;i<num;i++)
		{
			cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
			cout<<"Enter name ";
			cin>>arr1[i];
			cout<<"Enter Roll no ";
			cin>>arr2[i];
			cout<<"Enter facalty ";
			cin>>arr3[i];
			cout<<"Enter class ";
			cin>>arr4[i];
			cout<<"Enter contact ";
			cin>>arr5[i];
		}
	}
	else
	{for(int i=total;i<num+total;i++)
		{
			cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
			cout<<"Enter name ";
			cin>>arr1[i];
			cout<<"Enter Roll no ";
			cin>>arr2[i];
			cout<<"Enter facalty ";
			cin>>arr3[i];
			cout<<"Enter class ";
			cin>>arr4[i];
			cout<<"Enter contact ";
			cin>>arr5[i];
		}
		total=num+total;
	}
}

void show()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		for(int i=0;i<total;i++)
		{
			cout<<"\nData of Student "<<i+1<<endl<<endl;
			cout<<"Name "<<arr1[i]<<endl;
			cout<<"Roll no "<<arr2[i]<<endl;
			cout<<"Facalty "<<arr3[i]<<endl;
			cout<<"Class "<<arr4[i]<<endl;
			cout<<"Contact "<<arr5[i]<<endl;
		}
	}
}

void search()
{ int count;
	if(total==0)
	{
	cout<<"No data is entered"<<endl;
	}
	else{
		string rollno;
		cout<<"Enter the roll no of student"<<endl;
		cin>>rollno;
		count= 0;
		for(int i=0;i<total;i++)
		{ 
			if(rollno==arr2[i])
			{
				cout<<"Name "<<arr1[i]<<endl;
				cout<<"Roll no "<<arr2[i]<<endl;
				cout<<"Facalty "<<arr3[i]<<endl;
				cout<<"Class "<<arr4[i]<<endl;
				cout<<"Contact "<<arr5[i]<<endl; 
				count ++;
			}
		}
	}
	if(count==0) cout<<"Invalid input"<<endl;
}

void update()
{ int count;
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		string rollno;
		cout<<"Enter the roll no of student which you want to update"<<endl;
		cin>>rollno;
		count= 0;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				cout<<"\nPrevious data"<<endl<<endl;
				cout<<"Data of Student "<<i+1<<endl;
				cout<<"Name "<<arr1[i]<<endl;
				cout<<"Roll no "<<arr2[i]<<endl;
				cout<<"Facalty "<<arr3[i]<<endl;
				cout<<"Class "<<arr4[i]<<endl;
				cout<<"Contact "<<arr5[i]<<endl;
				
				cout<<"\nEnter new data"<<endl<<endl;
				cout<<"Enter name ";
				cin>>arr1[i];
				cout<<"Enter Roll no ";
				cin>>arr2[i];
				cout<<"Enter facalty ";
				cin>>arr3[i];
				cout<<"Enter class ";
				cin>>arr4[i];
				cout<<"Enter contact ";
				cin>>arr5[i];
				count ++;
			}
		}
	}
	if(count==0) cout<<"Invalid input"<<endl;
}

void deletedata()
{ int count;
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		int a;
		cout<<"Press 1 to delete all record"<<endl;
		cout<<"Press 2 to delete specific record"<<endl;
		cin>>a;
		
		if(a==1)
		{
			total=0;
			cout<<"All record is deleted"<<endl;
		}
		else if(a==2)
		{
			string rollno;
			cout<<"Enter the roll no of student which you wanted to delete"<<endl;
			cin>>rollno;
			count = 0;
			for(int i=0;i<total;i++)
			{
				if(rollno==arr2[i])
				{
					for(int j=i;j<total;j++)
					{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
						arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
						count ++;
					}
					total--;
					cout<<"Your required record is deleted"<<endl;
				}
			}
		}
	}
	if(count==0) cout<<"Invalid input"<<endl;
}
};

int main()
{ 
	A:
		system("cls");
	int value;
	while(true)
	{ execute e;
		cout<<"\nPress 1 to enter data"<<endl;
		cout<<"Press 2 to show data"<<endl;
		cout<<"Press 3 to search data"<<endl;
		cout<<"Press 4 to update data"<<endl;
		cout<<"Press 5 to delete data"<<endl;
		cout<<"Press 6 to exit"<<endl;
		cin>>value;
		switch(value)
		{
			case 1: e.enter();
					break;
			case 2: e.show();
					break;
			case 3: e.search();
					break;
			case 4: e.update();
					break;
			case 5: e.deletedata();
					break;
			case 6: exit(0);
					break;
			default: cout<<"Invalid input"<<endl;
					throw ;
		}
		getch();
		goto A;	
	}
	return 0;
}

