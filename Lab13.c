#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int size = 0, nubber = 0, count = 0, i = 0, j = 0;      
	float Z[size - nubber];
	int Coun;
	float Buffer;            
	printf ("Size of first array: ");
	scanf ("%d", &size);

	float X[size];
	
	srand (time(0));
	
	for (i = 0; i < size; i++) {
		X[i] =(float)(rand()%20001)/100-100;
		if (X[i] == 0)
			nubber++;
	}
	printf ("Array X: \n");	

	for (i = 0; i < size; i++) {
		printf ("%f\n", X[i] );
	}
	printf ("\n");
	for (i = 0; i < size; i++) {
		if (X[i] > 0)
			count++;
		Buffer = X[i];
		Coun = i - 1;
		while (Coun >= 0 && X[Coun] < Buffer) {
			X[Coun+1] = X[Coun];
			X[Coun] = Buffer;
			Coun--;
		}
	}
	for (i = count - 1; i >= 0; i--) {
		Z[j] = X[i];
		j++;
	}
	for (i = size - 1; i >= count + nubber; i-- ) {
		Z[j] = X[i];
		j++;	
	}
	
	printf ("Array Z: \n");	
	for (i = 0; i < size - nubber; i++) {
		printf ("%f\n", Z[i] );
	}

	return 0;
}
