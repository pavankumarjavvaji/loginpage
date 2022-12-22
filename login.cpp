#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool logged()
{
    string username ,password,us,ps;
    cout<<"enter your username:\t";
    cin>>username;
    cout<<"enter your password:\t";
    cin>>password;
    ifstream read("file.txt");
        getline(read,us);
        getline(read,ps);
    if(username==us &&password==ps)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int choi;
    cout<<"\n1.regeter\n2.login\nenter your choice\n";
    cin>>choi;
    switch(choi)
    {
        case 1:
        {
            string username,password;
            cout<<"create new username:\t";
            cin>>username;
            cout<<"create new password:\t";
            cin>>password;
             ofstream file ;   
          
          file.open("file.txt");  

          file<<username<<endl ;
          file<<password ; 

          file.close() ;

         main();
        }
        case 2:
        {
            bool status=logged();
            if(!status)
            {
                
               cout<<"incorrect username or password , please check again ."<<endl; 
               system("PAUSE");
               return 0; 
            }
            else{
                cout<<"Succesfully logged in ."<<endl; 
               system("PAUSE");
               return 1 ; 
            }
        }
    }
}