#define dataRegister_PORTB       *((volatile byte*) 0x25)
#define directionRegister_PORTB  *((volatile byte*) 0x24)
void setup() {
  directionRegister_PORTB=32; //00100000 sets PB5 as output 
}

void loop() {
  dataRegister_PORTB = 32;
  
  for(long i = 0 ; i<1000000 ; i++){ dataRegister_PORTB = 32 ;}
  
  dataRegister_PORTB = 0 ;
  for(long i = 0 ; i<1000000 ; i++){ dataRegister_PORTB = 0 ;}
}
