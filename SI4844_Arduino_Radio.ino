// SI4844 Arduino Radio
// Program to accompany the article
// Build an Analog-Tuned Arduino-Controlled AM/FM/SW Radio
// DrG 2016
//
//*****************************************************
//** This software is offered strictly as is with no **
//** warranties whatsoever. Use it at your own risk. **
//*****************************************************
//
#define imagedatatype const uint8_t
imagedatatype enter[] PROGMEM={
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0010 (16) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0020 (32) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0030 (48) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0040 (64) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0050 (80) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0060 (96) pixels
0x00, 0x1C, 0x3E, 0x3E, 0x72, 0xE6, 0xC4, 0xFA, 0xFA, 0xFA, 0xE0, 0xF0, 0xBC, 0xFE, 0xFE, 0xFE,   // 0x0070 (112) pixels
0x80, 0xCC, 0xDE, 0xFE, 0x32, 0x7E, 0xFE, 0xCC, 0xE0, 0xF0, 0xBC, 0xFE, 0xFE, 0xFE, 0x80, 0xE0,   // 0x0080 (128) pixels
0xF0, 0xBC, 0xFE, 0xFE, 0xFE, 0x80, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xF0, 0xFE, 0xBE, 0xBE, 0xFE,   // 0x0090 (144) pixels
0xF0, 0x80, 0x04, 0x04, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0xFC, 0xFE, 0x8E, 0x02, 0x8E, 0xFE, 0xFC,   // 0x00A0 (160) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00B0 (176) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 0x03, 0x03, 0x01, 0x03, 0x03, 0x83, 0xC0, 0xC0,   // 0x00C0 (192) pixels
0xC0, 0x03, 0x03, 0x03, 0x00, 0x01, 0x03, 0x03, 0x02, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x03,   // 0x00D0 (208) pixels
0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03,   // 0x00E0 (224) pixels
0x01, 0x00, 0x00, 0x01, 0x03, 0x03, 0x02, 0x02, 0x02, 0xC3, 0xC3, 0xC2, 0x82, 0x01, 0x03, 0x03,   // 0x00F0 (240) pixels
0x02, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0100 (256) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFE,   // 0x0110 (272) pixels
0x1F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xFC, 0x1E, 0x0E, 0x06, 0x02, 0x00, 0x00,   // 0x0120 (288) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x00, 0x00, 0x00,   // 0x0130 (304) pixels
0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0E, 0x1E, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x03,   // 0x0140 (320) pixels
0x07, 0x1F, 0xFE, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0150 (336) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0160 (352) pixels
0x00, 0x07, 0x1F, 0x3F, 0x7C, 0xF0, 0xE0, 0x80, 0x80, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x3C, 0x70,   // 0x0170 (368) pixels
0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0x7D, 0x3F, 0x0F, 0x07, 0x07, 0x0F, 0x3F,   // 0x0180 (384) pixels
0x7D, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x70, 0x3C, 0x1F, 0x0F, 0x03, 0x00,   // 0x0190 (400) pixels
0x00, 0x80, 0x80, 0xE0, 0xF0, 0x7C, 0x3F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01A0 (416) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01B0 (432) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,   // 0x01C0 (448) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFC, 0xDF, 0xCF, 0xE7, 0xE1, 0x60, 0x60, 0x60,   // 0x01D0 (464) pixels
0x30, 0x30, 0x30, 0x30, 0x10, 0x19, 0x1F, 0x1F, 0x1F, 0x7C, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x00,   // 0x01E0 (480) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01F0 (496) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
// Note: we are using "Band detection by system "controller" mode
#include <Wire.h>           // for the Arduino wire library (I2C)
// assumes that the keypad and display libraries are installed
#include <Keypad.h>         // for the membrane keyboard library
#include <LCD5110_Basic.h>  // for the Nolia display library
#include <IRLibAll.h>
#include <avr/pgmspace.h>
int counter = 0;
// defines
// chip I2C address is hard coded
#define Si_ADDRESS 0x11
// Si Commands in their nomenclature
#define ATDD_POWER_DOWN 0x11
#define ATDD_POWER_UP   0xE1
#define ATDD_XOWAIT     0x40
#define SET_PROPERTY    0x12
#define RX_VOLUME       0x40
#define ATDD_GET_STATUS 0xE0
// and my nomenclature
#define TONEH           0x40
#define TONEL           0x02
#define MUTEH           0x40
#define MUTEL           0x01

// You will have to set these values depending on the protocol
// and remote codes that you are using. These are For the Adafruit
// Mini Remote
#define MY_PROTOCOL NEC
#define RIGHT_ARROW   0xfd50af //Move several clockwise
#define LEFT_ARROW    0xfd10ef //Move servo counterclockwise
#define SELECT_BUTTON 0xfd906f //Center the servo
#define UP_ARROW      0xff807f //Increased number of degrees servo moves
#define DOWN_ARROW    0xffc23d //Decrease number of degrees servo moves
#define BUTTON_0 0xfd30cf  //Pushing buttons 0-9 moves to fixed positions
#define BUTTON_1 0xfd08f7  // each 20 degrees greater
#define BUTTON_2 0xfd8877
#define BUTTON_3 0xfd48b7
#define BUTTON_4 0xfd28d7
#define BUTTON_5 0xfda857
#define BUTTON_6 0xfd6897
#define BUTTON_7 0xfd18e7
#define BUTTON_8 0xfd9867
#define BUTTON_9 0xfd58a7

// Globals
// display
LCD5110 myGLCD(7, 6, 5, 17, 4);
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];
// membrane keyboard
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
// keyboard to Arduino pins
byte rowPins[ROWS] = {8, 9, 10, 11}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {13, 14, 15}; //connect to the column pinouts of the keypad
// get an instance
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
char key;           // hold the keypress
// Arduino Pins D2=IRQ D12=reset
const byte INTpin = 2;
const byte RESETpin = 12;
// for the ISR
volatile byte IRQflag;
// Default bands within FM/AM/SW - the band we start with when switching modes
byte d_FM_band = 8;
byte d_AM_band = 22;
byte d_SW_band = 31;
byte status_rsp[4];     // holds response bytes following commands
byte current_band = 0;  // 0=FM 1-AM 2=SW  if there has been no power down we will start with 0
byte current_bandix;    // current band index
byte current_mute = 0;  // 0=off 1=on (muted)
byte current_font;      // 0=small 1=medium
byte current_vol = 50;  // default boot up value is 63
byte current_BT = 4;    // default boot up value is 4 or 3 FM/AM
byte power_mode = 1;    // denotes if we are in power down mode (1=power on 0=power off (powered down))
byte mute_mode = 0;     // denotes mute mode (1=on 0=off)
char buf2[3];           // for itoa conversion up to two characters
int d1, d2, d3, d4;     // for an easy print
// Band Range strings to make display easy and fast
char * BandRange[] = {"  87-108   ", "  87-108   ", "  87-108   ", "  87-108   ", "  86.5-109 ", "  86.5-109 ", "  86.5-109 ", "  86.5-109 ",
                      "87.3-108.25", "87.3-108.25", "87.3-108.25", "87.3-108.25", "   76-90   ", "   76-90   ", "   76-90   ", "   76-90   ", "   64-87   ", "   64-87   ",
                      "   64-87   ", "   64-87   ", "  520-1710 ", "  522-1620 ", "  504-1665 ", "  520-1730 ", "  510-1750 ", "  5.6-6.4  ", "  5.95-6.2 ", "  6.8-7.6  ",
                      "  7.1-7.6  ", "   9.2-10  ", "  9.2-9.9  ", "11.45-12.25", " 11.6-12.2 ", " 13.4-14.2 ", "13.57-13.87", "  15-15.9  ", " 15.1-15.8 ", "  17.1-18  ",
                      " 17.48-17.9", "  21.2-22  ", "21.45-21.85"
                     };

IRrecv myReceiver(3); //pin number for the receiver
IRdecode myDecoder;

void setup() {

  myReceiver.enableIRIn();
  // set up pins and IRQ
  // interrupt active HIGH
  pinMode (INTpin, INPUT);
  // reset pin
  pinMode(RESETpin, OUTPUT);
  digitalWrite(RESETpin, HIGH);
  // ISR
  attachInterrupt(0, SiISR, RISING);
  // set up the display
  myGLCD.InitLCD();
  
  
  // switch to the FM band with the default band_idx
  SiReset();
  current_bandix = d_FM_band;
  SiSetBand();
  get_status();
   display_template();
  delay(2000);
  screen_template();
  // power up is completed so get the values from the chip
  current_band = (status_rsp[1] >> 6);
  display_band();
  current_bandix = (status_rsp[1] & B00111111);
  display_band_index();
  display_frequency();
  go_current();   // will set up for default VOL BT and Mute

  myReceiver.enableIRIn(); // Start the receiver
 
  
}

void loop() {
  // Check for tuning changes and keypresses
int state;
  if (myReceiver.getResults()) {
    myDecoder.decode();
    if (myDecoder.protocolNum == NEC) {

      switch (myDecoder.value) {
        case LEFT_ARROW:
        case RIGHT_ARROW:
        case 0xffc23d: //minus button
          Vol_down();
          break;
        case 0xff807f: //plus button

          Vol_up();
          // digitalWrite(15, HIGH);
          //digitalWrite(16, LOW);

          break;
        case 0xff609f ://right skip button
          myReceiver.enableIRIn();
          // set up pins and IRQ
          // interrupt active HIGH
          pinMode (INTpin, INPUT);
          // reset pin
          pinMode(RESETpin, OUTPUT);
          digitalWrite(RESETpin, HIGH);
          // ISR
          attachInterrupt(0, SiISR, RISING);
          // setup the display
          myGLCD.InitLCD();
          display_template();
          delay(2000);
          screen_template();
          // switch to the FM band with the default band_idx
          SiReset();
          current_bandix = d_FM_band;
          SiSetBand();
          get_status();
          // power up is completed so get the values from the chip
          current_band = (status_rsp[1] >> 6);
          display_band();
          current_bandix = (status_rsp[1] & B00111111);
          display_band_index();
          display_frequency();
          go_current();
          //Vol_down();
          digitalWrite(15, LOW);
          digitalWrite(16, HIGH);
          break;
        case 0xff02fd: //left skip button
          bluetooth();
          break;
        case 0xffe01f:
          counter++;
           state = counter % 3;
          if (state == 0) {
            Go_AM();
          } else if (state == 1) {
            Go_FM();
          } else {
            Go_SW();
          }
          break;
        case BUTTON_2:
        case BUTTON_3:
        case BUTTON_4:
        case BUTTON_5:
        case BUTTON_6:
        case BUTTON_7:
        case BUTTON_8:
        case BUTTON_9:
        default:
          break;
      }
    }
    myReceiver.enableIRIn();
  }

  if (IRQflag)
  {
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(ATDD_GET_STATUS);
    Wire.endTransmission();
    Wire.requestFrom(Si_ADDRESS, 0x04);
    status_rsp[0] = Wire.read();
    status_rsp[1] = Wire.read();
    status_rsp[2] = Wire.read();
    status_rsp[3] = Wire.read();
    display_frequency();
    IRQflag = 0;
  }
  // Get and process a keypress when present
  if (key = keypad.getKey())
  {
    switch (key)
    {
      case '1':
        Go_AM();
        break;
      case '2':
        Go_FM();
        break;
      case '3':
        Go_SW();
        break;
      case '4':
        Vol_up();
        break;
      case '7':
        Vol_down();
        break;
      case '5':
        Band_up();
        break;
      case '8':
        Band_down();
        break;
      case '6':
        BT_up();
        break;
      case '9':
        BT_down();
        break;
      case '0':
        Mute();
        break;
      default:
        break;
    }
  }
}

void SiReset()
{
  // reset Si4844 and back up
  // switch I2C to 10kHz
  I2C_10kHz();
  IRQflag = 0;
  digitalWrite(RESETpin, LOW);
  delayMicroseconds(200);
  digitalWrite(RESETpin, HIGH);
  delayMicroseconds(200);
  // wait for an IRQ rising edge
  while (!IRQflag);
  // wait for 2.5 ms
  delayMicroseconds(2500);
}

void SiGetStatus()
{

  // send a get status command and wait for 2 ms before testing response byte
  Wire.beginTransmission(Si_ADDRESS);
  Wire.write(ATDD_GET_STATUS);
  Wire.endTransmission();
  delayMicroseconds(2000);
  // test response byte
  Wire.requestFrom(Si_ADDRESS, 0x04);
  for (int x = 0; x < 4; x++)
  {
    status_rsp[x] = Wire.read();
  }
}

void SiSetBand()
{
  // assuming CTS is ok to send, assume current_band is set
  // will do a power up AND a get status setting status_rsp[0-4]
  byte cb;
  cb = current_bandix;

  bitSet(cb, 7);               // bit 7=1 for external crystal
  bitClear(cb, 6);             // bit 6=0 for normal crystal time
  // arg[2]-[7] are not used in this mode
  IRQflag = 0;
  // send it
  Wire.beginTransmission(Si_ADDRESS);
  Wire.write(ATDD_POWER_UP);
  Wire.write(cb);
  Wire.endTransmission();
  // wait for an IRQ for tune wheel frequency ready
  delayMicroseconds(2500);
  while (!IRQflag);
  // wait for 2.5 ms because our IRQ is rising edge
  delayMicroseconds(2500);
  I2C_50kHz();
  // send a get status and wait for 2 ms before testing response byte
  get_status();
}

void screen_template()
{
  myGLCD.clrScr();
  myGLCD.setFont(SmallFont);
  myGLCD.print("BAND", 32, 0);
  myGLCD.print("Vol:", 0, 16);
  myGLCD.print("B/T:", 48, 16);
  myGLCD.print("mHz", 66, 32);
  myGLCD.setFont(MediumNumbers);
  current_font = 1;
  myGLCD.print("123.4", 0, 24);
}
void display_template()
{
  myGLCD.drawBitmap(0, 0, enter, 84, 48);
}

void display_band_index()
{
  // assume current_bandix is accurate
  // also displays band index number
  if (current_font == 1)
  {
    // set small font
    myGLCD.setFont(SmallFont);
    current_font = 0;
  }
  myGLCD.print(BandRange[current_bandix], 8, 8);
  itoa(current_bandix, buf2, 10);
  if (current_bandix < 10)
  {
    // pad with a space
    myGLCD.print(" ", 64, 0);
    myGLCD.print(buf2, 70, 0);
  }
  else
  {
    myGLCD.print(buf2, 64, 0);
  }
}

void display_band()
{
  // assume current_band is accurate 0=FM 1-AM 2=SW
  // also change the k/m in frequency
  if (current_font == 1)
  {
    // set small font
    myGLCD.setFont(SmallFont);
    current_font = 0;
  }
  switch (current_band)
  {
    case 0:
      myGLCD.print("FM", 8, 0);
      myGLCD.print("m", 66, 32);
      break;
    case 1:
      myGLCD.print("AM", 8, 0);
      myGLCD.print("k", 66, 32);
      break;
    case 2:
      myGLCD.print("SW", 8, 0);
      myGLCD.print("m", 66, 32);
      break;
    default:
      // error here
      myGLCD.print("XX", 8, 0);
      break;
  }
}

void display_frequency()
{
  int add;
  // assume that current_band AND status_rsp[2] and status_rsp[3] are accurate
  // calculate the four digits and get their string equivalents for display
  // If CHFREQ[15] is set in the SW band it
  // indicates an add of 5 kHz to the frequency
  // i.e., freq=freq+.005 mHz
  // This is NOT implemented currently but is here if I
  // want to do something with it at a later date
  add = 0;
  if ((current_band == 2) && (bitRead(status_rsp[2], 7) == 1))
  {
    add = 1;
    bitClear(status_rsp[2], 7);
  }
  d1 = status_rsp[2] >> 4;
  d2 = status_rsp[2] % 16;
  d3 = status_rsp[3] >> 4;
  d4 = status_rsp[3] % 16;
  if (current_font == 0)
  {
    // set medium font
    myGLCD.setFont(MediumNumbers);
    current_font = 1;
  }
  switch (current_band)
  {
    // FM is mhz 012.3
    case 0:
      myGLCD.printNumI(d1, 0, 24);
      myGLCD.printNumI(d2, 12, 24);
      myGLCD.printNumI(d3, 24, 24);
      myGLCD.print(".", 36, 24);
      myGLCD.printNumI(d4, 48, 24);
      // check for the stereo marker if we are in FM
      // this should be made more efficient
      myGLCD.setFont(SmallFont);
      current_font = 0;
      if (bitRead(status_rsp[0], 2))
      {
        myGLCD.print("stereo", 0, 40);
      }
      else
      {
        myGLCD.print("      ", 0, 40);
      }
      myGLCD.setFont(MediumNumbers);
      current_font = 1;
      break;
    case 1:
      // AM is 1234 kHz so pad a space
      myGLCD.print(" ", 0, 24);
      myGLCD.printNumI(d1, 12, 24);
      myGLCD.printNumI(d2, 24, 24);
      myGLCD.printNumI(d3, 36, 24);
      myGLCD.printNumI(d4, 48, 24);
      break;
    case 2:
      // SW is mHz 01.23
      myGLCD.printNumI(d1, 0, 24);
      myGLCD.printNumI(d2, 12, 24);
      myGLCD.print(".", 24, 24);
      myGLCD.printNumI(d3, 36, 24);
      myGLCD.printNumI(d4, 48, 24);
      break;
    default:
      // error
      myGLCD.print("X", 0, 24);
      myGLCD.print("X", 12, 24);
      myGLCD.print("X", 24, 24);
      myGLCD.print("X", 36, 24);
      myGLCD.print("X", 48, 24);
      break;
  }
}

void display_mute()
{
  // either writes or erases 'mute' on the display depending upon
  // the state of mute_mode
  if (current_font == 1)
  {
    // set small font
    myGLCD.setFont(SmallFont);
    current_font = 0;
  }
  if (mute_mode == 1)
  {
    // write mute
    myGLCD.print("mute", 60, 40);
  }
  else
  {
    myGLCD.print("    ", 60, 40);
  }
}

void display_vol()
{
  // assume current_vol is accurate
  if (current_font == 1)
  {
    // set small font
    myGLCD.setFont(SmallFont);
    current_font = 0;
  }
  itoa(current_vol, buf2, 10);
  if (current_vol < 10)
  { // pad with a space
    myGLCD.print(" ", 24, 16);
    myGLCD.print(buf2, 30, 16);
  }
  else
  {
    myGLCD.print(buf2, 24, 16);
  }
}

void display_BT()
{
  // assume current_BT is accurate
  if (current_font == 1)
  {
    // set small font
    myGLCD.setFont(SmallFont);
    current_font = 0;
  }
  myGLCD.printNumI(current_BT, 72, 16);
}

void Mute()
{
  // if mute_mode<>0 unmute and set mute_mode to 0
  // if mute_mode=0 mute and set mute_mode to 1
  if (mute_mode == 0)
  {
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);               // ARG1
    Wire.write(MUTEH);              // ARG2 0x40
    Wire.write(MUTEL);              // ARG3 0x01
    Wire.write(0x00);               // ARG4
    Wire.write(0x03);               // ARG5 mute L and R
    Wire.endTransmission();
    mute_mode = 1;
    display_mute();
  }
  else
  {
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);               // ARG1
    Wire.write(MUTEH);              // ARG2 0x40
    Wire.write(MUTEL);              // ARG3 0x01
    Wire.write(0x00);               // ARG4
    Wire.write(0x00);               // ARG5 unmute L and R
    Wire.endTransmission();
    mute_mode = 0;
    display_mute();
  }
}
void BT_up()
{
  // we operate in the default Mixed Mode 2
  // assume that current_BT is accurate
  if (current_BT < 8)
  {
    current_BT++;
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);               // ARG1
    Wire.write(TONEH);              // ARG2 0x40
    Wire.write(TONEL);              // ARG3 0x02
    Wire.write(0x00);               // ARG4
    Wire.write(current_BT);         // ARG5 is bass_treble 0-7*
    Wire.endTransmission();
    display_BT();
  }
}

void BT_down()
{
  // we operate in the default Mixed Mode 2
  // assume that current_BT is accurate
  if (current_BT > 0)
  {
    current_BT--;
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);               // ARG1
    Wire.write(TONEH);              // ARG2 0x40
    Wire.write(TONEL);              // ARG3 0x02
    Wire.write(0x00);               // ARG4
    Wire.write(current_BT);         // ARG5 is bass_treble 0-7*
    Wire.endTransmission();
    display_BT();
  }
}

void Vol_up()
{
  // we operate in the audio default Mixed Mode 2
  // assume that current_vol is accurate
  if (current_vol < 63)
  {
    current_vol++;
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);         // ARG1
    Wire.write(RX_VOLUME);    // ARG2 RX_VOLUME 0x40
    Wire.write(0x00);         // ARG3
    Wire.write(0x00);         // ARG4
    Wire.write(current_vol);  // ARG5 is actual volume 0-63
    Wire.endTransmission();
    display_vol();
  }
}

void Vol_down()
{
  // we operate in the default Mixed Mode 2
  // assume that current_vol is accurate
  if (current_vol > 0)
  {
    current_vol--;
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);         // ARG1
    Wire.write(RX_VOLUME);    // ARG2 RX_VOLUME 0x40
    Wire.write(0x00);         // ARG3
    Wire.write(0x00);         // ARG4
    Wire.write(current_vol);  // ARG5 is actual volume 0-63
    Wire.endTransmission();
    display_vol();
  }
}
void Go_FM()
{
  // switch to the FM band with the default band_idx
  SiReset();
  current_bandix = d_FM_band;
  SiSetBand();
  get_status();
  // power up is completed so get the values from the chip
  current_band = (status_rsp[1] >> 6);
  display_band();
  current_bandix = (status_rsp[1] & B00111111);
  display_band_index();
  display_frequency();
  go_current();
}

void Go_AM()
{
  // switch to the AM band with the default band_idx
  myGLCD.setFont(SmallFont);
  current_font = 0;
  myGLCD.print("      ", 0, 40); // clear the stereo marker if it was there
  SiReset();
  current_bandix = d_AM_band;
  SiSetBand();
  // in testing the this never loops
  get_status();
  // power up is completed so get the values from the chip
  current_band = (status_rsp[1] >> 6);
  display_band();
  current_bandix = (status_rsp[1] & B00111111);
  display_band_index();
  display_frequency();
  go_current();
}

void Go_SW()
{
  // switch to the SW band with the default band_idx
  myGLCD.setFont(SmallFont);
  current_font = 0;
  myGLCD.print("      ", 0, 40); // clear the stereo marker if it was there
  SiReset();
  current_bandix = d_SW_band;
  SiSetBand();
  get_status();
  // power up is completed so get the values from the chip
  current_band = (status_rsp[1] >> 6);
  display_band();
  current_bandix = (status_rsp[1] & B00111111);
  display_band_index();
  display_frequency();
  go_current();
}

void go_current()
{
  // restore current settings when we switch AM/FM/SW
  // set the Vol to whatever current_vol is
  Wire.beginTransmission(Si_ADDRESS);
  Wire.write(SET_PROPERTY);
  Wire.write(0x00);         // ARG1
  Wire.write(RX_VOLUME);    // ARG2 RX_VOLUME 0x40
  Wire.write(0x00);         // ARG3
  Wire.write(0x00);         // ARG4
  Wire.write(current_vol);  // ARG5 is actual volume 0-63
  Wire.endTransmission();
  display_vol();
  // set the B/T to whatever current_BT is
  Wire.beginTransmission(Si_ADDRESS);
  Wire.write(SET_PROPERTY);
  Wire.write(0x00);               // ARG1
  Wire.write(TONEH);              // ARG2 0x40
  Wire.write(TONEL);              // ARG3 0x02
  Wire.write(0x00);               // ARG4
  Wire.write(current_BT);         // ARG5 is bass_treble 0-7*
  Wire.endTransmission();
  display_BT();
  // remute or mute
  if (mute_mode == 1)
  {
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);               // ARG1
    Wire.write(MUTEH);              // ARG2 0x40
    Wire.write(MUTEL);              // ARG3 0x01
    Wire.write(0x00);               // ARG4
    Wire.write(0x03);               // ARG5 mute L and R
    Wire.endTransmission();
  }
  else
  {
    Wire.beginTransmission(Si_ADDRESS);
    Wire.write(SET_PROPERTY);
    Wire.write(0x00);               // ARG1
    Wire.write(MUTEH);              // ARG2 0x40
    Wire.write(MUTEL);              // ARG3 0x01
    Wire.write(0x00);               // ARG4
    Wire.write(0x00);               // ARG5 unmute L and R
    Wire.endTransmission();
  }
  display_mute();
}


void Band_up()
{
  // increase the band index by 1
  // assume current_band and current_bandix are accurate
  switch (current_band)
  {
    case 0: // FM is 0 19
      if (current_bandix < 19)
      {
        current_bandix++;
      }
      break;
    case 1:  // AM is 20-24
      if (current_bandix < 24)
      {
        current_bandix++;
      }
      break;
    case 2:  //  SW is 25-40
      if (current_bandix < 40)
      {
        current_bandix++;
      }
      break;
    default:
      // error - take no action
      break;
  }
  SiReset();
  SiSetBand();
  get_status();
  // power up is completed so get the values from the chip
  current_band = (status_rsp[1] >> 6);
  display_band();
  current_bandix = (status_rsp[1] & B00111111);
  display_band_index();
  display_frequency();
  go_current();
}

void Band_down()
{
  // decrease the band index by 1
  // assume current_band and current_bandix are accurate
  switch (current_band)
  {
    case 0: // FM is 0 19
      if (current_bandix > 0)
      {
        current_bandix--;
      }
      break;
    case 1:  // AM is 20-24
      if (current_bandix > 20)
      {
        current_bandix--;
      }
      break;
    case 2:  //  SW is 25-40
      if (current_bandix > 25)
      {
        current_bandix--;
      }
      break;
    default:
      // error - take no action
      break;
  }
  SiReset();
  SiSetBand();
  get_status();
  // power up is completed so get the values from the chip
  current_band = (status_rsp[1] >> 6);
  display_band();
  current_bandix = (status_rsp[1] & B00111111);
  display_band_index();
  display_frequency();
  go_current();
}

void get_status()
{
  // do SiGetStatus until we have valid frequency info in status_rsp
  // note: in testing we don't loop but it is a good practice
  // also, an error out routine can be added here so it can escape
  // after a certain number of attempts
Waitforgo:
  SiGetStatus();
  if ( ((bitRead(status_rsp[0], 4) == 0) || ( (status_rsp[2] == 0) && (status_rsp[3] == 0))) )
  {
    goto Waitforgo;
  }
}

// NOTE: These speed routines for I2C are for an 8mhz, 3.3v Pro Mini
// They need to be changed for a 16 mHz UNO or other Arduinos
void I2C_10kHz()
{
  // set I2C speed to 10Khz on an 8mHz chip
  TWBR = 98;
  TWSR |= bit(TWPS0);
}

void I2C_50kHz()
{
  // set I2C speed to 50Khz on an 8mHz chip
  TWBR = 18;
  TWSR |= bit(TWPS0);
}

// The interrupt service routine
void SiISR()
{
  IRQflag = 1;
}



imagedatatype Untitled[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0010 (16) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0,   // 0x0020 (32) pixels
  0xE0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0,   // 0x0030 (48) pixels
  0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0040 (64) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0050 (80) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0060 (96) pixels
  0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF8, 0xF8, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x0070 (112) pixels
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x03, 0x07, 0x07, 0xCF, 0x0F, 0x8F,   // 0x0080 (128) pixels
  0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 0xF8, 0xE0,   // 0x0090 (144) pixels
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00A0 (160) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00B0 (176) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x00C0 (192) pixels
  0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF9, 0xF1, 0xF1, 0xE1, 0xE3, 0xE3, 0x8F, 0x0F, 0x00, 0x00, 0x00,   // 0x00D0 (208) pixels
  0x00, 0x0F, 0xCF, 0xE3, 0xC3, 0xE1, 0xF0, 0xF0, 0xFC, 0xF8, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF,   // 0x00E0 (224) pixels
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00F0 (240) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0100 (256) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xBF, 0xFF, 0xFF, 0xFF,   // 0x0110 (272) pixels
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xCF, 0xCF, 0xE7, 0xF3, 0xF1, 0xF8, 0xF0, 0xF8,   // 0x0120 (288) pixels
  0xF8, 0x00, 0x00, 0x00, 0x44, 0x3C, 0x7C, 0x31, 0x38, 0x81, 0x83, 0x87, 0x8F, 0xCF, 0xEF, 0xFF,   // 0x0130 (304) pixels
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x37, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0140 (320) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0150 (336) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0160 (352) pixels
  0x00, 0x00, 0x07, 0x07, 0x0F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF,   // 0x0170 (368) pixels
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF8, 0xF8, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F,   // 0x0180 (384) pixels
  0x7F, 0x3F, 0x7F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0190 (400) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01A0 (416) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01B0 (432) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01C0 (448) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01D0 (464) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01E0 (480) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01F0 (496) pixels
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
void bluetooth() {
  myGLCD.drawBitmap(0, 0, Untitled, 84, 48);
  digitalWrite(15, HIGH);
  digitalWrite(16, LOW);
}




