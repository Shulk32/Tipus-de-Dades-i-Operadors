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
int drive_gb = 100;
long drive_mb;
//*************************** SETUP ********************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_mb * 1024;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//*************************** LOOP *********************************
void loop()                     
{
  
}
//************************* FUNCIONES ******************************
//Aquest programa fa la conversió de GB a MB, hem cambiat el int dels mb per long per que pugui donar al ficar un número de gb mes gran encara que tampoc serveix si no cambiem també el int dels gb
