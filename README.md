CD-tester.X 1.0

ITALIANO

Descrizione
Firmware sviluppato da CD per Arduino, utile a testare LED singoli, LED RGB e display LCD I2C di varie dimensioni. Semplice da usare, con comandi seriali e feedback chiaro.

Funzionalità
Accende o spegne un LED collegato al pin 2
Accende singolarmente i colori rosso (pin 3), verde (pin 6) e blu (pin 5) del LED RGB
Mostra messaggi su display LCD I2C (indirizzo 0x27, dimensione 16x2 di default, ma compatibile con altri formati)

Collegamenti hardware
LED singolo -> pin 2
LED RGB rosso -> pin 3
LED RGB verde -> pin 6
LED RGB blu -> pin 5
Display LCD I2C -> SDA e SCL (tipicamente A4 e A5)

Impostazioni seriale
Velocità 9600 baud
Comunicazione tramite singoli caratteri inviati da monitor seriale

Comandi seriali e risposte

Comando h
Mostra lista comandi
Risposta: stampa lista comandi

Comando l
Accende LED pin 2
Risposta: Led : ON

Comando L
Spegne LED pin 2
Risposta: Led : OFF

Comando r
Accende LED RGB rosso (pin 3)
Risposta: LED RGB : RED ON

Comando g
Accende LED RGB verde (pin 6)
Risposta: LED RGB : GREEN ON

Comando b
Accende LED RGB blu (pin 5)
Risposta: LED RGB : BLUE ON

Comando 0
Mostra messaggio su LCD
Risposta: nessuna risposta seriale, appare messaggio LCD

Note importanti
I LED RGB non si spengono automaticamente, è necessario spegnerli manualmente
Messaggio LCD predefinito: “Firmware” e “CD-tester.x 1.0” seguito da testo personalizzabile (“hello world” di default)
Progetto open-source e in continuo sviluppo

Librerie richieste
LiquidCrystal_I2C

Autore
CD (CD7578)



ENGLISH

Description
Firmware developed by CD for Arduino, designed to test single LEDs, RGB LEDs, and I2C LCD displays of various sizes. Easy to use with serial commands and clear feedback.

Features
Turn on/off a single LED connected to pin 2
Turn on individual colors red (pin 3), green (pin 6), and blue (pin 5) of an RGB LED
Display messages on an I2C LCD (address 0x27, default size 16x2 but compatible with other sizes)

Hardware connections
Single LED -> pin 2
RGB LED red -> pin 3
RGB LED green -> pin 6
RGB LED blue -> pin 5
I2C LCD display -> SDA and SCL (usually A4 and A5)

Serial settings
Baud rate 9600
Communication via single characters sent from serial monitor

Serial commands and responses

Command h
Shows list of commands
Response: prints commands list

Command l
Turns ON LED on pin 2
Response: Led : ON

Command L
Turns OFF LED on pin 2
Response: Led : OFF

Command r
Turns ON RGB LED red (pin 3)
Response: LED RGB : RED ON

Command g
Turns ON RGB LED green (pin 6)
Response: LED RGB : GREEN ON

Command b
Turns ON RGB LED blue (pin 5)
Response: LED RGB : BLUE ON

Command 0
Shows message on LCD
Response: no serial response, message appears on LCD

Important notes
RGB LEDs do not turn off automatically; manual control is required
Default LCD message: “Firmware” and “CD-tester.x 1.0” followed by customizable text (“hello world” default)
Project is open-source and actively developed

Required libraries
LiquidCrystal_I2C

Author
CD (CD7578)
