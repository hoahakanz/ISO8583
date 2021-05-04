#ifndef _ISO8583_H
#define _ISO8583_H

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char byte;
typedef unsigned int uint;


#define LEN_MSG_CODE			4
#define LEN_BITMAP				8
#define LEN_PAN					19
#define LEN_NII					3
#define LEN_PROC_CODE			6
#define LEN_TRAN_AMT			12
#define LEN_POS_STAN			6
#define LEN_LOCAL_TIME			6
#define LEN_LOCAL_DATE			4
#define LEN_EXP_DATE			4
#define LEN_SETTLE_DATE			4
#define LEN_ENTRY_MODE			4	// In order to deal with left alignment
#define LEN_PAN_SEQ_NO		    4
#define LEN_SVR_CODE			2
#define LEN_CAPTURE_CODE		2
#define LEN_ACQUIRER_ID			11
#define LEN_TRACK2				37
#define LEN_TRACK3				104
#define LEN_RRN					12
#define LEN_AUTH_CODE			6
#define LEN_RSP_CODE			2
#define LEN_TERM_ID				8
#define LEN_MERCHANT_ID			15
#define LEN_ADD_RSP_DATA		25
#define LEN_FIELD43				40
#define LEN_FIELD48				100
#define LEN_CURRENCY_CODE		3
#define LEN_PIN_DATA			8
#define LEN_SECURITY_INFO		16
#define LEN_EXT_AMOUNT			40 
#define LEN_ICC_DATA			260
#define LEN_EP_DATA				100
#define LEN_FIELD60				17 
#define LEN_ORIGINAL_MSG		29
#define LEN_FIELD61				300
#define LEN_FIELD62				512
#define LEN_FIELD63				1024
#define LEN_MAC_DATA			8


typedef struct _tagISO8583{

/*   0 */     byte MsgCode[4];              // Message Type Indicator
/*   1 */     byte BitMap[8];              // Bitmap
/*   2 */     byte Pan[19];                 // Primary Account Number
/*   3 */     byte ProcCode[6];             // Processing Code
/*   4 */     byte TranAmt[12];             // Amount   Txn
/*   5 */     byte SettAmt[12];             // Amount   Settlement
/*   6 */        //  12                     // Amount   Cardholder Billing
/*   7 */       //   10                     // Date and Time   Transmission
/*   8 */       //    8                     // Amount   Cardholder Billing Fee
/*   9 */       //    8                     // Conversion Rate   Settlement
/*  10 */       //    8                     // Conversion Rate   Cardholder Billing
/*  11 */     byte STAN[6];                 // Systems Trace Audit Number
/*  12 */     byte LocalTime[6];            // Time   Local Txn
/*  13 */     byte LocalDate[4];            // Date   Local Txn
/*  14 */     byte ExpDate[4];              // Date   Expiration
/*  15 */       //    6                     // Date   Settlement
/*  16 */       //    4                     // Date   Conversion
/*  17 */       //    4                     // Date   Capture
/*  18 */         //  4                     // Merchant Type
/*  19 */        //   3                     // Country Code   Acquiring Inst
/*  20 */        //   3                     // Country Code   Primary Account Number
/*  21 */        //   3                     // Country Code   Forwarding Inst
/*  22 */     byte EntryMode[4];            // Point of Service Entry Mode
/*  23 */     byte PanSeqNo[4];             // Application PAN number
/*  24 */     byte NII[3];                  // Network International Identifier
/*  25 */     byte SvrCode[2];              // Point of Service Condition Code
/*  26 */     byte CaptureCode[2];          // Point of Service PIN Capture Code
/*  27 */       //    1                     // Authorization Identification Response Length
/*  28 */       //   9                      // Amount   Txn Fee
/*  29 */        //  9                      // Amount   Settlement Fee
/*  30 */        //  9                      // Amount   Txn Processing Fee
/*  31 */        //  9                      // Amount   Settlement Processing Fee
/*  32 */     byte AcquirerID[11];          // Acquirer Inst Id Code
/*  33 */      //    11                     // Forwarding Inst Id Code
/*  34 */       //  28                      // Primary Account Number   Extended
/*  35 */     byte Track2[37];              // Track 2 Data
/*  36 */     byte Track3[104];             // Track 3 Data
/*  37 */     byte RRN[12];                 // Retrieval Reference Number
/*  38 */     byte AuthCode[6];             // Approval Code
/*  39 */     byte RspCode[2];              // Response Code
/*  40 */       //  3                       // Service Restriction Code
/*  41 */     byte TermID[8];               // Card Acceptor Terminal Id
/*  42 */     byte MerchantID[15];          // Card Acceptor Id Code
/*  43 */     byte Field43[40];             // Card Acceptor Name/Location
/*  44 */    //    25                       // Additional Response Data
/*  45 */     //   76                       // Track 1 Data
/*  46 */     //  999                       // Additional Data - ISO
/*  47 */     //  999                       // Additional Data - National
/*  48 */     byte Field48[100];            // Additional Data - Private
/*  49 */     byte CurrencyCode[3];         // Currency Code   Txn
/*  50 */      //    3                      // Currency Code   Settlement
/*  51 */       //   3                      // Currency Code   Cardholder Billing
/*  52 */     byte PINData[8];              // Personal Id Number (PIN) Data
/*  53 */    //      16                     // Security Related Control Information
/*  54 */     //  120                       // Amounts   Additional
/*  55 */     byte ICCData[260];            // ICC
/*  56 */    //   999                       // Reserved for ISO use
/*  57 */    //   999                       // Reserved for National use
/*  58 */    //   999                       // Reserved for National use
/*  59 */    //   999                       // Reserved for National use
/*  60 */    byte Field60[17];              // Reserved for Private use
/*  61 */    byte Field61[300];             // Reserved for Private use
/*  62 */    byte Field62[512];             // Reserved for Private use
/*  63 */    byte Field63[1024];            // Reserved for Private use
/*  64 */    byte MacData[8];               // Message Authentication Code Field
    
    
}tagISO8583;



extern tagISO8583	SendPack,RecvPack;

#endif
