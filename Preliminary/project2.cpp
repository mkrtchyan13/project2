
#include <iostream>
#include <string>
using namespace std;


int main()
{
		int m1;
    int m2;
    int m3;
    int fi1;
    int fi2;
    int fi3;
		int n1;
		int n2;
		int n3;
		int f1;
		int f2;
		int f3;
		int g = 10;
		int m0 = 0;


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


	cout<<"Input fi1"<<endl;
	if(fi1>0 && fi1<0.5){
        cin>>fi1;
    }
    else{
        cout<<"The value must be between 0 and 0.5";
        return 0;
    }

	cout<<"Input fi2"<<endl;
	if(fi2>0 && fi2<0.5){
				cin>>fi1;
		}
		else{
				cout<<"The value must be between 0 and 0.5";
				return 0;
		}

	cout<<"Input fi3"<<endl;
	if(fi3>0 && fi3<0.5){
        cin>>fi3;
    }
    else{
        cout<<"The value must be between 0 and 0.5";
        return 0;
    }

		cout<<"Input f1"<<endl;
		if( f1> -300 * n1 &&  f1< 300 * n1){
					cin>>f1;
			}
			else{
					cout<<"The value must be between -300 * n1 and 300 * n1";
					return 0;
			}
		cout<<"Input f2"<<endl;
		if( f2> -300 * n2 &&  f2< 300 * n2){
					cin>>f2;
			}
			else{
					cout<<"The value must be between -300 * n2 and 300 * n2";
					return 0;
			}
		cout<<"Input f3"<<endl;
		if( f3> -300 * n3 &&  f3< 300 * n3){
					cin>>f3;
			}
			else{
					cout<<"The value must be between -300 * n3 and 300 * n3";
					return 0;
			}


	}
