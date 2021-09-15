#include<iostream>
using namespace std;
class Conversion
{
    float num=1;int p,q,n;
public:
    void get()
    {
        cout<<"Enter the currency : ";cin>>q;
        cout<<"Enter the amount = ";cin>>n;
    }
    void out()
    {
        cin>>p;
        cout<<"your required currency is:";
        if(q==1)//usd logic
        {
            if(p==2){num=n*1.17;cout<<num<<endl;}else if(p==3){num=n*0.0095;cout<<num<<endl;}else if(p==4){num=n*1.29 ;cout<<num<<endl;}
            else if(p==5){num=n*0.71 ;cout<<num<<endl;}else if(p==6){num=n* 0.76;cout<<num<<endl;}else if(p==7){num=n*1.09 ;cout<<num<<endl;}
            else if(p==8){num=n*0.15 ;cout<<num<<endl;}else if(p==9){num=n*0.11;cout<<num<<endl;}else if(p==10){num=n*0.66;cout<<num<<endl;}
            else if(p==11){num=n/64.15;cout<<num<<endl;}else if(p==12){num=n/16.12;cout<<num<<endl;}else if(p==13){num=n/3.67;cout<<num<<endl;}
            else if(p==14){num=n/71.79;cout<<num<<endl;}else if(p==15){num=n/51.08;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==2)//eur logic
        {
            if(p==1){num=n*0.847;cout<<num<<endl;}else if(p==3){num=n*129.55;cout<<num<<endl;}else if(p==4){num=n*0.86;cout<<num<<endl;}
            else if(p==5){num=n*1.61;cout<<num<<endl;}else if(p==6){num=n*1.49;cout<<num<<endl;}else if(p==7){num=n*1.08;cout<<num<<endl;}
            else if(p==8){num=n*7.63;cout<<num<<endl;}else if(p==9){num=n*10.20;cout<<num<<endl;}else if(p==10){num=n*1.68;cout<<num<<endl;}
            else if(p==11){num=n*86.40;cout<<num<<endl;}else if(p==12){num=n*18.52;cout<<num<<endl;}else if(p==13){num=n*4.33;cout<<num<<endl;}
            else if(p==14){num=n*86.69;cout<<num<<endl;}else if(p==15){num=n*58.84;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==3)//jpy logic
        {
            if(p==1){num=n*0.0091;cout<<num<<endl;}else if(p==2){num=n*0.0077;cout<<num<<endl;}else if(p==4){num=n*0.0066;cout<<num<<endl;}
            else if(p==5){num=n*0.012;cout<<num<<endl;}else if(p==6){num=n*0.11;cout<<num<<endl;}else if(p==7){num=n*0.0083;cout<<num<<endl;}
            else if(p==8){num=n*0.059;cout<<num<<endl;}else if(p==9){num=n*0.079;cout<<num<<endl;}else if(p==10){num=n*0.013;cout<<num<<endl;}
            else if(p==11){num=n*0.67;cout<<num<<endl;}else if(p==12){num=n*0.14;cout<<num<<endl;}else if(p==13){num=n*0.033;cout<<num<<endl;}
            else if(p==14){num=n*0.67;cout<<num<<endl;}else if(p==15){num=n*0.45;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==4)//gbp logic
        {
            if(p==1){num=n*1.38;cout<<num<<endl;}else if(p==2){num=n*1.16;cout<<num<<endl;}else if(p==3){num=n*151.5;cout<<num<<endl;}
            else if(p==5){num=n*1.88;cout<<num<<endl;}else if(p==6){num=n*1.72;cout<<num<<endl;}else if(p==7){num=n*1.26;cout<<num<<endl;}
            else if(p==8){num=n*9.09;cout<<num<<endl;}else if(p==9){num=n*11.90;cout<<num<<endl;}else if(p==10){num=n*1.96;cout<<num<<endl;}
            else if(p==11){num=n*1.01;cout<<num<<endl;}else if(p==12){num=n*21.73;cout<<num<<endl;}else if(p==13){num=n*5;cout<<num<<endl;}
            else if(p==14){num=n*102.4;cout<<num<<endl;}else if(p==15){num=n*66.67;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==5)//aud logic
        {
            if(p==1){num=n*0.72;cout<<num<<endl;}else if(p==2){num=n*0.62;cout<<num<<endl;}else if(p==3){num=n*76.92;cout<<num<<endl;}
            else if(p==4){num=n*0.52;cout<<num<<endl;}else if(p==6){num=n*0.91;cout<<num<<endl;}else if(p==7){num=n*0.67;cout<<num<<endl;}
            else if(p==8){num=n*4.76;cout<<num<<endl;}else if(p==9){num=n*6.25;cout<<num<<endl;}else if(p==10){num=n*1.04;cout<<num<<endl;}
            else if(p==11){num=n*52.63;cout<<num<<endl;}else if(p==12){num=n*11.36;cout<<num<<endl;}else if(p==13){num=n*2.63;cout<<num<<endl;}
            else if(p==14){num=n*52.63;cout<<num<<endl;}else if(p==15){num=n*3.57;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==6)//cad logic
        {
            if(p==1){num=n*0.79;cout<<num<<endl;}else if(p==2){num=n*0.67;cout<<num<<endl;}else if(p==3){num=n*83.34;cout<<num<<endl;}
            else if(p==4){num=n*0.57;cout<<num<<endl;}else if(p==5){num=n*1.09;cout<<num<<endl;}else if(p==7){num=n*0.72;cout<<num<<endl;}
            else if(p==8){num=n*5;cout<<num<<endl;}else if(p==9){num=n*6.67;cout<<num<<endl;}else if(p==10){num=n*1.13;cout<<num<<endl;}
            else if(p==11){num=n*58.82;cout<<num<<endl;}else if(p==12){num=n*12.34;cout<<num<<endl;}else if(p==13){num=n*2.94;cout<<num<<endl;}
            else if(p==14){num=n*58.82;cout<<num<<endl;}else if(p==15){num=n*40;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==7)//chf logic
        {
            if(p==1){num=n*1.09;cout<<num<<endl;}else if(p==2){num=n*0.92;cout<<num<<endl;}else if(p==3){num=n*120.48;cout<<num<<endl;}
            else if(p==4){num=n*0.79;cout<<num<<endl;}else if(p==5){num=n*1.49;cout<<num<<endl;}else if(p==6){num=n*1.39;cout<<num<<endl;}
            else if(p==8){num=n*7.14;cout<<num<<endl;}else if(p==9){num=n*9.09;cout<<num<<endl;}else if(p==10){num=n*1.56;cout<<num<<endl;}
            else if(p==11){num=n*83.34;cout<<num<<endl;}else if(p==12){num=n*17.24;cout<<num<<endl;}else if(p==13){num=n*4;cout<<num<<endl;}
            else if(p==14){num=n*83.34;cout<<num<<endl;}else if(p==15){num=n*55.56;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==8)//cny logic
        {
            if(p==1){num=n*0.154;cout<<num<<endl;}else if(p==2){num=n*0.13;cout<<num<<endl;}else if(p==3){num=n*16.95;cout<<num<<endl;}
            else if(p==4){num=n*0.11;cout<<num<<endl;}else if(p==5){num=n*0.21;cout<<num<<endl;}else if(p==6){num=n*0.195;cout<<num<<endl;}
            else if(p==7){num=n*0.14;cout<<num<<endl;}else if(p==9){num=n*1.35;cout<<num<<endl;}else if(p==10){num=n*0.22;cout<<num<<endl;}
            else if(p==11){num=n*11.50;cout<<num<<endl;}else if(p==12){num=n*2.43;cout<<num<<endl;}else if(p==13){num=n*0.57;cout<<num<<endl;}
            else if(p==14){num=n*11.50;cout<<num<<endl;}else if(p==15){num=n*7.69;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==9)//sek logic
        {
            if(p==1){num=n*0.11;cout<<num<<endl;}else if(p==2){num=n*0.097;cout<<num<<endl;}else if(p==3){num=n*12.66;cout<<num<<endl;}
            else if(p==4){num=n*0.084;cout<<num<<endl;}else if(p==5){num=n*0.16;cout<<num<<endl;}else if(p==6){num=n*0.14;cout<<num<<endl;}
            else if(p==7){num=n*0.105;cout<<num<<endl;}else if(p==8){num=n*0.75;cout<<num<<endl;}else if(p==10){num=n*0.166;cout<<num<<endl;}
            else if(p==11){num=n*8.34;cout<<num<<endl;}else if(p==12){num=n*1.80;cout<<num<<endl;}else if(p==13){num=n*0.42;cout<<num<<endl;}
            else if(p==14){num=n*8.34;cout<<num<<endl;}else if(p==15){num=n*5.88;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==10)//nzd logic
        {
            if(p==1){num=n*0.70;cout<<num<<endl;}else if(p==2){num=n*0.595;cout<<num<<endl;}else if(p==3){num=n*76.92;cout<<num<<endl;}
            else if(p==4){num=n*0.51;cout<<num<<endl;}else if(p==5){num=n*0.96;cout<<num<<endl;}else if(p==6){num=n*0.885;cout<<num<<endl;}
            else if(p==7){num=n*0.64;cout<<num<<endl;}else if(p==8){num=n*4.54;cout<<num<<endl;}else if(p==9){num=n*5.88;cout<<num<<endl;}
            else if(p==11){num=n*52.63;cout<<num<<endl;}else if(p==12){num=n*10.99;cout<<num<<endl;}else if(p==13){num=n*2.56;cout<<num<<endl;}
            else if(p==14){num=n*52.63;cout<<num<<endl;}else if(p==15){num=n*35.48;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==11)//rub logic
        {
            if(p==1){num=n*0.013;cout<<num<<endl;}else if(p==2){num=n*0.011;cout<<num<<endl;}else if(p==3){num=n*1.50;cout<<num<<endl;}
            else if(p==4){num=n*0.001;cout<<num<<endl;}else if(p==5){num=n*0.018;cout<<num<<endl;}else if(p==6){num=n*0.017;cout<<num<<endl;}
            else if(p==7){num=n*0.012;cout<<num<<endl;}else if(p==8){num=n*0.88;cout<<num<<endl;}else if(p==9){num=n*0.12;cout<<num<<endl;}
            else if(p==10){num=n*0.019;cout<<num<<endl;}else if(p==12){num=n*0.21;cout<<num<<endl;}else if(p==13){num=n*0.051;cout<<num<<endl;}
            else if(p==14){num=n*1;cout<<num<<endl;}else if(p==15){num=n*0.68;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==12)//egp logic
        {
            if(p==1){num=n*0.064;cout<<num<<endl;}else if(p==2){num=n*0.054;cout<<num<<endl;}else if(p==3){num=n*7;cout<<num<<endl;}
            else if(p==4){num=n*0.046;cout<<num<<endl;}else if(p==5){num=n*0.087;cout<<num<<endl;}else if(p==6){num=n*0.080;cout<<num<<endl;}
            else if(p==7){num=n*0.058;cout<<num<<endl;}else if(p==8){num=n*0.41;cout<<num<<endl;}else if(p==9){num=n*0.55;cout<<num<<endl;}
            else if(p==10){num=n*0.091;cout<<num<<endl;}else if(p==11){num=n*4.67;cout<<num<<endl;}else if(p==13){num=n*0.23;cout<<num<<endl;}
            else if(p==14){num=n*4.68;cout<<num<<endl;}else if(p==15){num=n*3.18;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==13)//aed logic
        {
            if(p==1){num=n*0.27;cout<<num<<endl;}else if(p==2){num=n*0.23;cout<<num<<endl;}else if(p==3){num=n*29.90;cout<<num<<endl;}
            else if(p==4){num=n*0.20;cout<<num<<endl;}else if(p==5){num=n*0.37;cout<<num<<endl;}else if(p==6){num=n*0.34;cout<<num<<endl;}
            else if(p==7){num=n*0.25;cout<<num<<endl;}else if(p==8){num=n*1.76;cout<<num<<endl;}else if(p==9){num=n*2.35;cout<<num<<endl;}
            else if(p==10){num=n*0.39;cout<<num<<endl;}else if(p==11){num=n*19.94;cout<<num<<endl;}else if(p==12){num=n*4.27;cout<<num<<endl;}
            else if(p==14){num=n*20.01;cout<<num<<endl;}else if(p==15){num=n*13.58;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==14)//inr logic
        {
            if(p==1){num=n*0.014;cout<<num<<endl;}else if(p==2){num=n*0.012;cout<<num<<endl;}else if(p==3){num=n*1.49;cout<<num<<endl;}
            else if(p==4){num=n*0.0099;cout<<num<<endl;}else if(p==5){num=n*0.019;cout<<num<<endl;}else if(p==6){num=n*0.017;cout<<num<<endl;}
            else if(p==7){num=n*0.012;cout<<num<<endl;}else if(p==8){num=n*0.088;cout<<num<<endl;}else if(p==9){num=n*0.12;cout<<num<<endl;}
            else if(p==10){num=n*0.019;cout<<num<<endl;}else if(p==11){num=n*1.06;cout<<num<<endl;}else if(p==12){num=n*0.21;cout<<num<<endl;}
            else if(p==13){num=n*0.050;cout<<num<<endl;}else if(p==15){num=n*0.68;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
        if(q==15)//php logic
        {
            if(p==1){num=n*0.020;cout<<num<<endl;}else if(p==2){num=n*0.017;cout<<num<<endl;}else if(p==3){num=n*2.20;cout<<num<<endl;}
            else if(p==4){num=n*0.015;cout<<num<<endl;}else if(p==5){num=n*0.027;cout<<num<<endl;}else if(p==6){num=n*0.025;cout<<num<<endl;}
            else if(p==7){num=n*0.018;cout<<num<<endl;}else if(p==8){num=n*0.13;cout<<num<<endl;}else if(p==9){num=n*0.17;cout<<num<<endl;}
            else if(p==10){num=n*0.029;cout<<num<<endl;}else if(p==11){num=n*1.47;cout<<num<<endl;}else if(p==12){num=n*0.31;cout<<num<<endl;}
            else if(p==13){num=n*0.07;cout<<num<<endl;}else if(p==14){num=n*1.47;cout<<num<<endl;}else {num=n;cout<<num<<endl;}
        }
    }
}c2;
int main()
{
    enum currency {USD,EUR,JPY,GBP,AUD,CAD,CHF,CNY,SEK,NZD,RUB,EGP,AED,INR,PHP};
    cout<<"======WELCOME TO MY MODULE======"<<endl;
    cout<<"Enter number as per following:"<<endl;
    cout<<"1-USD \t"<<"2-EUR \t"<<"3-JPY \t"<<"4-GBP \t"<<"5-AUD \t"<<"6-CAD \t"<<"7-CHF \t"<<"8-CNY \t"<<"9-SEK \t"<<"10-NZD \t"<<"11-RUB \t"<<"12-EGP \t"<<"13-AED \t"<<"14-INR \t"<<"15-PHP"<<endl;
    c2.get();
    //input function to be called
    cout<<"1-USD \t"<<"2-EUR \t"<<"3-JPY \t"<<"4-GBP \t"<<"5-AUD \t"<<"6-CAD \t"<<"7-CHF \t"<<"8-CNY \t"<<"9-SEK \t"<<"10-NZD \t"<<"11-RUB \t"<<"12-EGP \t"<<"13-AED \t"<<"14-INR \t"<<"15-PHP"<<endl;
    cout<<"Enter the required currency : ";
    //cout<<"your required currency is:";
    c2.out();
    return 0;
}
