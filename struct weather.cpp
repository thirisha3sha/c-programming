//weather report
#include<stdio.h>
struct weatherreport{
	float temperature;
	float humidity;
	float windspeed;
	float precipitation;
	
};
int main(){
	struct weatherreport weeklyweather[7];//array struct to store weather reports for each day
	struct weatherreport *ptr=weeklyweather;
	int i;
	for(i=0;i<7;i++)
	{
		printf("day %d\n",i+1);
		printf("enter temperature:");
		scanf("%f",&(ptr+i)->temperature);
		printf("enter humidity:");
		scanf("%f",&(ptr+i)->humidity);
		printf("enter windspeed:");
		scanf("%f",&(ptr+i)->windspeed);
		printf("enter precipitation amount:");
		scanf("%f",&(ptr+i)->precipitation);
	}
	printf("weekly weather reports:");
	for(i=0;i<7;i++)
	{
		printf("\nday:%d",i+1);
		printf("\ntemperature:%2f",(ptr+i)->temperature);
		printf("\nhumidity:%2f",(ptr+i)->humidity);
		printf("\nwindspeed:%2f",(ptr+i)->windspeed);
		printf("\nprecipitation amount:%2f",(ptr+i)->precipitation);
	}
	return 0;
}
