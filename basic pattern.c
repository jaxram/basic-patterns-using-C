#include<stdio.h>
void square(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf(" *");
		}
		printf("\n");
	}	
}
void rect(int n,int m)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" *");
		}
		printf("\n");
	}	
}
void rtriangle(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}	
}
void ltriangle(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
void rinvertedtriangle(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}	
}
void linvertedtriangle(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
void pyramid(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=(2*i);j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
void invertedpyramid(int n)
{
	int i,j,c;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=(2*i)-1;j<=n+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
void hollowsquare(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0  || j==0 || j==n-1 || i==n-1)
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void hollowrect(int n,int m)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0  || j==0 || j==m-1 || i==n-1)
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void hollowrtri(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==0  || j==0 || j==n-1 || i==n-1 || i==n-1 ||j==i )
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void hollowltri(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			if( i==n-1 ||i==j|| i==n ||  j==1  )
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void invertedhollowrtri(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(i==0  || j==0 || j==n-1 || i==n-1 || i==n-1 ||j==i )
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void invertedhollowltri(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=1;j<i-n;j++)
		{
			printf(" ");
		}
		for(j=0;j<n;j++)
		{
			if(i==0 ||i==j||  j==n-1)
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void hollowpyramid(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			if(i==1 || j==1 || i==n-1 ||j==i-1)
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}

void invertedhollowpyramid(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<n;j++)
		{
			if(i==0  || j==0 || j==n-1 || i==n-1 || i==n-1 ||j==i )
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void hollowboxxpattern(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i==0  || j==1 || j==n-1 || i==n-1 || i==n-1 ||j==i ||i==n-j-1 )
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void xpattern(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
	
		for(j=1;j<n;j++)
		{
			if(j==i ||i==n-j )
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
void diamond(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=2*i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=(2*i);j<=(2*n)-2;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}		
}
void hollowdiamond(int n)
{
	int i,j,c;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==1 || j==1  ||j==i)
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<n;j++)
		{
			if( j==0 || j==n-1 || i==n-1 || i==n-1 ||j==i )
			printf("* ");
			else
			printf("  ");
		}
		
		printf("\n");
	}	
}
int main()
{
	//hollowdiamond(10);
}
