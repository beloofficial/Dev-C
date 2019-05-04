#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
double m1,m2,m3,m4,m5;
double w1,w2,w3,w4,w5;
double hs,hu;
double sm=0,sum1=0;
cin>>m1>>m2>>m3>>m4>>m5;
cin>>w1>>w2>>w3>>w4>>w5;
cin>>hs>>hu;
sm=(1-m1/250)*500-50*w1;
	if(sm>0.3*500)sum1+=sm;
	else sum1+=0.3*500;

sm=(1-m2/250)*1000-50*w2;
	if(sm>0.3*1000)sum1+=sm;
	else sum1+=0.3*1000;

	sm=(1-m3/250)*1500-50*w3;
	if(sm>0.3*1500)sum1+=sm;
	else sum1+=0.3*1500;

	sm=(1-m4/250)*2000-50*w4;
	if(sm>0.3*2000)sum1+=sm;
	else sum1+=0.3*2000;

	sm=(1-m5/250)*2500-50*w5;
	if(sm>0.3*2500)sum1+=sm;
	else sum1+=0.3*2500;

cout<<sum1+hs*100-50*hu;	
return 0;
}
