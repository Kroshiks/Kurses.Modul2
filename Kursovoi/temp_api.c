#include "temp_api.h"

void menu(){
	printf("\nМеню:\n");
	printf("-h - возможности приложения;\n");
	printf("-p - вывод структуры;\n");
	printf("-m (номер месяца) - статистика за определенный месяц;\n");
	printf("-f (имя файла.csv) - загрузить данные.\n");
	printf("\nПримечание: аргументы -m  или -p можно вводить только совместно с аргументом -f!\n\n");
}

uint8_t addInfo(sen* info, uint32_t *i, char *line){
	 int year, month, day, hour, min, temp;

	uint8_t parsed = sscanf(line, "%d;%d;%d;%d;%d;%d", &year, &month, &day, &hour, &min, &temp);
    if (parsed != 6)
    {
        return 0; 
    }

    info[*i].year = (uint16_t)year;
    info[*i].month = (uint8_t)month;
    info[*i].day = (uint8_t)day;
    info[*i].hour = (uint8_t)hour;
    info[*i].min = (uint8_t)min;
    info[*i].temp = (int8_t)temp;

    return 1;   
}

uint32_t loadStruct(char* fileName, sen* info){
	FILE* f = fopen(fileName, "r");
	if (!f)
	{
		return 0; 
    }
    
	uint32_t i = 0;
	char line[100];

	while (fgets(line, sizeof(line), f))
	{
		line[strcspn(line, "\n")] = '\0';          
		if(addInfo(info, &i, line))
		{
			i++;
		}
		else
			printf("\nОшибка в строке %s!\n", line);
    }
    
	fclose(f);
	return i;	
}

void print(sen* info, uint32_t num){
	printf("\n%4s%9s%8s%7s%10s%15s\n", "Год", "Месяц", "День", "Час", "Минуты", "Температура");
	for(uint32_t i = 0; i < num; i++)
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

void analyzeMonth(sen* info, stat* month, uint32_t num, uint8_t arg){
	int32_t sum = 0;
	int8_t max = -100;
	int8_t min = 100;
	uint16_t k = 0, j = 0;

	switch(arg)
	{
		case 0:
		{
			for(uint32_t i = 0; i < num; i++)
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
			for(uint32_t i = 0; i < num; i++)
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

void analyzeYear(sen* info, stat* year, uint32_t num){
	int64_t sum = 0;
	int8_t max = info[0].temp;
	int8_t min = info[0].temp;
	
	for(uint32_t i = 0; i < num; i++)
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
