/* For controlling a 16x2 display with the HITACHI HD44780U (LCD-II) display
driver, using an AT90USBKEY2 AVR micro controller
*/

#ifndef MYDISPLAY_H_
#define MYDISPLAY_H_


/*Using all 8 bits of Port C to send data and the first 2 bits of Port E to
control Resgister Select (RS) and Enable (EN) */
 
#define dataPort PORTC
#define controlPort PORTE
#define EN 0x01
#define INVEN 0xFE
#define RS 0x02
#define INVRS 0xFD

char datadelay = 5;
char chardelay = 5;
unsigned long timeCount = 0;

void display_Init();
void display_In_Tray(char alu, char stl, char blk, char wht);
void display_On_Belt(char alu, char stl, char blk, char wht);
void display_Calibration(int count, int max, int min, int avg);
void update_Calibration(int count, int max, int min, int avg);
void integer_Convert(int in);
void write_Char(char in);
void write_Data(char in);
int count(int in);
void disp_Delay(unsigned int waitTime);
void init_usCounter();

#endif
