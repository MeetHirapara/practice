#include<iostream>
using namespace std;
class batsman{
	public;
	int runs[10],i;
	void set()
	{
		cout<<"enter 5 batsman runs :"endl;
		for(i=1;i<=5;i++)
		{
			cin>>runs[i]
		}
	}
};

class batsman:public cricketer{

	public:
		void get()
		{
			int runs=1,total=0,avg,num;
			for(i=1;i<=5;i++)
			{
				total=runs[i];
				if(runs[i]>run)
				{
				run=runs[i];
				num=i;
			    }
			}
		}
		avg=total/5;
		cout<<"total runs :"<<total<<endl;
		cout<<"number"<<num<<"is best performer he scored"<<run<<"runs."<<endl;
		cout<<"average runs is :"<<avg<<endl;
};
main()
{
	batsman b;
	b.set();
	b.get();
	b.
}
