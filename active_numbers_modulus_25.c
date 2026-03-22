#include <stdio.h>
#include <stdbool.h>
#define M 100

unsigned int DIGIT_SUM(unsigned int n) {
   
unsigned int sum = 0;

while (n > 0) {
sum += n % 10;
n /= 10;        
}

return(sum);

}

int main(void) {

unsigned short p = 25;

unsigned int x[M];
bool t[M];

for (size_t k = 0; k < M; k++) {

x[k] = k;
t[k] = 0;

}

for (size_t k = 0; k < M; k++) {

unsigned short a_uno, a_zero;
a_uno = ((x[k] / 10) % 10);
a_zero = ((x[k] / 1) % 10); 

unsigned int n = 10 * a_uno + a_zero;

if (((2 * DIGIT_SUM(n)) % p) == (n % p)) {

t[k] = 1;

}

}

//Another for loop ...
for (size_t k = 0; k < M; k++) {

if (t[k] == 1) {

printf("Active Number: %u.\n", x[k]);

}

}
return(0);

}