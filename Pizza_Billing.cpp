//19:Create menu driven program for Pizza Shop And display total amount
#include<iostream>
using namespace std;
int main(){
	int ch,x,qty=0,y,add=0;
	cout<<"----Welcome to Pizza Shop----"<<endl;
	do{
	cout<<"Menu"<<endl;
	cout<<"1.Pizza 2.Burger 3.Exit"<<endl;
	cin>>ch;
	switch(ch){
	    case 1:
			cout<<"select any one"<<endl;
			cout<<"1.Margherita : 150 2.Vej cheesy pizza : 100 3.Exit"<<endl;
			cin>>x;
			switch(x){
				case 1:
				       cout<<"Enter Quantity"<<endl;
				       cin>>qty;
				       add=add+(qty*150);
				       break;
				case 2:
				       cout<<"Enter Quantity"<<endl;
				   	   cin>>qty;
					   add=add+(qty*100); 
					   break;
				case 3:
					   cout<<"Enter Quantity"<<endl;
				   	   cin>>qty;
					   cout<<"Exit"<<endl;	        
				       break;
				default: 
				        cout<<"Invalid";
						break;      
			}
			break;
		
		case 2:cout<<"select any one"<<endl;
		       cout<<"1.Cheese Burger : 80  2.Veggie Burger : 60 3.Exit"<<endl;
		       cin>>y;
		       switch(y){
		       	case 1:
				       cout<<"Enter Quantity"<<endl;
				   	   cin>>qty;
					   add=add+(qty*80); 
					   break;
				
				case 2: 
				       cout<<"Enter Quantity"<<endl;
				   	   cin>>qty;
					   add=add+(qty*60); 
					   break;  
		       	
				case 3:
				       cout<<"Exit"<<endl;
		       	       break;
		       	default:
				        cout<<"Invalid"; 
				        break;     
			   }
			   break;
		case 3:cout<<"Exit"<<endl;
		       break;
		default:cout<<"Invalid"<<endl;  
		       break;    
	}
}while(ch!=3);
    {
     cout<<"Total Bill : "<<add<<endl;
     cout<<"----Thank You Visit Again----";
}
return 0;
}

