#include<iostream>
#include<string.h>
using namespace std;
class hotel{

    private:
    	int id;
    	char name[10000];
    	char type[100000];
    	int staff;
    	int room;
    	int establish_year;
    	char address[10000];
    	int ratting;
    	char website[10000];
    public:
    	void set(int id,char name[],char type[],int staff,int room,int establish_year,char address[],int ratting,char website[])
    	{
    		this->id = id;
    		strcpy(this->name,name);
    		strcpy(this->type,type);
    		this->staff = staff;
    		this->room = room;
    		this->establish_year = establish_year;
    		strcpy(this->address,address);
    		this->ratting = ratting;
    		strcpy(this->website,website);
		}
		void get()
		{
			cout<<"id = "<<id<<endl;
			cout<<"name = "<<name<<endl;
			cout<<"type = "<<type<<endl;
			cout<<"staff = "<<staff<<endl;
			cout<<"room = "<<room<<endl;
			cout<<"estsblish_year = "<<establish_year<<endl;
			cout<<"address = "<<address<<endl;
			cout<<"ratting = "<<ratting<<endl;
			cout<<"website = "<<website<<endl;
		}
};
    	
int main()
{
	hotel h;
	
	h.set(2354,"mitul","5_star",1500,12000,2006,"US",25000,"www.vision .com");
	
	h.get();
	
	
}
