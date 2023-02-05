#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "xparameters.h"
#include "xparameters_ps.h"
#include "platform.h"
#include "xscugic.h"
#include "xtime_l.h"
#include "xil_io.h"

#ifndef LDPC_H_
#define LDPC_H_

#define WC 5

#define	Mp 4 //SUB 세로 LAYER
#define Np 24 //SUB 가로 BLOCK

#define Z 27 

#define M Z*Mp //108
#define N Z*Np //648

#define Offset 0.45 // 0.45 most
#define MAX_LENGTH 540

#define iter 4
#define layer Mp //4

void Encoder(int* input, int* codeword);

void LLR_maker(int* codeword, float* LLR);

#define TRUE 1
#define FALSE 0

void ldpcd_ref(float (*NLLR)[N], float** ref_out);
void ldpcd_opt (float (*NLLR)[N], float** opt_out);

#endif /* LDPC.h */
