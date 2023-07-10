#include<iostream>
using namespace std;
int main()
{
	cout<<"welcome to currency converter(july 2023)";
	cout<<" select the country\n";
	int val,ch;
	float us=82.6485,er=90.7323,bri=106.120,aus=55.192746,can=62.1749,sig=61.2286, swiss=92.9977,mala=17.6971,jap=0.5815,chi=11.4453;
	cout<<"1.us\t2.euro\t3.british\t4.australian\t5.canadian\n6.singapore\t7.swiss\t8.malaysian\t9.japanese\t10.chinese\n";
	cin>>ch;
	cout<<"enter the amount\n";
	cin>>val;
	switch(ch){
		case 1:
			cout<<val<<" us dollars int indian rupees is "<<val*us<<"\n";
			break;
		case 2:
			cout<<val<<" euros in indian rupees is "<<val*er<<"\n";
			break;
		case 3:
			 cout<<val<<" britsh pounds in indian rupees is "<<val*bri<<"\n";
			 break;
		case 4:
			cout<<val<<" australian dollars in indian rupees is"<<val*aus<<"\n";
			break;
		case 5:
			 cout<<val<<" canadian dollars in indian rupees is "<<val*can<<"\n";
			 break;
		case 6:
			cout<<val<<" singapore dollars in indian rupees is "<<val*sig<<"\n";
			break;
		case 7:
			 cout<<val<<" swiss franc in indian rupees is "<<val*swiss<<"\n";
			 break;
		case 8:
			 cout<<val<<" malaysian riggitt in indian rupees is "<<val*mala<<"\n";
			 break;
		case 9:
			 cout<<val<<" japanese yen in indian rupees is "<<val*jap*mala<<"\n";
			 break;
		case 10:
			 cout<<val<<" chinese yaan in indian rupees is "<<val*chi<<"\n";
			 break;
		default:
			cout<<"enter the choice from mentioned choices , thankyou\n";
			break;
	}
}