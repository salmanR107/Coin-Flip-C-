#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));
    int x;
	int heads=0;
	int tails=0;
    for(int i=0; i<100 ;i++)
    {
        x=rand()%2;
	//	cout<<x<<" ";
		if(x==0)
		{
			heads++;			
		}
		else
		{
			tails++;
		}
    }
//cout<<endl;
	cout<<"Heads: "<<heads<<endl;
	cout<<"Tails: "<<tails<<endl;
return 0;
}
