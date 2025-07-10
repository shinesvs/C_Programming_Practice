#include <stdio.h>

typedef struct {
    int adc;
    int temp;
} LUTEntry;

LUTEntry table[] = {
    {100, 10},
    {200, 20},
    {300, 30},
    {400, 40},
    {500, 50}
};

int adc_to_temp(int adc_value) {
    // TODO: binary search to find closest lower match
    // Return -1 if adc_value < table[0].adc
    if ( adc_value < ( table[0].adc - 50 ))
        return -1;
    
    int n = sizeof(table)/sizeof(table[0]);
    int low = 0;
    int high = n-1;
    
    
    while ( low <= high ){
        int mid = (low + high) / 2;
        
        if ( adc_value == table[mid].adc )
             return table[mid].temp;

        if ( table[mid].adc > adc_value ) {
            high = mid -1;
        } else {
            low = mid + 1; 
        } 

    }

    return table[high].temp;

}

int main() {
    int adc_input = 250;
    int temperature = adc_to_temp(adc_input);
    if (temperature != -1)
        printf("ADC %d → Temp %d°C\n", adc_input, temperature);
    else
        printf("ADC value too low.\n");
    return 0;
}
