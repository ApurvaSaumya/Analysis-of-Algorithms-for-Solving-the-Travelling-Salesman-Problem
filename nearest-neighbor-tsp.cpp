#include<iostream>
#include <utility>
#include <time.h>
using namespace std;
int city[10][10],completed[10],n,cost=0;
void takeInput()
{
int i,j;
cout<<"Enter the number of cities to be visited by the Travelling Salesman: ";
cin>>n;
cout<<"\nEnter the Cost Matrix\n\n";
for(i=0;i < n;i++)
{
cout<<"\n\nFor City-"<<(i+1)<<" :\n";
for( j=0;j < n;j++)
{
cout<<"\nEnter the cost of visiting City "<<(j+1)<<" from City "<<(i+1)<<" : ";
cin>>city[i][j];
}
completed[i]=0;
}
cout<<"\n\nThe cost list is:";
for( i=0;i < n;i++)
{
cout<<"\n";
for(j=0;j < n;j++)
{
cout<<"\nCity "<<i+1<<" to City "<<j+1<<" :";
cout<<"\tCost:"<<city[i][j];
}
}
}
int least(int c)
{
int i,nc=999;
int min=999,m;
for(i=0;i < n;i++)
{
if((city[c][i]!=0)&&(completed[i]==0))
if(city[c][i]+city[i][c] < min)
{
min=city[i][0]+city[c][i];
m=city[c][i];
nc=i;
}
}
if(min!=999)
cost+=m;
return nc;
}
void mincost(int c)
{
int i,ncity;
completed[c]=1;
cout<<c+1<<"--->";
ncity=least(c);
if(ncity==999)
{
ncity=0;
cout<<ncity+1;
cost+=city[c][ncity];
return;
}
mincost(ncity);
}
int main()
{
takeInput();
cout<<"\n\nThe Optimal Path is:\n";
const clock_t begin_time = clock();
mincost(0);
cout<<"\n\nMinimum cost resulting from following this path will be: "<<cost;
cout << "\n\nTotal time taken to run the Nearest Neighbor Algorithm: " << float(clock () - begin_time) / CLOCKS_PER_SEC << " seconds";
return 0;
}