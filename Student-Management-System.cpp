#include <iostream>
using namespace std;
int i,number;
string n[30],r[30],c[30],s[30];

add()
{
	cout<<"Enter numbetr of Students:  "; cin>>number;
	cout<<endl;
	for(i=0; i<number; i++)
	{
		cout<<"Enter infromation about student "<<i+1<<endl;
		cout<<"Enter name of student "<<i+1<<": ";cin>>n[i];
		cout<<"Enter rollno of student "<<i+1<<": ";cin>>r[i];
		cout<<"Enter class of student "<<i+1<<": ";cin>>c[i];
		cout<<"Enter subject of student "<<i+1<<": ";cin>>s[i];
		cout<<endl<<endl;
		
	}
}

show()
{
	for(i=0; i<number; i++)
	{
		cout<<"Name of Student "<<i+1<<": "<<n[i]<<endl;
		cout<<"Roll no of Student "<<i+1<<": "<<r[i]<<endl;
		cout<<"Class of Student "<<i+1<<": "<<c[i]<<endl;
		cout<<"Subject of Student "<<i+1<<": "<<s[i]<<endl;
		cout<<endl<<endl;
	
		
	}
}

search()
{
	string sr;
	cout<<"Enter Roll No to search specific student's informations ";cin>>sr;
	for(i=0; i<number; i++)
	{
		if(sr==r[i])
		{
		cout<<"Name of Student "<<i+1<<": "<<n[i]<<endl;
		cout<<"Roll no of Student "<<i+1<<": "<<r[i]<<endl;
		cout<<"Class of Student "<<i+1<<": "<<c[i]<<endl;
		cout<<"Subject of Student "<<i+1<<": "<<s[i]<<endl;
		cout<<endl<<endl;
		}
	}
}

update()
{
	string sr;
	cout<<"Enter Roll No to search and update information of desired student :";cin>>sr;
	for(i=0; i<number; i++)
	{
		if(sr==r[i])
		{
			cout<<"Old Information "<<endl;
			cout<<"Name Od Student "<<i+1<<" : "<<n[i];
			cout<<"Roll no of Student "<<i+1<<": "<<r[i]<<endl;
		    cout<<"Class of Student "<<i+1<<": "<<c[i]<<endl;
		    cout<<"Subject of Student "<<i+1<<": "<<s[i]<<endl;
		    cout<<endl<<endl;
		    cout<<"Enter New Infromation "<<endl;
		    cout<<"Name Od Student "<<i+1<<" : ";cin>>n[i];
			cout<<"Roll no of Student "<<i+1<<": ";cin>>r[i];
		    cout<<"Class of Student "<<i+1<<": ";cin>>c[i];
		    cout<<"Subject of Student "<<i+1<<": ";cin>>s[i];
		}
		
	}
}


del()
{
	int d;
	cout<<"Enter 1 to delete all information "<<endl;
	cout<<"Enter 2 to delete all information "<<endl;
	cin>>d;
	if(d==1)
	{
		int confirm;
		cout<<"Enter 0 to confirm ";cin>>confirm;
		if(confirm==0)
		{
			number=0;
			cout<<"All information is deleted "<<endl;
		}
	}
	if(d==2)
	{
		string rollno;
		cout<<"Enter desired roll no to delete ";cin>>rollno;
		for(i=0;i<number;i++)
		{
			if(rollno==r[i])
			{
				for(int j=0;j<number;j++)
				{
				
				n[j]=n[j+1];
				r[j]=r[j+1];
				c[j]=c[j+1];
				s[j]=s[j+1];
			}
			number--;
			cout<<"Desired Information is deleted "<<endl;
	    	}
	   }
   }
}



main()
{
	int val;
	while(true)
	{
		cout<<"Enter 1 to add information about student "<<endl;
		
		cout<<"Enter 2 to show information about student "<<endl;
		
		cout<<"Enter 3 to search information about student "<<endl;

		cout<<"Enter 4 to update information about student "<<endl;

		cout<<"Enter 5 to delete information about student "<<endl;

		cout<<"Enter 0 to exit from program "<<endl;
		
		cin>>val;
		cout<<endl<<endl;
		if(val==1)
		{
			system("cls");
			add();
		}
		else if(val==2)
		{
		    system("cls");
			show();
		}
	   	else if(val==3)
		{
		    system("cls");
			search();
		}
		else if(val==4)
		{
		    system("cls");
			update();
		}
		else if(val==5)
		{
			del();
		}
		else if(val==0)
		{
		    
			exit(0);
		}
		else
		{
			system("cls");
			cout<<"Invalid Input "<<endl;
		}
		
	
		
			
		


	}
}
