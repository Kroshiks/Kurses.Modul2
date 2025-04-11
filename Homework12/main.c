#include "temp_api.h"

sen info[SIZE];
stat month[12];
stat year;

uint16_t num = 0;

int main(int argc, char **argv){
	setlocale(LC_ALL, "Rus");
	
	for(uint8_t i = 1; i < argc; i++)
	{
		char* str = argv[i];
			
		if(str[0] == '-')
		{
			switch(str[1])
			{
				case 'f':
				{
					num = loadStruct(info);
					analyzeMonth(info, month, num);
					analyzeYear(info, &year, num);
					printf("%2s%8s%8s%8s", "№", "avrM", "minM", "maxM");
					for(uint8_t i = 0; i < 12; i++)
						printf("\n%2d%7d%8d%8d",i+1, month[i].avr, month[i].min, month[i].max);
					printf("\nСтатистика за год: avr temp = %d; min temp = %d; max temp = %d\n", year.avr, year.min, year.max);
					break;
				}
				case 'm':
				{
					
					break;
				}
				case 'p':
				{
					print(info, num);
					break;
				}
				case 'h':
				{
					menu();
					break;
				}
				default:
				{
					printf("Ошибка: аргумент %s не поддерживается!\n", str);
					menu();
				}
			}
		}
	}
	return 0;
}
