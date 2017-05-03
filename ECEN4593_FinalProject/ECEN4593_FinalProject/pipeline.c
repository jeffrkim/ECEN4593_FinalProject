#include <stdio.h>
#include <stdlib.h>
#include "stdint.h"
#include "pipeline.h"


void buildPipeline(void)
{
	IF();  //Instruction Fetch
	ID();  //Instruction Decode
	EX(); //Execute
	MEM(); //Memory Access
	WB();  //Write Back 
}

void init_pipeline()
{

}

void IF(void)
{
	int32_t branchOffset;
	if (!PCsrc)
		pc = pc + 4;
	else
		pc = pc + 4 + (4 * branchOffset);

}

void ID()
{

}

void EX()
{

}

void MEM()
{

}

void WB()
{

}

