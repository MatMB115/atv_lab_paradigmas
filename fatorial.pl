fatorial(0,1). 

fatorial(N,R) :-
   N>0,
   N1 is N-1,
   fatorial(N1,F1),
   R is N * F1.