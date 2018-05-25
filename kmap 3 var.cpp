#include<iostream>
using namespace std ;

int main()
{

		cout<<"		 	             ab		"<<endl<<endl
		<<"		 	   00     01     11     10"<<endl		
		<<" 		 	 ____________________________"<<endl
		<<endl
		<<"		0	|  m0  |  m1  |  m3  |  m2  |"<<endl
		<<" 		 	 ____________________________\nc"<<endl
		<<endl		
		<<"		1	|  m4  |  m5  |  m7  |  m6  |"<<endl
		<<" 		 	 ____________________________"<<endl;	
	cout<<"Enter the min terms"<<endl<<"	{1 for m1 , 2 for m2 and so on,, To terminate enter  a negative number"<<endl;
	int m[8] = {0,0,0,0,0,0,0,0};
	
	
	int b;
	for (b;b>=0;)
	{
	cin>>b;
	m[b]=1;
	}
	cout<<"				ab		"<<endl<<endl
		<<"		 	 00   01   11   10"<<endl		
		<<" 		 	 _________________"<<endl
		<<"		0	|  "<<m[0]<<"|  "<<m[1]<<"|  "<<m[3]<<"|  "<<m[2]<<"  |"<<endl
		<<" 		 	 _________________"<<endl
		<<"	c	1	|  "<<m[4]<<"|  "<<m[5]<<"|  "<<m[7]<<"|  "<<m[6]<<"  |"<<endl
		<<" 		 	 _________________"<<endl;
		
	string simp;
	int M[12]={0,0,0,0,0,0,0,0,0,0,0,0}	;
	
	if(m[0]==1 && m[1]==1)
	M[0]=1;
	if(m[1]==1 && m[3]==1)
	M[1]=1;
	if(m[3]==1 && m[2]==1)
	M[2]=1;
	if(m[4]==1 && m[5]==1)
	M[3]=1;
	if(m[5]==1 && m[7]==1)
	M[4]=1;
	if(m[7]==1 && m[6]==1)
	M[5]=1;
	if(m[0]==1 && m[4]==1)
	M[6]=1;
	if(m[1]==1 && m[5]==1)
	M[7]=1;
	if(m[3]==1 && m[7]==1)
	M[8]=1;
	if(m[2]==1 && m[6]==1)
	M[9]=1;
	if(m[0]==1 && m[2]==1)
	M[10]=1;
	if(m[4]==1 && m[6]==1)
	M[11]=1;
	
	
	int M4[6]={0,0,0,0,0,0};
	
	if(M[0]==1 && M[2]==1)
	M4[0]=1;	
	if(M[3]==1 && M[5]==1)
	M4[1]=1;
	if(M[0]==1 && M[3]==1)
	M4[2]=1;
	if(M[1]==1 && M[4]==1)
	M4[3]=1;
	if(M[2]==1 && M[5]==1)
	M4[4]=1;
	if(M[10]==1 && M[11]==1)
	M4[5]=1;
	
	int M8[1]={0};
	if(M4[0]==1 && M4[1]==1)
	M8[0]=1;
	
	
	//solving 
	
	if(M8[0]==1)
	simp=simp + "1";
	
	if(M4[0]==1 && M4[1]==0)
	simp=simp+"C'+";
	if(M4[1]==1 && M4[0]==0)
	simp=simp+"c+";
	if(M4[2]==1 && M4[4]==0)
	simp=simp+"a'+";
	if(M4[3]==1 && M4[5]==0)
	simp=simp+"b+";
	if(M4[4]==1 && M4[2]==0)
	simp=simp+"a+";
	if(M4[5]==1 && M4[3]==0)
	simp=simp+"b'+";
	
	
	if(M[0]==1 && M[2]==0 && M[3]==0)
	simp=simp+"a'c'+";
	if(M[1]==1 && M[10]==0 && M[4]==0)
	simp=simp+"bc'+";
	if(M[2]==1 && M[5]==0 && M[0]==0)
	simp=simp+"ac'+";
	if(M[3]==1 && M[5]==0 && M[0]==0)
	simp=simp+"ac+";
	if(M[4]==1 && M[11]==0 && M[1]==0)
	simp=simp+"bc+";
	if(M[5]==1 && M[2]==0 && M[3]==0)
	simp=simp+"ac+";
	if(M[6]==1 && M[7]==0 && M[9]==0)
	simp=simp+"a'b'+";
	if(M[7]==1 && M[8]==0 && M[6]==0)
	simp=simp+"a'b'+";
	if(M[8]==1 && M[7]==0 && M[9]==0)
	simp=simp+"ab+";
	if(M[9]==1 && M[8]==0 && M[6]==0)
	simp=simp+"ab'+";
	if(M[10]==1 && M[11]==0 && M[1]==0)
	simp=simp+"b'c'+";
	if(M[11]==1 && M[10]==0 && M[4]==0)
	simp=simp+"b'c+";
	
	if(m[0]==1 && m[1]==0 && m[4]==0 && m[2]==0)
	simp=simp+"a'b'c'+";
	if(m[1]==1 && m[0]==0 && m[3]==0 && m[5]==0)
	simp=simp+"a'b c'+";
	if(m[2]==1 && m[0]==0 && m[3]==0 && m[6]==0)
	simp=simp+"abc'+";
	if(m[3]==1 && m[1]==0 && m[7]==0 && m[2]==0)
	simp=simp+"a b'c'+";
	if(m[4]==1 && m[0]==0 && m[5]==0 && m[2]==0)
	simp=simp+"a'b'c+";
	if(m[5]==1 && m[1]==0 && m[4]==0 && m[7]==0)
	simp=simp+"a'bc+";
	if(m[6]==1 && m[2]==0 && m[7]==0 && m[4]==0)
	simp=simp+"abc+";
	if(m[7]==1 && m[5]==0 && m[3]==0 && m[6]==0)
	simp=simp+"ab'c'+";
	
	cout<<simp;
	
	
	
		




		
}
