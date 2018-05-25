#include<iostream>
using namespace std ;

int main()
{

		cout<<"		 	             a	"<<endl<<endl
		<<"		 	     0     1"<<endl		
		<<" 			_______________"<<endl
		<<endl
		<<"		0	|  m0  |  m1  |"<<endl
		<<" 			_______________\nb"<<endl
		<<endl		
		<<"		1	|  m2  |  m3  |"<<endl
		<<" 			_______________"<<endl;	
	cout<<"Enter the min terms"<<endl<<"	{1 for m1 , 2 for m2 and so on,, To terminate enter  a negative number"<<endl;
	int m[4] = {0,0,0,0};
	string simp;
	
	int b;
	for (b;b>=0;)
	{
	cin>>b;
	m[b]=1;
	}
	cout<<"				a		"<<endl<<endl
		<<"		 	 0   1"<<endl		
		<<" 		 	 ___________"<<endl
		<<"		0	|  "<<m[0]<<"|  "<<m[1]<<"  |"<<endl
		<<" 		  	___________"<<endl
		<<"	c	1	|  "<<m[2]<<"|  "<<m[3]<<"  |"<<endl
		<<" 		 	 ___________"<<endl;
		
	int M[4]={0,0,0,0}	;
if(m[0]==1 && m[1]==1)
{
	M[0]=1;
}
if(m[2]==1 && m[3]==1)
{
	M[1]=1;
}
if(m[0]==1 && m[2]==1)
{
	M[2]=1;
}
if(m[1]==1 && m[3]==1)
{
	M[3]=1;
}
int M4[1]={0};
if(M[0]==1 && M[1]==1)
{
	M4[0]=1;
}


if(m[0]==0 && m[1]==0 && m[2]==0 && m[3]==0)
{
simp=simp+"0";
}

if(M4[0]==1)
{
	simp=simp+"1";
}

if(M[0]==1 && M[1]==0)
{
	simp=simp+"c'+";
}
if(M[1]==1 && M[0]==0)
{simp=simp+"c+";
}
if(M[2]==1 && M[3]==0)
{simp=simp+"a'+";
}
if(M[3]==1 && M[2]==0)
{simp=simp+"a+";
}

if(m[0]==1 && m[1]==0 && m[2]==0)
{simp=simp+"a'c'+";
}
if(m[1]==1 && m[0]==0 && m[3]==0)
{simp=simp+"ac'+";
}
if(m[2]==1 && m[0]==0 && m[3]==0)
{simp=simp+"a'c+";
}
if(m[3]==1 && m[1]==0 && m[2]==0)
{simp=simp+"ac+";
}




cout<<simp;

}
