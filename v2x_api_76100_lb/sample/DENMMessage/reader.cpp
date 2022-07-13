/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).
 */
#include "DENM-PDU-Descriptions.h"
#include "rtxsrc/OSRTFileOutputStream.h"
#include "rtxmlsrc/OSXMLEncodeStream.h"
#include "rtjsonsrc/OSJSONEncodeStream.h"

#include <stdio.h>
#include <stdlib.h>

#define MAXREADLEN 1024

int main (int argc, char** argv)
{
   OSBOOL       aligned = !TRUE;
   OSBOOL       trace = TRUE, verbose = FALSE;
   const char*  filename = "message.dat";
   int          i, stat;

   // Process command line arguments
   if (argc > 1) {
      for (i = 1; i < argc; i++) {
         if (!strcmp (argv[i], "-v")) verbose = TRUE;
         else if (!strcmp (argv[i], "-i")) filename = argv[++i];
         else if (!strcmp (argv[i], "-notrace")) trace = FALSE;
         else {
            printf ("usage: reader [-v] [-i <filename>] [-notrace]\n");
            printf ("   -v  verbose mode: print trace info\n");
            printf ("   -i <filename>  read encoded msg from <filename>\n");
            printf ("   -notrace  do not display trace info\n");
            return 1;
         }
      }
   }

   ASN1PERDecodeBuffer decodeBuffer (aligned);
   ASN1T_DENM data;
   ASN1C_DENM DENMPDU (decodeBuffer, data);
   decodeBuffer.setDiag (verbose);
   decodeBuffer.readBinaryFile (filename);
   if (decodeBuffer.getStatus() != 0) {
      printf("Error opening %s for read access\n", filename);
      decodeBuffer.printErrorInfo();
      return -1;
   }
   decodeBuffer.SetTrace (trace);
   stat = DENMPDU.Decode ();
   if (stat != 0) {
      printf ("decode of PersonnelRecord failed\n");
      decodeBuffer.PrintErrorInfo ();
      return stat;
   }

   if (trace) {
      printf ("Dump of decoded bit fields:\n");
      decodeBuffer.BinDump ("Data");
      printf ("\n");
      printf ("Decode of data was successful\n");
      printf ("Decoded record:\n");
      DENMPDU.setPrintStream (rtxPrintStreamToStdoutCB, 0);
      DENMPDU.toStream();
   }

   // Output decoded data to XER (XML) format

   OSRTFileOutputStream xerfos ("message.xml");
   OSXMLEncodeStream xerEncStrm (xerfos);

   stat = DENMPDU.EncodeTo (xerEncStrm);
   if (stat != 0) {
      printf ("encode MessageFrame to XER failed\n");
      xerEncStrm.printErrorInfo ();
      return stat;
   }

   // Output decoded data to JSON format

   OSRTFileOutputStream jsonfos ("message.json");
   OSJSONEncodeStream jsonEncStrm (jsonfos);

   stat = DENMPDU.EncodeTo (jsonEncStrm);
   if (stat != 0) {
      printf ("encode MessageFrame to JSON failed\n");
      jsonEncStrm.printErrorInfo ();
      return stat;
   }

   return 0;
}