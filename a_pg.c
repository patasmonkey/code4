
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <openacc.h>
#include "timer.h"

#define NN 4096
#define NM 4096
//#define NN 1024
//#define NM 1024

double A[NN][NM];
double Anew[NN][NM];

int main(int argc, char** argv)
{
  printf("aa");
  
 /* #pragma acc enter data copyin(A) */
 /* #pragma acc enter data copyin(Anew) */
  double **AA;//[NN][NM];
  //double AAnew[NN][NM];
  
  /* #pragma acc data update copyin(A) */
  /* #pragma acc data update copyin(Anew) */


  const int n = NN;
  const int m = NM;
  const int iter_max = 1000;
  const double tol = 1.0e-6;
  double error     = 1.0;

  //#pragma acc update host(A,Anew)
  memset(A, 0, n * m * sizeof(double));
  memset(Anew, 0, n * m * sizeof(double));
  
/* #pragma acc update device(A) */
/* #pragma acc update device(Anew)   */
/* #pragma acc kernels present(A, Anew) */
  for (int j = 0; j < n; j++)
    {
      A[j][0]    = 1.0;
      Anew[j][0] = 1.0;
    }
/* #pragma acc update host(A,Anew) */

  printf("Jacobi relaxation Calculation: %d x %d mesh\n", n, m);
  //#pragma acc update device(A)
  //#pragma acc update device(Anew)    
  StartTimer();
  int iter = 0;

/* #pragma acc update device(A) */
/* #pragma acc update device(Anew) */
 
  while ( error > tol && iter < iter_max )
    {
      error = 0.0;
/* #pragma acc kernels present(A, Anew) */
      for( int j = 1; j < n-1; j++)
	{
	  for( int i = 1; i < m-1; i++ )
	    {
	      Anew[j][i] = 0.25 * ( A[j][i+1] + A[j][i-1]
				    + A[j-1][i] + A[j+1][i]);
	      error = fmax( error, fabs(Anew[j][i] - A[j][i]));
	    }
	}

/* #pragma acc kernels present(A, Anew) */
      for( int j = 1; j < n-1; j++)
	{
	  for( int i = 1; i < m-1; i++ )
	    {
	      A[j][i] = Anew[j][i];    
	    }
	}

      if(iter % 100 == 0) printf("%5d, %0.6f\n", iter, error);
        
      iter++;
    }

/* #pragma acc update host(A,Anew) */
  //#pragma acc exit data copyout(A,Anew)
  int cou=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(A[i][j]>=0.1){
  	printf("%f ",A[i][j]);
  	cou++;
      }
      if(A[i][j]>=0.1){
  	printf("%f ",Anew[i][j]);
  	cou++;
      }
    }
  }
  double runtime = GetTimer();
 
  printf(" total: %f s %d\n", runtime / 1000,cou);

  exit(0);
}
