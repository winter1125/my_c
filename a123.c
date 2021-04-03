#include <stdio.h>

int arr[100][100];

int main(void) {
int n=3;
int m=4;
int cnt=0;
cnt=n*m;
int x,y;
x=n;
y=1;
while(cnt>=1)
{

while(arr[x][y]==0 && x>0) arr[x--][y]=cnt--;
x=x+1;y=y+1;
while(arr[x][y]==0 && y<=m)arr[x][y++]=cnt--;
x=x+1;y=y-1;
while(arr[x][y]==0 && x<=n) arr[x++][y]=cnt--;
x=x-1;y=y-1;
while(arr[x][y]==0 && y>0) arr[x][y--]=cnt--;
x=x-1; y=y+1;
}

for(int i=1;i<=n; i++)
{
for(int j=1; j<=m; j++)
{
printf("%d  ", arr[i][j]);

}

printf("\n");
}


	// your code goes here
	return 0;
}
