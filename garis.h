#define batasGaris 1005
int sensor[6]={A0,A7,A6,A5,A4,A3}; //A0 tidak dipakai
//=========================Variable==================================================
int n,s,max[6],min[6],ns[6][100],nsensor[6],nilaiKondisi[6];
int save[6]={0,1,2,3,4,5};
int count=0;
void setupGaris() {
 Serial.begin(115200);
  for(s=1;s<=5;s++){
    pinMode(sensor[s],INPUT);
 }
 pinMode(2,HIGH);
}

void reads(){
  for(s=1;s<=5;s++){
    nsensor[s]=analogRead(sensor[s]);//niilai sensor
    nilaiKondisi[s]=(nsensor[s]);//nilai sensor yang telah dibagi 4
    delay(2);
    Serial.print(nilaiKondisi[s]);
    Serial.print("\t");
  }
   Serial.println();
//  delay(1000);
}


void cekGaris()
{

//  for(int x=1;x<=5;x++){
    nsensor[1]=analogRead(sensor[1]);
    nsensor[2]=analogRead(sensor[2]);
    nsensor[3]=analogRead(sensor[3]);
    nsensor[4]=analogRead(sensor[4]);
    nsensor[5]=analogRead(sensor[5]);
//  
//    count=0;
//    for(int a=1;a<6;a++)
//    {
//      if(nsensor[a]>=batasGaris)
//        count++;
//    }
    if(nsensor[3]>=batasGaris || nsensor[4]>=batasGaris || nsensor[5]>=batasGaris)// ||nsensor[2]>=batasGaris ||nsensor[1]>=batasGaris)
    { //nilai sensor dibandingkan nilai eeprom
       digitalWrite(2,LOW);
       delay(350);
    }
    else
      digitalWrite(2,HIGH);

//    for(int a=1;a<6;a++)
//    {
//      Serial.print(nsensor[a]);Serial.print("  ");
//    }
//    Serial.println(" ");
   
}

