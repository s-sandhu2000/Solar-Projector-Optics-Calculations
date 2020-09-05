#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char*argv[])
{
	if(argc!=4)
	{
		cerr<<"HEY! NOT THE RIGHT NUMBER OF INPUTS!!!"<<endl;
		exit(1);
	}
	double focal_length1=atof(argv[1]);
	double focal_length2=atof(argv[2]);
	double total_length=atof(argv[3]);
	double a=focal_length2;
	double b=((2*focal_length2)+focal_length1-total_length);
	double c=focal_length2;
	double solution1=((-b)+sqrt((pow(b,2))-(4*a*c)))/(2*a);
	double solution2=((-b)-sqrt((pow(b,2))-(4*a*c)))/(2*a);
	cout<<solution1<<endl;
	cout<<solution2<<endl;
	double og_image=((1.39*pow(10,9))/(1.50*pow(10,11)))*focal_length1;
	if (solution1 >=0)
	{
		cout<<"Magnification option 1: "<<solution1<<endl;
		cout<<endl;
		double o=(((total_length)-(focal_length1))/(solution1+1))+focal_length1;
		cout<<"The second lens needs to be placed "<<o<<" meters from the first lens."<<endl;
		cout<<endl;
		
	}
	else
		cout<<"Negative answer"<<endl;
	if (solution2 >=0)
	{
		cout<<"Magnification option 2: "<<solution2<<endl;
		cout<<endl;
		double o=(((total_length)-(focal_length1))/(solution2+1))+focal_length1;
		cout<<"The second lens needs to be placed "<<o<<" meters from the first lens."<<endl;
		cout<<endl;
	}
	else
		cout<<"Negative answer"<<endl;
	if((solution1>=0) || (solution2>=0))
	{
		
		double max=((solution1>solution2)? solution1:solution2);
		cout<<"We are going to be working with magnification "<<max<<"."<<endl;
		cout<<"Overall, the image of the sun is going to be "<<(max*og_image)<<" meters tall."<<endl;
	}
	return 0;
}


	
