#include<iostream>
using namespace std;
class car{
public: 
 int id;
 char companyname[50];
 char colour[50];
 char model[50];
 int year;	
};
int main()
{
	cout <<"Enter the Info of 4 Cars" << endl << endl;
	car c1;
	car c2;
	car c3;
    car c4;
    cout <<"================================"<<endl;
    cout <<"======Enter 1'st Car Info======="<<endl;
    cout <<"================================"<<endl;
    cout <<"Enter Car id :";
    cin >> c1.id;
    cout <<"Enter CAR Company name :";
    cin >> c1.companyname;
    cout <<"Enter CAR Colour :";
    cin >> c1.colour;
    cout <<"Enter CAR Model :";
    cin >> c1.model;
    cout <<"Enter CAR Release Year :";
    cin >> c1.year;
    cout <<"================================"<<endl;
    cout <<"======Enter 2'nd Car Info======="<<endl;
    cout <<"================================"<<endl;
    cout <<"Enter Car id :";
    cin >> c2.id;
    cout <<"Enter CAR Company name :";
    cin >> c2.companyname;
    cout <<"Enter CAR Colour :";
    cin >> c2.colour;
    cout <<"Enter CAR Model :";
    cin >> c2.model;
    cout <<"Enter CAR Release Year :";
    cin >> c2.year;
    cout <<"================================"<<endl;
    cout <<"======Enter 3'rd Car Info======="<<endl;
    cout <<"================================"<<endl;
    cout <<"Enter Car id :";
    cin >> c3.id;
    cout <<"Enter CAR Company name :";
    cin >> c3.companyname;
    cout <<"Enter CAR Colour :";
    cin >> c3.colour;
    cout <<"Enter CAR Model :";
    cin >> c3.model;
    cout <<"Enter CAR Release Year :";
    cin >> c3.year;
    cout <<"================================"<<endl;
    cout <<"======Enter 4'rt Car Info======="<<endl;
    cout <<"================================"<<endl;
    cout <<"Enter Car id :";
    cin >> c4.id;
    cout <<"Enter CAR Company name :";
    cin >> c4.companyname;
    cout <<"Enter CAR Colour :";
    cin >> c4.colour;
    cout <<"Enter CAR Model :";
    cin >> c4.model;
    cout <<"Enter CAR Release Year :";
    cin >> c4.year;
     cout <<"================================"<<endl;
    cout <<"======== 1'st Car Info=========="<<endl;
    cout <<"================================"<<endl;
    cout <<"Car id :"<<          c1.id<<endl;
    cout <<"CAR Company name :"<<c1.companyname<<endl;
   
    cout <<"CAR Colour :"<<      c1.colour<<endl;
   
    cout <<"CAR Model :"<<       c1.model<<endl;
   
    cout <<"CAR Release Year :"<<c1.year<<endl;
     cout <<"================================"<<endl;
    cout <<"======== 2'nd Car Info=========="<<endl;
    cout <<"================================"<<endl;
    cout <<"Car id :"<<          c2.id<<endl;
    cout <<"CAR Company name :"<<c2.companyname<<endl;
   
    cout <<"CAR Colour :"<<      c2.colour<<endl;
   
    cout <<"CAR Model :"<<       c2.model<<endl;
   
    cout <<"CAR Release Year :"<<c2.year<<endl;
     cout <<"================================"<<endl;
    cout <<"======== 3'rd Car Info=========="<<endl;
    cout <<"================================"<<endl;
    cout <<"Car id :"<<          c3.id<<endl;
    cout <<"CAR Company name :"<<c3.companyname<<endl;
   
    cout <<"CAR Colour :"<<      c3.colour<<endl;
   
    cout <<"CAR Model :"<<       c3.model<<endl;
   
    cout <<"CAR Release Year :"<<c3.year<<endl;
     cout <<"================================"<<endl;
    cout <<"======== 4'th Car Info=========="<<endl;
    cout <<"================================"<<endl;
    cout <<"Car id :"<<          c4.id<<endl;
    cout <<"CAR Company name :"<<c4.companyname<<endl;
   
    cout <<"CAR Colour :"<<      c4.colour<<endl;
   
    cout <<"CAR Model :"<<       c4.model<<endl;
   
    cout <<"CAR Release Year :"<<c4.year<<endl;
return 0;
}
