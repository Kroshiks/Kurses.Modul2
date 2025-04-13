#include "temp_api.h"

sen info[SIZE];
stat month[12];
stat year;
mainFlags flag;

uint16_t num = 0;

int main(int argc, char **argv){
	setlocale(LC_ALL, "Rus");
	char* fileName;
	FILE* f;
	
	for(uint8_t i = 1; i < argc; i++)
	{
		char* str = argv[i];
			
		if(str[0] == '-')
		{
			switch(str[1])
			{
				case 'f':
				{	fileName = argv[i+1];
					i++;
					if((f = fopen(fileName, "r")) > 0)
					{
						flag.load = 1;
						num = loadStruct(info);
						fclose(f);
					}
					else
					{
						printf("\nОшибка: не удалось открыть файл %s!\n\n", fileName);
						fclose(f);
					}	
					break;
				}
				case 'm':
				{
					flag.argM = 1;

					if(flag.load)
					{
						uint8_t numberMonth = 0;
						sscanf(argv[i+1],"%d",&numberMonth);
						i++;
						if(numberMonth > 0 && numberMonth < 13)
						{			
							analyzeMonth(info, month, num, numberMonth);
							printf("%2s%8s%8s%8s", "№", "avrM", "minM", "maxM");
							printf("\n%2d%7d%8d%8d\n\n",numberMonth, month[0].avr, month[0].min, month[0].max);
						}
						else
							printf("Ошибка: введен не коректный номер месяца!\n\n");
					}
					else
						printf("Ошибка: данные не загружены!\n");
					
					break;
				}
				case 'p':
				{
					if(flag.load)
						print(info, num);
					else
						printf("Ошибка: данные не загружены!\n");
					break;
				}
				case 'h':
				{
					flag.menu = 1;
					menu();
					break;
				}
				default:
				{
					flag.menu = 1;
					printf("\nОшибка: аргумент %s не поддерживается!\n", str);
					menu();
				}
			}
		}
	}
	if(!flag.argM)
	{
		if(flag.load)
		{
			analyzeMonth(info, month, num, 0);
			analyzeYear(info, &year, num);
			
			printf("\n%2s%8s%8s%8s", "№", "avrM", "minM", "maxM");
			for(uint8_t i = 0; i < 12; i++)
				printf("\n%2d%7d%8d%8d",i+1, month[i].avr, month[i].min, month[i].max);
			printf("\n\nСтатистика за год: avr temp = %d; min temp = %d; max temp = %d\n\n", year.avr, year.min, year.max);
		}
		else if (!flag.menu)
			printf("Ошибка: данные не загружены!\n\n");
	}
	return 0;
}
