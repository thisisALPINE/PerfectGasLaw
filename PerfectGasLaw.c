#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double pression, volume, numberMoles, temperature; 

double constant = 8.31; //if you need to use the 0.0821 one, change this line

int p, v, n, t;

void getValuesForPression(void) {
    
    printf("Number of moles? (mol) ");
    scanf("%lf", &numberMoles);
    printf("Volume? (m3) ");
    scanf("%lf", &volume);
    printf("Temperature? (Kelvin) ");
    scanf("%lf", &temperature);
    
}

void getValuesForVolume(void) {
    
    printf("Number of moles? (mol) ");
    scanf("%lf", &numberMoles);
    printf("Pression? (Pascal) ");
    scanf("%lf", &pression);
    printf("Temperature? (Kelvin) ");
    scanf("%lf", &temperature);
    
}

void getValuesForMoles(void) {
    
    printf("Pression? (Pascal) ");
    scanf("%lf", &pression);
    printf("Volume? (m3) ");
    scanf("%lf", &volume);
    printf("Temperature? (Kelvin) ");
    scanf("%lf", &temperature);
    
}

void getValuesForTemperature(void) {
    
    printf("Pression? (Pascal) ");
    scanf("%lf", &pression);
    printf("Volume? (m3) ");
    scanf("%lf", &volume);
    printf("Moles? (mol) ");
    scanf("%lf", &numberMoles);
    
}

float calcPression(void) {
    
    getValuesForPression();
    
    pression = (numberMoles * constant * temperature) / volume;
    
    return pression;
    
}

float calcVolume(void) {
    
    getValuesForVolume();
    
    volume = (numberMoles * constant * temperature) / pression;
    
    return volume;
    
}

float calcNumberMoles(void) {
    
    getValuesForMoles();
    
    numberMoles = (pression * volume) / (constant * temperature);
    
    return numberMoles;
    
}

float calcTemperature(void) {
    
    getValuesForTemperature();
    
    temperature = (pression * volume) / (numberMoles * constant);
    
    return temperature;
}

int main(void) {

    float calcVolume(void);
    float calcTemperature(void);
    float calcPression(void);
    float calcNumberMoles(void);

    char choiceFunc;

    printf("Welcome my friend! Which of the following variables would you like to calculate? (p)ression, (v)olume, (t)emperature or (n)umber of mole? ");

    choiceFunc = getchar();
    
    if (choiceFunc == 'p') 
        
        printf("\nPression is equal to %.3lf Pascal.\n\n", calcPression());
    
    else if (choiceFunc == 'v')
        
        printf("\nVolume is equal to %.3lf cube metres.\n\n", calcVolume());
    
    else if (choiceFunc == 'n')
        
        printf("\nNumber of Moles is equal to %.3lf mol.\n\n", calcNumberMoles());
    
    else if (choiceFunc == 't')
        
        printf("\nTemperature is equal to %.3lf Kelvin.\n\n", calcTemperature());
    
}
