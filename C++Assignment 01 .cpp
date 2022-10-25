/*
#include<iostream>
using namespace std;
int main()
int var=10;
if (var%2==0)
cout<<"even";
   return 0;
{
*/

/*
#include<iostream>
using namespace std;
int main()
{
int var;
cout<<"Enter a number";
cin>>var;
if(var%2==0)
cout<<"number is even";
else
cout<<"number is odd";
return 0;
}
*/


/*
{
int i;
for( int i=1;i<=10;i++)
cout<<i<<endl;
return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main()
{
int n,t;
cout<<"table of:";
cin>>t;
for(int n=1;n<=10;n++)
cout<<t<<"*"<<"n"<<t*n<<"\n";
return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main()
{
int n,t;
cout<<"table of:";
cin>>t;
for(int n=1;n<=10;n++)
cout<<t<<"*"<< n<<"="<<t* n<<"\n";
return 0;
}
*/


/*
#include< iostream>
using namespace std;
int main()
{
int s;
for(s=1;s<=5
}
*/

/*
#include <iostream>
using namespace std;
int main ()
{
 int i=1;
 while(i<=10)
{
cout<<i;
i++;
}
return 0;
}
*/





#include <iostream>
using namespace std;
int main()
{
    int e,f;
    char op;
    while(true)
    {
        cout<< "Enter first value" <<endl;
        cin>>e;
        cout<< "Enter second value"<<endl;
        cin>>f;
        cout<< "Enter operator"<<endl;
        cin>>op;

        if(op=='+')
            cout<< "sum" <<e+f<<endl;
        else if(op=='-')
            cout<< "subtract" <<e-f<<endl;
        else if(op=='*')
            cout<< "multiply" <<e*f<<endl;
        else if(op=='/')
            cout<< "divide" <<e/f<<endl;
        else if(op=='%')
            cout<< "modulus" <<e%f<<endl;
        else
            cout<< "invalid character" <<endl;
        break;
    }
    return 0;
}















    