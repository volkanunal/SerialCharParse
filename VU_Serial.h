double veri_ayir(char aranan,char buffer[],int buffer_size)
{
 char gecici_buffer[10]="";
int gecici_buffer_deger=0;
int aranan_durum;
for(byte i=0; i<buffer_size; i++)
{
 
 {
  if (buffer[i] == aranan)
     {
     i++;
     while(i<buffer_size && gecici_buffer_deger<10)
     {
  //    if(buffer[i]==0 || buffer[i]==' ')
   //   break;
     gecici_buffer[gecici_buffer_deger]=buffer[i];
     i++;
     gecici_buffer_deger++;
     }
     return strtod(gecici_buffer,NULL);
   
     }
   
    
}

}
return 0;
}

