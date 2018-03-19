/******************************************************************* 
**                                                                **
**                            TITOL:                              **
**                                                                **
**                                                                **               
**  Nom: Adrian Navarro    oooO 
                          (....)     Oooo
                           ...(     (....)
                            ._)      )../
                                     (_/ 
                        Solo pasaba por aquí 
                              ¡Saludos!       Data:               **                                                                   
*******************************************************************/
//************************** INCLUDE *******************************


//************************* VARIEBLES ******************************
int drive_gb = 5;
int drive_mb = 0;
//*************************** SETUP ********************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//*************************** LOOP *********************************
void loop()                     
{
  
}
//************************* FUNCIONES ******************************
//Aquest programa fa la conversió de GB a MB, donant només l'equivalència d'un GB a MB (1024)
