#include <stdio.h>
#include <stdlib.h>

/* All fields indicate OK if 1, malfunctioning/low if 0 */
struct telemetry {
    unsigned fuel: 1;
    unsigned radio: 1;
    unsigned tv: 1;
    unsigned water: 1;
    unsigned food: 1;
    unsigned waste: 1;
} flt_rec;

void display(struct telemetry i);

int main() {
    FILE *fp;
    int i;

    if((fp = fopen("flight.dat", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    /* Simulate 100-minute flight recording */
    for(i = 0; i < 100; i++) {
        flt_rec.fuel = rand() % 2;
        flt_rec.radio = rand() % 2;
        flt_rec.tv = rand() % 2;
        flt_rec.water = rand() % 2;
        flt_rec.food = rand() % 2;
        flt_rec.waste = rand() % 2;

        display(flt_rec);
        fwrite(&flt_rec, sizeof(flt_rec), 1, fp);
    }
    fclose(fp);
    return 0;
}

void display(struct telemetry i) {
    if(i.fuel) printf("Fuel OK\n");
    else printf("Fuel low\n");
    
    if(i.radio) printf("Radio OK\n");
    else printf("Radio failure\n");
    
    if(i.tv) printf("TV system OK\n");
    else printf("TV malfunction\n");
    
    if(i.water) printf("Water supply OK\n");
    else printf("Water supply low\n");
    
    if(i.food) printf("Food supply OK\n");
    else printf("Food supply low\n");
    
    if(i.waste) printf("Waste containment OK\n");
    else printf("Waste container failure\n");
    
    printf("\n");
}