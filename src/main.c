#include <stdio.h>

#include "ist.h"


int verbose = 0;
FILE *file;
int iterations = 1;


int main(void){
  
  printf("Allocating memory for data structure... ");
  ist_init_system();
  printf("DONE\n");

  
  ISTSharingTree * I = NULL, * J = NULL, * temp = NULL ;
  
  
  ISTInterval * T[4] ;
  ISTInterval * S[4] ;
  ISTInterval * U[4] ;
  ISTInterval * V[4] ;

  
  T[0] = ist_build_interval(0,INFINITY) ;
  T[1] = ist_build_interval(1,INFINITY) ;
  T[2] = ist_build_interval(3,INFINITY) ;
  T[3] = ist_build_interval(4,INFINITY) ;

  S[0] = ist_build_interval(0,INFINITY) ;
  S[1] = ist_build_interval(1,INFINITY) ;
  S[2] = ist_build_interval(2,INFINITY) ;
  S[3] = ist_build_interval(3,INFINITY) ;
  
  U[0] = ist_build_interval(0,INFINITY) ;
  U[1] = ist_build_interval(3,INFINITY) ;
  U[2] = ist_build_interval(2,INFINITY) ;
  U[3] = ist_build_interval(3,INFINITY) ;
  
  V[0] = ist_build_interval(0,INFINITY) ;
  V[1] = ist_build_interval(0,INFINITY) ;
  V[2] = ist_build_interval(1,INFINITY) ;
  V[3] = ist_build_interval(2,INFINITY) ;
  
  ist_new(&I) ;
  ist_new(&J);

  ist_add(I,T,4) ;
  ist_add(I,S,4) ;
  ist_add(I,U,4) ;
  
  ist_add(J,V,4) ;
  
  ISTSharingTree * A, *B, *temp2;
  ISTInterval *E[4], *R[4], *F[4], *G[4], *H[4] ;
  
  E[0] = ist_build_interval(0,INFINITY) ;
  E[1] = ist_build_interval(0,INFINITY) ;
  E[2] = ist_build_interval(3,INFINITY) ;
  E[3] = ist_build_interval(4,INFINITY) ;
  
  R[0] = ist_build_interval(0,INFINITY) ;
  R[1] = ist_build_interval(0,INFINITY) ;
  R[2] = ist_build_interval(3,INFINITY) ;
  R[3] = ist_build_interval(2,INFINITY) ;
  
  F[0] = ist_build_interval(0,INFINITY) ;
  F[1] = ist_build_interval(1,INFINITY) ;
  F[2] = ist_build_interval(2,INFINITY) ;
  F[3] = ist_build_interval(2,INFINITY) ;
  
  G[0] = ist_build_interval(4,INFINITY) ;
  G[1] = ist_build_interval(5,INFINITY) ;
  G[2] = ist_build_interval(3,INFINITY) ;
  G[3] = ist_build_interval(4,INFINITY) ;
  
  H[0] = ist_build_interval(4,INFINITY) ;
  H[1] = ist_build_interval(5,INFINITY) ;
  H[2] = ist_build_interval(3,INFINITY) ;
  H[3] = ist_build_interval(2,INFINITY) ;
  
  
    
  ist_new(&A) ;
  
  ist_add(A,E,4);
  ist_add(A,R,4);
  ist_add(A,F,4);
  ist_add(A,G,4);
  ist_add(A,H,4);
  int tab[2] = {5,7};
  
  //temp = ist_compute_subsumed_paths_within_tree(A);  
  //temp2 = ist_minimal_form(A);
  

  ist_new(&B);
  
  ist_add(B, H, 4);
  
  
  temp = ist_compute_predecessor_paths_tree_request(A, (int*)tab);
  
  ist_dump_graph("test.dot", temp);
  //ist_dump_graph("test2.dot", I);
  
  ist_dispose(I) ;
  ist_dispose(J) ;
  ist_dispose(temp) ;
  ist_dispose(A);
  ist_dispose(B);
  

}