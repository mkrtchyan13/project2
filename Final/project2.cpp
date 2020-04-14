
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int m1;
    int m2;
    int m3;
    int myu1;
    int myu2;
    int myu3;
	int	F;
	int g = 10;
	int t;

	cout<<"Input m1"<<endl;
	if(m1>0 && m1<10){
        cin>>m1;
    }
    else{
        cout<<"The value must be between 0 and 10";
        return 0;
    }

	cout<<"Input m2"<<endl;
	if(m2>0 && m2<10){
				cin>>m2;
		}
		else{
				cout<<"The value must be between 0 and 10";
				return 0;
		}

	cout<<"Input m3"<<endl;
	if(m3>0 && m3<10){
        cin>>m3;
    }
    else{
        cout<<"The value must be between 0 and 10";
        return 0;
    }


	cout<<"Input myu1"<<endl;
	if(myu1>0 && myu1<0.5){
        cin>>myu1;
    }
    else{
        cout<<"The value must be between 0 and 0.5";
        return 0;
    }

	cout<<"Input myu2"<<endl;
	if(myu2>0 && myu2<0.5){
				cin>>myu1;
		}
		else{
				cout<<"The value must be between 0 and 0.5";
				return 0;
		}

	cout<<"Input myu3"<<endl;
	if(myu3>0 && myu3<0.5){
        cin>>myu3;
    }
    else{
        cout<<"The value must be between 0 and 0.5";
        return 0;
    }

	cout<<"Input t"<<endl;
	cin>>t;
	count( m1, m2, m3, myu1, myu2, myu3, F, t);
	}
 
 int count( int m1, int m2, int m3, int myu1, int myu2 int myu3, int F, t){

    a2 = T/m2+myu2*g;
	a1 = (F-myu1*(m1*g+m2*g+myu3+T)-T)/(m1+m3);
	a3 = T/m3 -myu3*a1+a1-g;

	cout<<a1<<endl;
	cout<<a2<<endl;
	cout<<a3<<endl

 }