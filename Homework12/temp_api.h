#include <stdio.h>
#include <inttypes.h>
#include <locale.h>

#define SIZE 20

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

extern uint16_t num;

void addInfo(sen* info, uint16_t num, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, int8_t temp);
uint16_t loadStruct(sen *info);
void print(sen* info, uint16_t num);
void analyzeMonth(sen* info, stat* month, uint16_t num, uint8_t arg);
void analyzeYear(sen* info, stat* year, uint16_t num);
void menu();
void sort(sen *info, uint16_t num);
