#include "VU_Serial.h"
char veri_girdisi[100];
int i=0;
char gelen;
void setup()
{Serial.begin(9600);}
void loop()
{
  if(Serial.available()>0){
   gelen=Serial.read();
   veri_girdisi[i]=gelen;
   i++;}
 if(gelen=='\n' && i) {
 Serial.println( veri_ayir('A',veri_girdisi,i));
 Serial.println( veri_ayir('B',veri_girdisi,i));
for(int a=0; a<100; a++) {
 veri_girdisi[a]=0;
 i=0;}}}

