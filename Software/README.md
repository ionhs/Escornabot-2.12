Para instalar el software en el escornabot 2.12 he seguido los pasos de esta guia

https://catedu.gitbooks.io/escornabots/content/

Descargar el programa del escornabot del repositorio de versiones https://github.com/escornabot/arduino/releases en mi caso la 1.4.3 que es la última versión estable.

Instalar el driver CH340 https://www.geekfactory.mx/tutoriales/tutoriales-arduino/driver-ch340-para-arduino-chinos-o-genericos/ en mi caso para instalar el driver tenía que tener la placa conectada al pc por usb sino no se instalaba. Además tras descomprimir la carpeta si tienes windows x64 hay que copiar el \CH341SER\DRVSETUP64\DRVSETUP64.exe en la carpeta anterior \CH341SER y se ejecuta. De esta manera se instala el driver x64.

Otro problema ha sido que el bootloader hay que poner el Atmega328P (old bootloader) sino en mi arduino nano no hay manera de subirlo.

Pruebo el test botonera (en el programa he tenido que poner A7 en vez de A4) y obtengo el valor por el puesto serie de cada botón cuando lo pulso:

Sin pulsar:1023

Adelante: 511

Atras: 768

Izq: 682

Dcha: 881

Centro: 819

Tras lo cual