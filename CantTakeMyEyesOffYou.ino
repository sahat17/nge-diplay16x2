 #include <LiquidCrystal.h>
//LCD pin to Arduino
const int pin_RS = 8; 
const int pin_EN = 9; 
const int pin_d4 = 4; 
const int pin_d5 = 5; 
const int pin_d6 = 6; 
const int pin_d7 = 7; 
const int pin_BL = 10; 
LiquidCrystal lcd( pin_RS,  pin_EN,  pin_d4,  pin_d5,  pin_d6,  pin_d7);

 
  

int pinBuzzer = 12;

int  C__ =  261/4;
int Cs__=  277/4;
int  D__ =  293/4 ;
int Ds__=  311/4;
int  E__ =  329/4 ;
int  F__ =  349/4 ;
int Fs__=  369/4;
int  G__ =  391/4 ;
int Gs__=  415/4;
int  A__ =  440/4 ;
int As__=  466/4;
int  B__ =  493/4 ;

int C_ =  261/2;
int Cs_=  277/2;
int D_ =  293/2 ;
int Ds_=  311/2;
int E_ =  329/2 ;
int F_ =  349/2 ;
int Fs_=  369/2;
int G_ =  391/2 ;
int Gs_=  415/2;
int A_ =  440/2 ;
int As_=  466/2;
int B_ =  493/2 ;


int Sil = 5;
int C =  261;
int Cs=  277;
int D =  293 ;
int Ds=  311;
int E =  329 ;
int F =  349 ;
int Fs=  369;
int G =  391 ;
int Gs=  415;
int A =  440 ;
int As=  466;
int B =  493 ;



int C2   =524;
int Cs2  =555;
int D2   =588;
int Ds2  =623;
int E2   =660;
int F2   =699;
int Fs2  =740;
int G2   =784;
int Gs2  =831;
int A_2   = 880;
int As2  =933;
int B2   =988;

int C3  =1047;
int Cs3  =555*2;
int D3   =588*2;
int Ds3  =623*2;
int E3   =660*2;
int F3   =699*2;
int Fs3  =740*2;
int G3   =784*2;
int Gs3  =831*2;
int A_3   = 880*2;
int As3  =933*2;
int B3   =988*2;



int tempo=129*2;
int negra=60000/tempo;
int semi = negra/4;

int fusa =semi/2;
int corch = 2*semi;
int np = corch*3;

int blanca = negra*2;
int redonda = blanca*2;
int rep = 3*negra;
int bnp = 3*negra+3*corch;

int retardo = 100;

int b =blanca;
int r =2*b;
int n = negra;
int c = corch;
int s = semi;
int f = s/2;
int sf = f/2;


void nota(int nota, int duracion){
  tone(pinBuzzer,nota, duracion);
  delay(duracion);
  noTone(pinBuzzer);
  delay(duracion);
}

void setup() {

 lcd.begin(16, 2);
 lcd.setCursor(0,0);
 lcd.print("Can't take my   ");
 lcd.setCursor(0,1);
 lcd.print("eyes off you... ");

nota(Sil,b);

byte corazonI[8] = {
  0b01100,
  0b10010,
  0b10001,
  0b10000,
  0b01000,
  0b00100,
  0b00010,
  0b00001

};


byte corazonD[8] = {
 0b00110,
  0b01001,
  0b10001,
  0b00001,
  0b00010,
  0b00100,
  0b01000,
  0b10000
};
 lcd.createChar(7, corazonI);
 lcd.createChar(8, corazonD);


 
 
}

void loop() {
 
Medio();
textopan("                ","                ");

  lcd.setCursor(13, 1); lcd.write(byte(7)); 
  lcd.setCursor(14, 1); lcd.write(byte(8)); 
  
Medio2();

//textopan("muuuuuuuuuuuucho","                ");

Medio_3();


ILoveYou(1);
//textopan("mucho           ","                ");

  lcd.setCursor(6, 1); lcd.write(byte(7)); 
  lcd.setCursor(7, 1); lcd.write(byte(8)); 
  
Baaaby(1);
textopan("And if it's     ","quite alright   ");
MiBienComprendelo();
textopan("I need you baby ","                ");
MBC_Tequieromucho();
textopan("To warm the     ","lonely night    ");
Con_toda_intensidad();
textopan("I love you, baby","            :)  ");

 // lcd.setCursor(13, 0); lcd.write(byte(7)); 
 // lcd.setCursor(14, 0); lcd.write(byte(8)); 
  
Te_necesito();
textopan("Trust in me     ","when I say      ");
Te_digo_la_verdad();


//====================================

//textopan("Oh, pretty baby ","                ");
ILoveYou(2);
//textopan("muuuuuuuuuuuucho","                ");

  lcd.setCursor(14, 1); lcd.write(byte(7)); 
  lcd.setCursor(15, 1); lcd.write(byte(8)); 
  
  Baaaby(2);
textopan("Don't bring me  ","down, I pray    ");
MiBienComprendelo();
textopan("Oh, pretty baby ","                ");
MBC_Tequieromucho();
textopan("Now that I've   ","found you, stay ");
Con_toda_intensidad(); 
textopan("And let me      ","love you, baby  ");
Y_voy_a_();
textopan("Let me love you ","              :)");
  SiempreQuieroAmar();

  lcd.setCursor(14, 1); lcd.write(byte(7)); 
  lcd.setCursor(15, 1); lcd.write(byte(8)); 
  
  delay(1500);  delay(500);
}
//C D F G


void Medio(){ 

int i=7;
  // Sostenidos
  // Do Re Fa Sol
  
  corazoncito(i,i+1);i++;
  nota_sf6(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);
corazoncito(i,i+1);i++;
  nota_sf6(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);

  // [42]
  corazoncito(i,i+1);i++;
  nota_sf6(C2,negra);
  nota(Cs2,corch);
  nota(E2,corch);
  nota(Sil,corch);
  corazoncito(i,i+1);i++;
  nota(Ds2,corch);
  nota(Sil,corch);
  nota(Cs2,corch);
}
void Medio2(){

int i=1;

  corazoncito(i,i+1);i++;
 // [43]
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);
corazoncito(i,i+1);i++;
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);

  // [44]
corazoncito(i,i+1);i++;
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(E2,corch);
  nota(Sil,corch);corazoncito(i,i+1);i++;
  nota(Ds2,corch);
  nota(Sil,corch);
  nota(Cs2,corch);
  
 // [45]
 corazoncito(i,i+1);i++;
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);corazoncito(i,i+1);i++;
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);
}
void Medio_3(){
  // [46]
  int i=3;
  corazoncito(i,i+1);i++;
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(E2,corch);corazoncito(i,i+1);i++;
  nota(Sil,corch);
  nota(Ds2,corch);corazoncito(i,i+1);i++;
  nota(Sil,corch);
  nota(Cs2,corch);
  
  // [47
  corazoncito(i,i+1);i++;
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);
corazoncito(i,i+1);i++;
  nota_sf(C2,negra);
  nota(Cs2,corch);
  nota(Sil,corch);
 
   // [48]
   corazoncito(i,i+1);i++;
   nota_sf6(E2,redonda);
   

}

void ILoveYou(int I){
   //[49]
   //nota(Cs_,negra);
   
   int DUR=negra/15;

   nota(Gs_,DUR);
   nota(A_,DUR);
   nota(B_,DUR);
   nota(Cs,DUR);
   nota(Ds,DUR);
   nota(E,DUR);
   nota(Fs,DUR);
   nota(Gs,DUR);
   nota(A,DUR);
   nota(B,DUR);
   nota(Cs2,DUR);
   nota(Ds2,DUR);
   nota(E2,DUR);
   nota(Fs2,DUR);
   nota(G2,DUR);

  if ( I == 1){
   textopan("I               ","                ");
   nota(Gs2,negra);
   textopan("I love          ","                ");
   nota(Gs2,negra);
   textopan("I love you      ","                ");
   nota(Gs2,negra);
  }
  else {
   textopan("Oh              ","                ");
   nota(Gs2,negra);
   textopan("Oh, pre         ","                ");
   nota(Gs2,negra);
   textopan("Oh, pretty      ","                ");
   nota(Gs2,negra);
  }
}

void Baaaby(int I){

  if ( I== 1){
   textopan("I love you, baby","                ");
   // [50]  
   nota(Gs2,negra+corch);
   nota(Cs2,negra);
  }
  else {
   textopan("Oh, pretty baby ","                "); 
    
   nota(Gs2,negra+corch);
   nota(Cs2,negra);
    }
}

void MiBienComprendelo(){
   
   nota(Ds2,corch);   
   nota(E2,corch);   
   nota(Fs2,corch);
   
   // [51]
   nota(Gs2,corch);
   nota(Gs2,negra);

   nota(Fs2,negra);
}

void MBC_Tequieromucho(){
   
   nota(E2,corch);   
   nota(Ds2,corch);   
   nota(E2,corch);   
   ////////////////////////////////
   // [52]
   nota(Fs2,negra+corch);
   nota(B,negra);

}

void Con_toda_intensidad(){

   nota(Cs2,corch);   
   nota(Ds2,corch);   
   nota(E2,corch);
   
   // [53]
   nota(Fs2,corch);
   nota(Fs2,negra);

   nota(E2,negra);


}



void Te_necesito(){
   nota(E2,corch);   
   nota(E2,corch);   
   nota(Cs2,corch);   
   
  // [54]
  nota(E2,negra+corch);
  nota(A,negra+corch);


  nota(Fs_,corch);  
  nota(Fs_,semi);
  nota(Fs_,semi);


}
void  Te_digo_la_verdad(){
  // [55]
  nota(E2,corch);
  nota(E2,negra);
  
  nota(Ds2,negra);
  
  nota(E2,corch);
  nota(Ds2,corch);
  
  int ttt = semi;
  nota(B,ttt/2);
  nota(C2,ttt/2);
  
  nota(Cs2,negra-ttt); // 1/2
  nota(Cs2,negra);
  //nota(Cs2,corch);
  
  nota(B,negra+negra);
  
  nota(Sil,corch);
}


void Y_voy_a_(){
    nota(E2,corch);   
   nota(E2,corch);   
   nota(Cs2,corch);   
   
  
  // [58]
  nota(E2,negra+corch);
  nota(Fs2,negra+corch);
}
void  SiempreQuieroAmar(){
  nota(Cs2,negra + corch);

  // [59]
  nota(Ds2,negra + corch);
  nota(E2,negra);
  nota(Cs2,negra);
  
  // [60]
  nota(E2,negra+corch);
  nota(Fs2,blanca*2+corch);
}


  void textopan(String S1,String S2){
    
   lcd.setCursor(0,0);
   lcd.print(S1);
   lcd.setCursor(0,1);
   lcd.print(S2);
  
    
    }
      
void nota_sf6(int N ,int d ){

    int  ttt = sf/2;
    nota( N*0.70710678118 , ttt);
    nota( N*0.74915353843 , ttt);
    nota( N*0.79370052598 , ttt);
    nota( N*0.84089641525 , ttt);
    nota( N*0.89089871814 , ttt);
    nota( N*0.94387431268 , ttt);
    
    nota( N              , d - 6*ttt);


}


void nota_sf(int N ,int d ){

    int  ttt = sf/2;
    
    nota( N*0.84089641525 , ttt);
    nota( N*0.89089871814 , ttt);
    nota( N*0.94387431268 , ttt);
    
    nota( N              , d - 3*ttt);


}


void corazoncito(int II,int JJ){

  textopan("                ","                ");

  lcd.setCursor(II, 1); lcd.write(byte(7)); 
  lcd.setCursor(JJ, 1); lcd.write(byte(8)); 
  
  
  }
