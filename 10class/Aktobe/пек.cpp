#include<stdio.h>			
#define bool int
#define true 0
#define false 1		
int main() {
FILE *in, *out;
int per[10], obr[10];
int i, j, k, tmp, min, raz, n;
bool flag;
					fscanf(in, "%d", &n);
					for (i = 0; i < n; i++) {
						per[i] = i+1;
					}
					while (1) {
						for (k = 0; k < n; k++) {
							fprintf(out, "%d", per[k]);
						}
						flag = false;
						for (i = n - 2; i >= 0; i--) {
							if (per[i] < per[i + 1]) {
								flag = true;
								break;
							}
						}
						if (flag == false) {
							break;
						}
						fprintf(out, "\n");
						raz = per[i+1];
						for (j = i+1; j < n; j++) {
							if (((per[j] - per[i]) < raz) && (per[i] < per[j])) {
								min = j;
							}
						}
						tmp	      = per[i];
						per[i] 	   = per[min];
						per[min] = tmp;
						for (j = i + 1; j < n; j++) {
							obr[j] = per[j];
						}
						j = i + 1;
						for (k = n-1; k >= i+1; k--) {
							per[j] = obr[k];
							j++;
						}
					}
					fclose(in);
					fclose(out);
					return 0;
				}
