

 int poten;

void main() {
    TRISD = 0x00; // Set all PORTD pins as outputs

    PORTD = 0x00; // Initialize PORTD to 0

    ADCON1= 0 ;   // SFR to activate anolog port
    while (1) {
        poten =  ADC_Read(0);
        poten = poten / 102 ;
        if (poten == 0) {
        PORTD = 0B11000000;
        }
        if (poten == 1)  {
        PORTD = 0B11111001;
        }
        if (poten == 2) {
        PORTD = 0B10100100;
        }
        if (poten == 3)  {
        PORTD = 0B10110000;
        }
        if (poten == 4) {
        PORTD = 0B10011001;
        }
        if (poten == 5)  {
        PORTD = 0B10010010;
        }
        if (poten == 6) {
        PORTD = 0B10000010;
        }
        if (poten == 7)  {
        PORTD = 0B11111000;
        }
        if (poten == 8) {
        PORTD = 0B10000000;
        }
        if (poten == 9)  {
        PORTD = 0B10010000;
        }
    }
}