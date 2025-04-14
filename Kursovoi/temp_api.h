#include <stdio.h>
#include <inttypes.h>
#include <locale.h>
#include <string.h>

#define SIZE 520000

typedef struct sensor{
	uint16_t year;
	uint8_t month;
	uint8_t day;
	uint8_t hour;
	uint8_t min;
	int8_t temp;	
}sen;

typedef struct statistics{
	int8_t avr;
	int8_t min;
	int8_t max;
}stat;

typedef struct mainFlags{
	unsigned argM:1;
	unsigned load:1;
	unsigned menu:1;
}mainFlags;

extern uint32_t num;

uint8_t addInfo(sen* info, uint32_t *i, char *line);
uint32_t loadStruct(char* fileName, sen* info);
void print(sen* info, uint32_t num);
void analyzeMonth(sen* info, stat* month, uint32_t num, uint8_t arg);
void analyzeYear(sen* info, stat* year, uint32_t num);
void menu();
