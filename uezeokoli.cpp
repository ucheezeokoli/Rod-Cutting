#include <iostream>
#define INFINITY ((int)(1e+300 * 1e+300))
using namespace std;

int CutRod(int* p, int* r, int* s, int n)
{
  int j,i;
  for (j = 1; j <= n; j++)
  {
    int q = -INFINITY;
    for (i = 1; i <= j; i++)
    {
      if (q < p[i] + r[j-i])
      {
        q = p[i] + r[j-i];
        s[j] = i;
      }
    }
    r[j] = q;   
  }
}

int main(int argc,char **argv) {

  // Get the size of the sequence
  int n = 1;
  int* p; 

  cin >> n;
  p = new int[n+1];
  //read p; 
  p[0] = 0; 
  for(int i=1; i<=n; i++)
  {
    cin >> p[i];  
  }

 int* r = new int[n+1];
 int* s = new int[n+1];
 r[0] = 0;

CutRod(p, r, s, n);

cout << r[n] << endl;

while (n > 0)
{
  cout << s[n] << " ";
  n = n - s[n];
}
 cout << "-1" << endl;

 delete[] p;
 delete[] r;
 delete[] s;
}
