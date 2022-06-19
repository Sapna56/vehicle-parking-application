#include<iostream>
using namespace std;


/* problem-
charge for ricksaw - 100
charge for car - 200
charge for bus - 300
total capacity of parking lot - 50


*/
void show_menu()
{
    //menu for parking lot
    cout << "\n ********** MENU **********\n\n";
    cout << "1. rickshaw\n";
    cout << "2. car\n";
    cout << "3. bus\n";
    cout << "4. show record\n";
    cout << "5. delete record\n";
    cout << "\n **************************\n";
}
int main(){
show_menu();
int option,amount=0;
int capacity=5; 
int car=0;
int bus=0;
int rickshaw=0;
int count=0; //count gives total no of vehicles currently present in the parking lot



    while(count<=capacity){
        
    
        
        cout<<"select the option\n";
        cin>>option;


switch (option)
{
case 1:

    rickshaw++;
    count++;
    amount+=100;
    break;



case 2:

car++;
count++;
amount+=200;
break;

case 3:

bus++;
count++;
amount+=300;
break; 

case 4:
cout<<"total amount : "<<amount<<endl;
cout<<"total vehicles : "<<count<<endl;
cout<<"total cars : "<<car<<endl;
cout<<"total rickshaw : "<<rickshaw<<endl;
cout<<"total bus : "<<bus<<endl;
break;

case 5:
amount=0;
count=0;
car=0;
rickshaw=0;
bus=0;
break;

default:
cout<<"invalid option\n";

}
    }
    if(count>capacity)
    {
        cout<<"parking full\n";
    }
    
return 0 ;
}