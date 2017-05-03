#include <stdio.h>
#include <stdlib.h>
#include "stdint.h"

uint32_t nextPC;
uint32_t currentPC;

//Control Lines - Based on Figure 4.18 page 266
uint8_t RegDst;
uint8_t Branch;
uint8_t MemRead;
uint8_t MemtoReg;
uint8_t ALUOp0;
uint8_t ALUOp1;
uint8_t MemWrite;
uint8_t ALUsrc;
uint8_t RegWrite;

uint8_t PCsrc;    
int32_t signExtension; //Sign Extension
uint8_t pc;

//Pipeline Registers
uint32_t IF_ID;
uint32_t ID_EX;
uint32_t EX_MEM;
uint32_t MEM_WB;

//Pipeline Stages
void IF(); //Instruction Fetch
void ID();  //Instruction Decode
void EX(); //Execute
void MEM(); //Memory Access
void WB(); //Write Back 

void buildPipeline();
void init_pipeline();