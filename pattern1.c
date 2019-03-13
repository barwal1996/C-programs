    #include <stdio.h>

    void main() {
    	int i, j=5, k, x;

    	for (i=1;i<=5;i++) {
    		for (k=1;k<=j;k++) {
    			printf(" ");
    		}
    		for (x=1;x<=i;x++) {
    			printf("%d",i);
    			printf(" ");
    		}
    		printf("\n");
    		j--;;
    	}

    }
