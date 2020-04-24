//modulo RFID

#include <MFRC522.h>
#include <SPI.h> 

#define RST_PIN 9 
#define SS_PIN 10 


MFRC522 mfrc522 (SS_PIN,RST_PIN); //cria a instancia MFRC522


void setup() 
{
 Serial.begin (9600);
 SPI.begin (); //inicializa a interface SPI
 mfrc522.PCD_Init (); //inicializa o modulo MFRC522
 
 Serial.println (F("Lendo os dados da etiqueta MIFARE PICC: "));
}

void loop()
{
  MFRC522::MIFARE_Key key; 

  for (byte i = 0; i < 6; i++) //preparando as chaves
    key.keyByte[i] = 0xFF; //todas as chaves são definidas como FFFFFFFFFFFFh no datasheet

  byte block; 
  byte len;

  MFRC522::StatusCode status; //lendo os estados das etiquetas

  
  if (!mfrc522.PICC_IsNewCardPresent ()) //se nenhum cartao estiver presente no sensor, reinicia o loop
  {
    return;
  }

  if (!mfrc522.PICC_ReadCardSerial()) //seleciona um dos cartoes
  {
    return;
  }


  Serial.println (F("**Etiqueta detectada: "));
  mfrc522.PICC_DumpDetailsToSerial (&(mfrc522.uid)); //mostra informacoes do cartao
  Serial.print(F("Nome: "));



  byte buffer1 [18]; //buffer para ler o primeiro nome do cartao
  block = 4;
  len = 18;


  //pega o primeiro nome 
  status = mfrc522.PCD_Authenticate (MFRC522::PICC_CMD_MF_AUTH_KEY_A,4,&key, &(mfrc522.uid)); //autenticacao do nome
  if (status != MFRC522::STATUS_OK) //se falhar na leitura
  {
    Serial.print (F("Falha na autenticacao: "));
    Serial.println (mfrc522.GetStatusCodeName (status)); //imprime o nome do codigo do estado
    return; 
  }



  
  status = mfrc522.MIFARE_Read (block, buffer1, &len); //lê o nome 
  if (status != MFRC522::STATUS_OK) //se falhar na leitura
  {
    Serial.print (F("Falha na leitura: "));
    Serial.println (mfrc522.GetStatusCodeName (status)); //imprime o nome do codigo do estado
    return; 
  }


  //printa o primeiro nome
  for (uint8_t i = 0; i < 16; i++)
  {
    if (buffer1[i] != 32)
    {
      Serial.write (buffer1[i]);
    }
  }


  Serial.print (" ");
  Serial.println(F("\n**Fim da leitura**\n"));
  delay(1000);
  mfrc522.PICC_HaltA(); //para a leitura do RFID
  mfrc522.PCD_StopCrypto1();

}
