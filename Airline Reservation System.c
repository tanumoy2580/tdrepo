#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	FILE *f,*fp;
	int ph;
	char id[10],cname[50],add[100],tn[20],nt[20];
	int ch,chA,chB,chC,chD,chE,dy,dyB,mth,mthB,yr,yrB,n,a,nf,c,in,i=1,j,k=1;
	char ori[50],oriB[50],des[50],desB[50],tym[20],tymB[20],fn[20],s[20],pa[50],ptym[30],cn[50],chn[50];
	int pr=0,p=0,total=0,chF,chG,cc,cvv,mm,yy;
	char cid[50],ctn[20],bn[50],ic[30],an[50];
	int ra;
	system("color 0E");
	printf("\t\t\t\t\t||>>>>>>>> AIRLINE RESERVATION SYSTEM <<<<<<<<||\n");
	printf("\n\n\n  || [*]   [1]>> Book Flight   \t   [2]>> Cancel Flight\n      >> Input Choice : ");
	scanf("%d",&ch);
	if(ch==1)
	{
	printf("\n\n { >^>^>  FLIGHT _ BOOKING  <^<^<}");	
f=fopen("C://Users/Tanumoy/Desktop/Airline Reservation SYstem/Booking Information.txt","w");
	printf(" \n\n  ***** CUSTOMER__DETAILS *****");
fprintf(f,"\n  ***** CUSTOMER__DETAILS *****  ");
	printf("\n\n |> Customer_Id : ");
	gets(id);
	gets(id);
fprintf(f,"\n\n |> Customer_Id : %s",id);
	printf("\n |>Customer_Name : ");
	gets(cname);
fprintf(f,"\n |>Customer_Name : %s",cname);
	printf("\n |>Phone Number : ");
	scanf("%d",&ph);
fprintf(f,"\n |>Phone Number : %d",ph);
	printf("\n |>Address : ");
	gets(add);
	gets(add);
fprintf(f,"\n |>Address : %s",add);
	

	printf("\n\n  ***** FLIGHT__DETAILS *****");
fprintf(f,"\n\n\n  ***** FLIGHT__DETAILS *****");
	printf("\n\n |> Choose Type Of Flight :-\n");
	printf("\n 1]> One Way");
	printf("\n 2]> Round Trip");
	printf("\n 3]> Multi-city\n");
	printf("\n >> Input Choice : ");
	scanf("%d",&chA);
	if(chA==1)
	{
		printf("\n { > Flight Type : One Way }");
	fprintf(f,"\n\n { > Flight Type : One Way }");
		printf("\n\n >>> Origin : ");
		gets(ori);
		gets(ori);
	fprintf(f,"\n >>> Origin : %s",ori);
		printf("\n >>> Destination :  ");
		gets(des);
	fprintf(f,"\n >>> Destination :  %s",des);
		printf("\n >>> Departure Date[(format -> dd mm yy)] : ");
		scanf("%d%d%d",&dy,&mth,&yr);
	fprintf(f,"\n >>> Departure Date[(format -> dd mm yy)] : %d / %d / 20%d",dy,mth,yr);
		if(mth==1)
        printf(" { > %d JANUARY of 20%d}",dy,yr);
        else 
        if(mth==2)
        printf(" { > %d FEBRUARY of 20%d}",dy,yr);
        else
        if(mth==3)
        printf(" { > %d MARCH of 20%d}",dy,yr);
        else
        if(mth==4)
        printf(" { > %d APRIL of 20%d}",dy,yr);
        else
        if(mth==5)
        printf(" { > %d MAY of 20%d}",dy,yr);
        else
        if(mth==6)
        printf(" { > %d JUNE of 20%d}",dy,yr);
        else
        if(mth==7)
        printf(" { > %d JULY of 20%d}",dy,yr);
        else
        if(mth==8)
        printf(" { > %d AUGUST of 20%d}",dy,yr);
        else
        if(mth==9)
        printf(" { > %d SEPTEMBER of 20%d}",dy,yr);
        else
        if(mth==10)
        printf(" { > %d OCTOBER of 20%d}",dy,yr);
        else
        if(mth==11)
        printf(" { > %d NOVEMBER of 20%d}",dy,yr);
        else
        if(mth==12)
        printf(" { > %d DECEMBER of 20%d}",dy,yr);
        printf("\n\n >>> Departure Time : ");
		gets(tym);
		gets(tym);
	fprintf(f,"\n >>> Departure Time : %s",tym);
		printf("\n >>> Number Of Travellors : ");
		scanf("%d",&n);
	fprintf(f,"\n >>> Number Of Travellors : %d",n);
		printf(" [> Adult [( above 12 years )] : ");
		scanf("%d",&a);
	fprintf(f,"\n\t [> Adult [( above 12 years )] : %d",a);
		printf(" [> Children [(2 to 12 Years )] : ");
		scanf("%d",&c);
	fprintf(f,"\n\t [> Children [(2 to 12 Years )] : %d",c);
		printf(" [> Infants [( less than 2 years )] : ");
		scanf("%d",&in);
	fprintf(f,"\n\t [> Infants [( less than 2 years )] : %d",in);
		printf("\n >>> Select class :-");
		printf("\n 1]> Economy \n 2]> Business \n 3]> First Class \n 4]> Premium Economy");
		printf("\n\n >> Input Choice : ");
		scanf("%d",&chB);
		if(chB==1)
		{
		printf("\n { > Class Type : Economy }");
	fprintf(f,"\n { > Class Type : Economy }");
		}
		else 
		if(chB==2)
		{
		printf("\n { > Class Type : Business }");
	fprintf(f,"\n { > Class Type : Business }");
		}
		else
		if(chB==3)
		{
		printf("\n { > Class Type : First Class }");
	fprintf(f,"\n { > Class Type : First Class }");
		}
		else
		if(chB==4)
		{
		printf("\n { > Class Type : Premium Economy }");
	fprintf(f,"\n { > Class Type : Premium Economy }");
		}
	}
	else
	if(chA==2)
	{
		printf("\n { > Flight Type : Round Trip }");
	fprintf(f,"\n\n { > Flight Type : Round Trip }");
    	printf("\n\n >>> Origin : ");
        gets(ori);
		gets(ori);
	fprintf(f,"\n >>> Origin : %s",ori);
	   	printf("\n >>> Destination :  ");
		gets(des);
	fprintf(f,"\n >>> Destination :  %s",des);
		printf("\n >>> Departure Date[(format -> dd mm yy)] : ");
		scanf("%d%d%d",&dy,&mth,&yr);
	fprintf(f,"\n >>> Departure Date[(format -> dd mm yy)] : %d / %d / 20%d",dy,mth,yr);
		if(mth==1)
        printf(" { > %d JANUARY of 20%d}",dy,yr);
        else 
        if(mth==2)
        printf(" { > %d FEBRUARY of 20%d}",dy,yr);
        else
        if(mth==3)
        printf(" { > %d MARCH of 20%d}",dy,yr);
        else
        if(mth==4)
        printf(" { > %d APRIL of 20%d}",dy,yr);
        else
        if(mth==5)
        printf(" { > %d MAY of 20%d}",dy,yr);
        else
        if(mth==6)
        printf(" { > %d JUNE of 20%d}",dy,yr);
        else
        if(mth==7)
        printf(" { > %d JULY of 20%d}",dy,yr);
        else
        if(mth==8)
        printf(" { > %d AUGUST of 20%d}",dy,yr);
        else
        if(mth==9)
        printf(" { > %d SEPTEMBER of 20%d}",dy,yr);
        else
        if(mth==10)
        printf(" { > %d OCTOBER of 20%d}",dy,yr);
        else
        if(mth==11)
        printf(" { > %d NOVEMBER of 20%d}",dy,yr);
        else
        if(mth==12)
        printf(" { > %d DECEMBER of 20%d}",dy,yr);
		printf("\n\n >>> Departure Time : ");
		gets(tym);
		gets(tym);
	fprintf(f,"\n >>> Departure Time : %s",tym);
		printf("\n >>> Returning Date[(format -> dd mm yy)] : ");
		scanf("%d%d%d",&dyB,&mthB,&yrB);
	fprintf(f,"\n >>> Returning Date[(format -> dd mm yy)] : %d / %d / 20%d",dyB,mthB,yrB);
		if(mthB==1)
        printf(" { > %d JANUARY of 20%d}",dyB,yrB);
        else 
        if(mthB==2)
        printf(" { > %d FEBRUARY of 20%d}",dyB,yrB);
        else
        if(mthB==3)
        printf(" { > %d MARCH of 20%d}",dyB,yrB);
        else
        if(mthB==4)
        printf(" { > %d APRIL of 20%d}",dyB,yrB);
        else
        if(mthB==5)
        printf(" { > %d MAY of 20%d}",dyB,yrB);
        else
        if(mthB==6)
        printf(" { > %d JUNE of 20%d}",dyB,yrB);
        else
        if(mthB==7)
        printf(" { > %d JULY of 20%d}",dyB,yrB);
        else
        if(mthB==8)
        printf(" { > %d AUGUST of 20%d}",dyB,yrB);
        else
        if(mthB==9)
        printf(" { > %d SEPTEMBER of 20%d}",dyB,yrB);
        else
        if(mthB==10)
        printf(" { > %d OCTOBER of 20%d}",dyB,yrB);
        else
        if(mthB==11)
        printf(" { > %d NOVEMBER of 20%d}",dyB,yrB);
        else
        if(mthB==12)
        printf(" { > %d DECEMBER of 20%d}",dyB,yrB);
		printf("\n\n >>> Returning Time : ");
		gets(tymB);
		gets(tymB);
	fprintf(f,"\n >>> Returning Time : %s",tymB);
		printf("\n >>> Number Of Travellors : ");
		scanf("%d",&n);
	fprintf(f,"\n >>> Number Of Travellors : %d",n);
		printf(" [> Adult [( above 12 years )] : ");
		scanf("%d",&a);
	fprintf(f,"\n\t [> Adult [( above 12 years )] : %d",a);
		printf(" [> Children [(2 to 12 Years )] : ");
		scanf("%d",&c);
	fprintf(f,"\n\t [> Children [(2 to 12 Years )] : %d",c);
		printf(" [> Infant [( less than 2 years )] : ");
		scanf("%d",&in);
	fprintf(f,"\n\t [> Infant [( less than 2 years )] : %d",in);
		printf("\n >>> Select class :-");
		printf("\n 1]> Economy \n 2]> Business \n 3]> First Class \n 4]> Premium Economy");
		printf("\n\n >> Input Choice : ");
		scanf("%d",&chB);
		if(chB==1)
		{
		printf("\n { > Class Type : Economy }");
	fprintf(f,"\n { > Class Type : Economy }");
		}
		else 
		if(chB==2)
		{
		printf("\n { > Class Type : Business }");
	fprintf(f,"\n { > Class Type : Business }");
		}
		else
		if(chB==3)
		{
		printf("\n { > Class Type : First Class }");
	fprintf(f,"\n { > Class Type : First Class }");
		}
		else
		if(chB==4)
		{
		printf("\n { > Class Type : Premium Economy }");
	fprintf(f,"\n { > Class Type : Premium Economy }");
		}
	}
	else
	if(chA==3)
	{
		printf("\n { > Flight Type : Multi-city }");
	fprintf(f,"\n\n { > Flight Type : Multi-city }");
    	printf("\n\n >>> First Origin : ");
        gets(ori);
		gets(ori);
	fprintf(f,"\n >>> First Origin : %s",ori);
	   	printf("\n >>> First Destination :  ");
		gets(des);
	fprintf(f,"\n >>> First Destination :  %s",des);
		printf("\n >>> Second Origin : ");
        gets(oriB);
    fprintf(f,"\n >>> Second Origin : %s",oriB);
	   	printf("\n >>> Second Destination :  ");
		gets(desB);
	fprintf(f,"\n >>> Second Destination :  %s",desB);
		printf("\n >>> First Trip Departure Date[(format -> dd mm yy)] : ");
		scanf("%d%d%d",&dy,&mth,&yr);
	fprintf(f,"\n >>> First Trip Departure Date[(format -> dd mm yy)] : %d / %d / 20%d",dy,mth,yr);
		if(mth==1)
        printf(" { > %d JANUARY of 20%d}",dy,yr);
        else 
        if(mth==2)
        printf(" { > %d FEBRUARY of 20%d}",dy,yr);
        else
        if(mth==3)
        printf(" { > %d MARCH of 20%d}",dy,yr);
        else
        if(mth==4)
        printf(" { > %d APRIL of 20%d}",dy,yr);
        else
        if(mth==5)
        printf(" { > %d MAY of 20%d}",dy,yr);
        else
        if(mth==6)
        printf(" { > %d JUNE of 20%d}",dy,yr);
        else
        if(mth==7)
        printf(" { > %d JULY of 20%d}",dy,yr);
        else
        if(mth==8)
        printf(" { > %d AUGUST of 20%d}",dy,yr);
        else
        if(mth==9)
        printf(" { > %d SEPTEMBER of 20%d}",dy,yr);
        else
        if(mth==10)
        printf(" { > %d OCTOBER of 20%d}",dy,yr);
        else
        if(mth==11)
        printf(" { > %d NOVEMBER of 20%d}",dy,yr);
        else
        if(mth==12)
        printf(" { > %d DECEMBER of 20%d}",dy,yr);
		printf("\n\n >>> First Trip Departure Time : ");
		gets(tym);
		gets(tym);
	fprintf(f,"\n >>> First Trip Departure Time : %s",tym);
		printf("\n >>> Second Trip Departure Date[(format -> dd mm yy)] : ");
		scanf("%d%d%d",&dyB,&mthB,&yrB);
	fprintf(f,"\n >>> Second Trip Departure Date[(format -> dd mm yy)] : %d / %d / 20%d",dyB,mthB,yrB);
		if(mthB==1)
        printf(" { > %d JANUARY of 20%d}",dy,yrB);
        else 
        if(mth==2)
        printf(" { > %d FEBRUARY of 20%d}",dy,yrB);
        else
        if(mth==3)
        printf(" { > %d MARCH of 20%d}",dy,yrB);
        else
        if(mth==4)
        printf(" { > %d APRIL of 20%d}",dy,yrB);
        else
        if(mth==5)
        printf(" { > %d MAY of 20%d}",dy,yrB);
        else
        if(mth==6)
        printf(" { > %d JUNE of 20%d}",dy,yrB);
        else
        if(mth==7)
        printf(" { > %d JULY of 20%d}",dy,yrB);
        else
        if(mth==8)
        printf(" { > %d AUGUST of 20%d}",dy,yrB);
        else
        if(mth==9)
        printf(" { > %d SEPTEMBER of 20%d}",dy,yrB);
        else
        if(mth==10)
        printf(" { > %d OCTOBER of 20%d}",dy,yrB);
        else
        if(mth==11)
        printf(" { > %d NOVEMBER of 20%d}",dy,yrB);
        else
        if(mth==12)
        printf(" { > %d DECEMBER of 20%d}",dy,yrB);
		printf("\n\n >>> Second Trip Departure Time : ");
		gets(tymB);
		gets(tymB);
	fprintf(f,"\n >>> Second Trip Departure Time : %s",tymB);
		printf("\n >>> Number Of Travellors : ");
		scanf("%d",&n);
	fprintf(f,"\n >>> Number Of Travellors : %d",n);
		printf(" [> Adult [( above 12 years )] : ");
		scanf("%d",&a);
	fprintf(f,"\n\t [> Adult [( above 12 years )] : %d",a);
		printf(" [> Children [(2 to 12 Years )] : ");
		scanf("%d",&c);
	fprintf(f,"\n\t [> Children [(2 to 12 Years )] : %d",c);
		printf(" [> Infants [( less than 2 years )] : ");
		scanf("%d",&in);
	fprintf(f,"\n\t [> Infants [( less than 2 years )] : %d",in);
		printf("\n >>> Select class :-");
		printf("\n 1]> Economy \n 2]> Business \n 3]> First Class \n 4]> Premium Economy");
		printf("\n\n >> Input Choice : ");
		scanf("%d",&chB);
		if(chB==1)
		{
		printf("\n { > Class Type : Economy }");
	fprintf(f,"\n { > Class Type : Economy }");
		}
		else 
		if(chB==2)
		{
		printf("\n { > Class Type : Business }");
	fprintf(f,"\n { > Class Type : Business }");
		}
		else
		if(chB==3)
		{
		printf("\n { > Class Type : First Class }");
	fprintf(f,"\n { > Class Type : First Class }");
		}
		else
		if(chB==4)
		{
		printf("\n { > Class Type : Premium Economy }");
	fprintf(f,"\n { > Class Type : Premium Economy }");
		}
	}
	printf("\n\n |> Choose Your Favourable Flight :-");
    printf("\n 1]> IndiGo Airlines\n 2]> Air India\n 3]> SpiceJet\n 4]> Jet Airways\n 5]> GoAir\n 6]> AirAsia India\n 7]> Vistara Airlines\n >> Input Choice : ");
    scanf("%d",&chC);
    if(chC==1)
    {
        printf(" { > Flight Name : IndiGo Airlines }");
    fprintf(f,"\n { > Flight Name : IndiGo Airlines }");
    	printf("\n\n >>> Price : ");
    	scanf("%d",&pr);
    fprintf(f,"\n >>> Price : %d",pr);
    	printf("\n >>> Flight No.[(format -> 6E-*** )] : ");
    	gets(fn);
		gets(fn);
	fprintf(f,"\n >>> Flight No.[(format -> 6E-*** )] : %s",fn);
    }
    else
	if(chC==2)
	{
		printf(" { > Flight Name : Air India }");
	fprintf(f,"\n { > Flight Name : Air India }");
		printf("\n\n >>> Price : ");
    	scanf("%d",&pr);
    fprintf(f,"\n >>> Price : %d",pr);
    	printf("\n >>> Flight No.[(format -> AI-**** )] : ");
    	gets(fn);
    	gets(fn);
    fprintf(f,"\n >>> Flight No.[(format -> AI-**** )] : %s",fn);
	}
	else
	if(chC==3)
	{
		printf(" { > Flight Name : SpiceJet }");
	fprintf(f,"\n { > Flight Name : SpiceJet }");
		printf("\n\n >>> Price : ");
    	scanf("%d",&pr);
    fprintf(f,"\n >>> Price : %d",pr);
    	printf("\n >>> Flight No.[(format -> SG-***/**** )] : ");
    	gets(fn);
    	gets(fn);
    fprintf(f,"\n >>> Flight No.[(format -> SG-***/**** )] : %s",fn);
	}
	else
	if(chC==4)
	{
		printf(" { > Flight Name : Jet Airways }");
	fprintf(f,"\n { > Flight Name : Jet Airways }");
		printf("\n\n >>> Price : ");
    	scanf("%d",&pr);
   	fprintf(f,"\n >>> Price : %d",pr);
    	printf("\n >>> Flight No.[(format -> 9W-K-**** )] : ");
    	gets(fn);
    	gets(fn);
    fprintf(f,"\n >>> Flight No.[(format -> 9W-K-**** )] : %s",fn);
	}
	else
	if(chC==5)
	{
		printf(" { > Flight Name : GoAir }");
	fprintf(f,"\n { > Flight Name : GoAir }");
		printf("\n\n >>> Price : ");
    	scanf("%d",&pr);
   	fprintf(f,"\n >>> Price : %d",pr);
    	printf("\n >>> Flight No.[(format -> G8-**** )] : ");
    	gets(fn);
    	gets(fn);
    fprintf(f,"\n >>> Flight No.[(format -> G8-**** )] : %s",fn);
	}
	else
	if(chC==6)
	{
		printf(" { > Flight Name : AirAsia India}");
	fprintf(f,"\n { > Flight Name : AirAsia India}");
		printf("\n\n >>> Price : ");
    	scanf("%d",&pr);
    fprintf(f,"\n >>> Price : %d",pr);
    	printf("\n >>> Flight No.[(format -> I5-**** )] : ");
    	gets(fn);
    	gets(fn);
    fprintf(f,"\n >>> Flight No.[(format -> I5-**** )] : %s",fn);
	}
	else
	if(chC==7)
	{
		printf(" { > Flight Name : Vistara Airlines}");
	fprintf(f,"\n { > Flight Name : Vistara Airlines}");
		printf("\n\n >>> Price : ");
    	scanf("%d",&pr);
    fprintf(f,"\n >>> Price : %d",pr);
    	printf("\n >>> Flight No.[(format -> UK-**** )] : ");
    	gets(fn);
		gets(fn);
	fprintf(f,"\n >>> Flight No.[(format -> UK-**** )] : %s",fn);
	}
    	printf("\n >>> Seat No. : ");
    	gets(s);
    fprintf(f,"\n >>> Seat No. : %s",s);
    	printf("\n >>> Ticket No. : ");
    	gets(tn);
    fprintf(f,"\n >>> Ticket No. : %s",tn);
	printf("\n |> Add Food Items?");
	printf("\n 1]> YES    \t    2]> NO \n   >> Input Choice : ");
	scanf("%d",&chD);
	while(i<=1)
	{
		i++;
		if(chD==1)
		{
		fprintf(f,"\n |> Food Items :- ");
			printf("\n [> Select Your Favourable Food Items :-");
			printf("\n  1]> Veg Meal -- 140\n  2]> Veg Biriyani -- 180\n  3]> Non-Veg Meal -- 200\n  4]> Chicken Tikka -- 120\n  5]> Paneer Tikka -- 70\n  6]> Chicken Pakora -- 90\n  7]> Coffee -- 80\n  8]> Tea -- 60\n  9]> Cold Drinks -- 120\n 10]> Lassi -- 220\n 11]> Chicken Salad -- 190\n 12]> Egg Muglai -- 230\n 13]> Butter Roti -- 120\n 14]> Kashmiri Pulao -- 525\n 15]> Chicken Zinger Burger -- 225");
			printf("\n\n >> Number Of Food Items You Want To Add : ");
			scanf("%d",&nf);
			for(j=1;j<=nf;j++)
			{
				printf("\n >> Input Choice-%d : ",j);	
				scanf("%d",&chE);
				if(chE==1)
				{
					printf(" { > Veg Meal }\n");
				fprintf(f,"\n\t { > Veg Meal = 140/- }");
					p=p+140;
				}
				if(chE==2)
				{
					printf(" { > Veg Biriyani }\n");
				fprintf(f,"\n\t { > Veg Biriyani = 180/- }");
					p=p+180;
				}
				if(chE==3)
				{
					printf(" { > Non-Veg Meal }\n");
				fprintf(f,"\n\t { > Non-Veg Meal = 200/- }");
					p=p+200;
				}
				if(chE==4)
				{
					printf(" { > Chicken Tikka }\n");
				fprintf(f,"\n\t { > Chicken Tikka = 120/- }");
					p=p+120;
				}
				if(chE==5)
				{
					printf(" { > Paneer Tikka }\n");
				fprintf(f,"\n\t { > Paneer Tikka = 70/- }");
					p=p+70;
				}
				if(chE==6)
				{
					printf(" { > Chicken Pakora }\n");
				fprintf(f,"\n\t { > Chicken Pakora = 90/- }");
					p=p+90;
				}
				if(chE==7)
				{
					printf(" { > Coffee }\n");
				fprintf(f,"\n\t { > Coffee = 80/- }");
					p=p+80;
				}
				if(chE==8)
				{
					printf(" { > Tea }\n");
				fprintf(f,"\n\t { > Tea = 60/- }");
					p=p+60;
				}
				if(chE==9)
				{
					printf(" { > Cold Drinks }\n");
				fprintf(f,"\n\t { > Cold Drinks = 120/- }");
					p=p+120;
				}
				if(chE==10)
				{
					printf(" { > Lassi }\n");
				fprintf(f,"\n\t { > Lassi = 220/- }");
					p=p+220;
				}
				if(chE==11)
				{
					printf(" { > Chicken Salad }\n");
				fprintf(f,"\n\t { > Chicken Salad = 190/- }");
					p=p+190;
				}
				if(chE==12)
				{
					printf(" { > Egg Muglai }\n");
				fprintf(f,"\n\t { > Egg Muglai = 230/- }");
					p=p+230;
				}
				if(chE==13)
				{
					printf(" { > Butter Roti }\n");
				fprintf(f,"\n\t { > Butter Roti = 120/- }");
					p=p+120;
				}
				if(chE==14)
				{
					printf(" { > Kashmiri Pulao }\n");
				fprintf(f,"\n\t { > Kashmiri Pulao = 525/- }");
					p=p+525;
				}
				if(chE==15)
				{
					printf(" { > Chicken Zinger Burger }\n");
				fprintf(f,"\n\t { > Chicken Zinger Burger = 225/- }");
					p=p+225;
				}
			}
		}
		else
		if(chD==2)
		p=0;
		continue;
    }
    printf("\n |> Want a Cab?");
    printf("\n 1]> YES  \t  2]> NO\n >> Input Choice : ");
    scanf("%d",&chF);
while(k<=1)
	{
	  k++;
      if(chF==1)
      {
    fprintf(f,"\n |> Cab facility Selected :- ");
    	printf("\n >>> Pickup Address : ");
    	gets(pa);
		gets(pa);
	fprintf(f,"\n    >>> Pickup Address : %s",pa);
        printf("\n >>> Pickup Time : ");
        gets(ptym);
    fprintf(f,"\n    >>> Pickup Time : %s",ptym);
        printf("\n >>> Cab Facility Charge : ");
        scanf("%d",&cc);
    fprintf(f,"\n    >>> Cab Facility Charge : %d",cc);
	  }
	  else
	  if(chF==2)
	  cc=0;
	  continue;
	}
    total=pr+p+cc;
    printf("\n |> Total Amount : Rs. %d.00",total);
fprintf(f,"\n |> Total Amount : Rs. %d.00",total);
	printf(" \n\n\n  ***** PAYMENT__DETAILS *****");
fprintf(f,"\n\n\n  ***** PAYMENT__DETAILS *****");
    printf("\n\n |> Select Your Payment Method :-");
    printf("\n 1]> Cash \t 2]> Debit Card \t 3]> Credit Card\n >> Input Choice : ");
    scanf("%d",&chG);
    if(chG==1)
    {
	printf("\n >> Cash Payment");
fprintf(f,"\n >> Cash Payment");
	}
	else
	if(chG==2 || chG==3)
	{
	fprintf(f,"\n >> Card Payment");
		printf("\n >> Card No. : ");
		gets(cn);
		gets(cn);
	fprintf(f,"\n >> Card No. : %s",cn);
		printf("\n >> Card Holder Name : ");
		gets(chn);
	fprintf(f,"\n >> Card Holder Name : %s",chn);
		printf("\n >> Expire Date[(format -> mm yy)] : ");
		scanf("%d%d",&mm,&yy);
	fprintf(f,"\n >> Expire Date[(format -> mm yy)] : %d / %d",mm,yy);
		printf("\n >> CVV : ");
		scanf("%d",&cvv);
	fprintf(f,"\n >> CVV : %d",cvv);
		printf("\n [>>  PAYMENT OF Rs. %d.00 IS SUCCESSFUL  <<]\n\n\n",total);
	fprintf(f,"\n [>>  PAYMENT OF Rs. %d.00 IS SUCCESSFUL  <<]\n\n\n",total);
	}
fclose(f);
	}
	else
	if(ch==2)
	{
fp=f=fopen("E://Cancelling Information.txt","w");
	printf("\n\n { >^>^>  TICKET _ CANCELLATION  <^<^< } ");
	printf("\n\n |> Customer ID : ");
	gets(id);
	gets(id);
fprintf(fp,"\n |> Customer ID : %s",id);
	printf("\n |> Ticket No. : ");
	gets(ctn);
fprintf(fp,"\n |> Ticket No. : %s",ctn);
	printf("\n  [>>   Your Request For Cancellation of Ticket No. -- %s Is Accepted   <<]",ctn);
fprintf(fp,"\n  [>>   Your Request For Cancellation of Ticket No. -- %s Is Accepted   <<]",ctn);
	printf("\n\n |> Refundable Amount : ");
	scanf("%d",&ra);
fprintf(fp,"\n |> Refundable Amount : %d",ra);
	printf("\n >>> Rs. %d.00 Will Be Refunded In Your Account <<< ",ra);
fprintf(fp,"\n >>> Rs. %d.00 Will Be Refunded In Your Account <<< ",ra);
	printf(" \n\n >> Enter Your Bank Name : ");
	gets(bn);
	gets(bn);
fprintf(fp,"\n >> Enter Your Bank Name : %s",bn);
	printf(" \n >> Enter Your Bank Account Number : ");
	gets(an);
fprintf(fp,"\n >> Enter Your Bank Account Number : %s",an);
	printf("\n >> Enter IFSC Code : ");
	gets(ic);
	gets(ic);
fprintf(fp,"\n >> Enter IFSC Code : %s",ic);
	printf("\n [(< The Amount Will Be Refunded Within 24 hours >)]\n\n\n");
fprintf(fp,"\n [(< The Amount Will Be Refunded Within 24 hours >)]\n");
fclose(fp);
	}
	getch();

}
