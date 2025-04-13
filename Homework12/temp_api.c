#include "temp_api.h"

void menu(){
	printf("\nМеню:\n");
	printf("-h - возможности приложения;\n");
	printf("-p - вывод структуры;\n");
	printf("-m (номер месяца) - статистика за определенный месяц;\n");
	printf("-f (имя файла.csv) - загрузить данные.\n");
	printf("\nПримечание: аргументы -m  или -p можно вводить только совместно с аргументом -f!\n\n");
	
}
void addInfo(sen* info, uint16_t num, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, int8_t temp){
	info[num]. year = year;
	info[num]. month = month;
	info[num]. day = day;
	info[num]. hour = hour;
	info[num]. min = min;
	info[num]. temp = temp;
}

uint16_t loadStruct(sen* info){
	uint16_t i = 0;
	addInfo(info, i++, 2025, 1, 23, 21, 54, -10);
	addInfo(info, i++, 2025, 1, 10, 15, 36, -3);
	addInfo(info, i++, 2025, 2, 11, 4, 21, -11);
	addInfo(info, i++, 2025, 3, 27, 15, 45, 8);
	addInfo(info, i++, 2025, 3, 30, 8, 00, 7);
	addInfo(info, i++, 2025, 4, 2, 13, 10, 11);
	addInfo(info, i++, 2025, 4, 6, 17, 30, 13);
	addInfo(info, i++, 2025, 5, 23, 21, 54, -23);
	addInfo(info, i++, 2025, 5, 5, 21, 54, 33);
	addInfo(info, i++, 2025, 6, 23, 21, 54, 55);
	addInfo(info, i++, 2025, 7, 23, 21, 54, 42);
	addInfo(info, i++, 2025, 8, 23, 21, 54, -99);
	addInfo(info, i++, 2025, 9, 23, 21, 54, 23);
	addInfo(info, i++, 2025, 10, 23, 21, 54, 57);
	addInfo(info, i++, 2025, 10, 23, 21, 54, 67);
	addInfo(info, i++, 2025, 11, 23, 21, 54, 0);
	addInfo(info, i++, 2025, 12, 23, 21, 54, 12);
	return i;	
}

void print(sen* info, uint16_t num){
	printf("\n%4s%9s%8s%7s%10s%15s\n", "Год", "Месяц", "День", "Час", "Минуты", "Температура");
	for(uint16_t i = 0; i < num; i++)
	{	
		printf("%4d%7d%9d%7d%9d%13d\n",
				info[i].year,
				info[i].month,
				info[i].day,
				info[i].hour,
				info[i].min,
				info[i].temp
			 );
	}
}

void analyzeMonth(sen* info, stat* month, uint16_t num, uint8_t arg){
	int16_t sum = 0;
	int8_t max = -100;
	int8_t min = 100;
	uint8_t k = 0, j = 0;

	switch(arg)
	{
		case 0:
		{
			for(uint16_t i = 0; i < num; i++)
			{
				if (info[i].month == info[i+1].month)
				{
					sum += info[i].temp;
					k++;
					if(info[i].temp < min)
						min = info[i].temp;
					if(info[i].temp > max)
						max = info[i].temp;
				}
				else
				{
					if(min > info[i].temp)
						min = info[i].temp;
					if(info[i].temp > max)
						max = info[i].temp;
						
					month[j].max = max;
					month[j].min = min;
					
					k++;
					sum += info[i].temp;
					month[j].avr = sum/k;
					
					sum = k = 0;
					j++;
					max = info[i+1].temp;
					min = info[i+1].temp;				
				}		
			}

			break;
		}
		default:
		{
			for(uint16_t i = 0; i < num; i++)
			{
				if (info[i].month == arg)
				{
					sum += info[i].temp;
					k++;
					if(info[i].temp < min)
						min = info[i].temp;
					if(info[i].temp > max)
						max = info[i].temp;
				}
			}		
			month[j].max = max;
			month[j].min = min;
			month[j].avr = sum/k;
			break;			
		}
	}
}

void analyzeYear(sen* info, stat* year, uint16_t num){
	int16_t sum = 0;
	int8_t max = info[0].temp;
	int8_t min = info[0].temp;
	
	for(uint16_t i = 0; i < num; i++)
	{
		sum += info[i].temp;
		if(info[i].temp < min)
			min = info[i].temp;
		if(info[i].temp > max)
			max = info[i].temp;									
	}

	year->avr = sum / num;
	year->min = min;
	year->max = max;
}
