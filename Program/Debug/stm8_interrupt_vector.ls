   1                     ; C Compiler for STM8 (COSMIC Software)
   2                     ; Generator V4.2.8 - 03 Dec 2008
  34                     ; 12 @far @interrupt void NonHandledInterrupt (void)
  34                     ; 13 {
  35                     	switch	.text
  36  0000               f_NonHandledInterrupt:
  40                     ; 17 	return;
  43  0000 80            	iret
  45                     .const:	section	.text
  46  0000               __vectab:
  47  0000 82            	dc.b	130
  49  0001 00            	dc.b	page(__stext)
  50  0002 0000          	dc.w	__stext
  51  0004 82            	dc.b	130
  53  0005 00            	dc.b	page(f_NonHandledInterrupt)
  54  0006 0000          	dc.w	f_NonHandledInterrupt
  55  0008 82            	dc.b	130
  57  0009 00            	dc.b	page(f_NonHandledInterrupt)
  58  000a 0000          	dc.w	f_NonHandledInterrupt
  59  000c 82            	dc.b	130
  61  000d 00            	dc.b	page(f_NonHandledInterrupt)
  62  000e 0000          	dc.w	f_NonHandledInterrupt
  63  0010 82            	dc.b	130
  65  0011 00            	dc.b	page(f_NonHandledInterrupt)
  66  0012 0000          	dc.w	f_NonHandledInterrupt
  67  0014 82            	dc.b	130
  69  0015 00            	dc.b	page(f_NonHandledInterrupt)
  70  0016 0000          	dc.w	f_NonHandledInterrupt
  71  0018 82            	dc.b	130
  73  0019 00            	dc.b	page(f_NonHandledInterrupt)
  74  001a 0000          	dc.w	f_NonHandledInterrupt
  75  001c 82            	dc.b	130
  77  001d 00            	dc.b	page(f_NonHandledInterrupt)
  78  001e 0000          	dc.w	f_NonHandledInterrupt
  79  0020 82            	dc.b	130
  81  0021 00            	dc.b	page(f_NonHandledInterrupt)
  82  0022 0000          	dc.w	f_NonHandledInterrupt
  83  0024 82            	dc.b	130
  85  0025 00            	dc.b	page(f_NonHandledInterrupt)
  86  0026 0000          	dc.w	f_NonHandledInterrupt
  87  0028 82            	dc.b	130
  89  0029 00            	dc.b	page(f_NonHandledInterrupt)
  90  002a 0000          	dc.w	f_NonHandledInterrupt
  91  002c 82            	dc.b	130
  93  002d 00            	dc.b	page(f_NonHandledInterrupt)
  94  002e 0000          	dc.w	f_NonHandledInterrupt
  95  0030 82            	dc.b	130
  97  0031 00            	dc.b	page(f_NonHandledInterrupt)
  98  0032 0000          	dc.w	f_NonHandledInterrupt
  99  0034 82            	dc.b	130
 101  0035 00            	dc.b	page(f_NonHandledInterrupt)
 102  0036 0000          	dc.w	f_NonHandledInterrupt
 103  0038 82            	dc.b	130
 105  0039 00            	dc.b	page(f_NonHandledInterrupt)
 106  003a 0000          	dc.w	f_NonHandledInterrupt
 107  003c 82            	dc.b	130
 109  003d 00            	dc.b	page(f_NonHandledInterrupt)
 110  003e 0000          	dc.w	f_NonHandledInterrupt
 111  0040 82            	dc.b	130
 113  0041 00            	dc.b	page(f_NonHandledInterrupt)
 114  0042 0000          	dc.w	f_NonHandledInterrupt
 115  0044 82            	dc.b	130
 117  0045 00            	dc.b	page(f_NonHandledInterrupt)
 118  0046 0000          	dc.w	f_NonHandledInterrupt
 119  0048 82            	dc.b	130
 121  0049 00            	dc.b	page(f_NonHandledInterrupt)
 122  004a 0000          	dc.w	f_NonHandledInterrupt
 123  004c 82            	dc.b	130
 125  004d 00            	dc.b	page(f_NonHandledInterrupt)
 126  004e 0000          	dc.w	f_NonHandledInterrupt
 127  0050 82            	dc.b	130
 129  0051 00            	dc.b	page(f_NonHandledInterrupt)
 130  0052 0000          	dc.w	f_NonHandledInterrupt
 131  0054 82            	dc.b	130
 133  0055 00            	dc.b	page(f_NonHandledInterrupt)
 134  0056 0000          	dc.w	f_NonHandledInterrupt
 135  0058 82            	dc.b	130
 137  0059 00            	dc.b	page(f_NonHandledInterrupt)
 138  005a 0000          	dc.w	f_NonHandledInterrupt
 139  005c 82            	dc.b	130
 141  005d 00            	dc.b	page(f_NonHandledInterrupt)
 142  005e 0000          	dc.w	f_NonHandledInterrupt
 143  0060 82            	dc.b	130
 145  0061 00            	dc.b	page(f_NonHandledInterrupt)
 146  0062 0000          	dc.w	f_NonHandledInterrupt
 147  0064 82            	dc.b	130
 149  0065 00            	dc.b	page(f_NonHandledInterrupt)
 150  0066 0000          	dc.w	f_NonHandledInterrupt
 151  0068 82            	dc.b	130
 153  0069 00            	dc.b	page(f_NonHandledInterrupt)
 154  006a 0000          	dc.w	f_NonHandledInterrupt
 155  006c 82            	dc.b	130
 157  006d 00            	dc.b	page(f_NonHandledInterrupt)
 158  006e 0000          	dc.w	f_NonHandledInterrupt
 159  0070 82            	dc.b	130
 161  0071 00            	dc.b	page(f_NonHandledInterrupt)
 162  0072 0000          	dc.w	f_NonHandledInterrupt
 163  0074 82            	dc.b	130
 165  0075 00            	dc.b	page(f_NonHandledInterrupt)
 166  0076 0000          	dc.w	f_NonHandledInterrupt
 167  0078 82            	dc.b	130
 169  0079 00            	dc.b	page(f_NonHandledInterrupt)
 170  007a 0000          	dc.w	f_NonHandledInterrupt
 171  007c 82            	dc.b	130
 173  007d 00            	dc.b	page(f_NonHandledInterrupt)
 174  007e 0000          	dc.w	f_NonHandledInterrupt
 225                     	xdef	__vectab
 226                     	xref	__stext
 227                     	xdef	f_NonHandledInterrupt
 246                     	end
