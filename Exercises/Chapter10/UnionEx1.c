#include <stdio.h>
#include <stdlib.h>

union u_type {
    double d;
    unsigned char c[8];
};

double uread(FILE *fp) {
    union u_type var;
    rewind(fp);
    for(int i=0; i<8; i++) 
        var.c[i] = fgetc(fp);
    return var.d;
}

void uwrite(double num, FILE *fp) {
    union u_type var;
    var.d = num;
    for(int i=0; i<8; i++) 
        fputc(var.c[i], fp);
}

int main(void)
{
    FILE *fp;
    double d = 100.23;
    
    if((fp = fopen("myfile", "wb+"))==NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    
    uwrite(d, fp);
    d = uread(fp);
    printf("%lf", d);
    fclose(fp);
    return 0;
}