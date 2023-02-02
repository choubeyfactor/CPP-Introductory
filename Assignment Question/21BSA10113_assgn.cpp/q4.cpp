//[21BSA10113] Q4

#include<iostream>
using namespace std;
main()
{
int a[5]={0,0,0,0,0};
int n,vote,sb=0,i;
 cout<<"Enter the number of votes\n";
 cin>>n;
for(i=0;i<n;i++)
 {
 cout<<"Enter your vote : ";
 cin>>vote;
switch(vote)
 {
case 1:a[0]++;
break;
case 2:a[1]++;
break;
case 3:a[2]++;
break;
case 4:a[3]++;
break;
case 5:a[4]++;
break;
default:sb++;
 }
 }
 cout<<"\n\nResults of Election are as follows\n";
for(i=0;i<5;i++)
 cout<<"\ncandidate "<<i+1<<" : "<<a[i];
 cout<<"\nSpoiled Ballots : "<<sb;
}