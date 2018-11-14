
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <set>
using namespace std;
#include <iostream>
#include <fstream>

int main ()
{
  int N;
  double miu;
  double sigma;
  int n;
  cout << "Please enter N: ";
  cin >> N;
  cout << "Please enter MIU: ";
  cin >> miu;
  cout << "Please enter sigma: ";
  cin >> sigma;
  cout << "Please enter n: ";
  cin >> n;
  double X[N];
  int i;
  double pi = 3.1415926535897;
  double num = miu- N/2;
  double media =0;
  for (i=0; i<N; i++)
    {
      media = media+ num;
      X[i]=num;
      num = num +1;
      
    }
  media = media/N;
  int j;
  double first;
  double second;
  double resultado[N];
  for (j=0; j<N; j++)
    {
      first = 1/(sqrt(2*pi*sigma));
      second = exp((-(X[i]-media)*(X[i]-media))/(2*sigma*sigma));
       resultado[i]= first*second;
    }
 ofstream myfile;

  
 double  h = N/n;
 int s = 0;
 int count = 1;
 while(s<=N)
   {
     string mensaje = "sample_"+ count + ".dat";
 myfile.open (mensaje);
  for(i=0;i<N; i++)
    {
      myfile << resultado[i];
    }
   myfile.close();
   s = s +h;
   count = count+1;
   }
}
