#include <stdio.h>
#include <stdlib.h>



void satirboslugu()
	{
		printf("\n");
	}

void hatamesaji()
    {
    	printf("\nYanlis Tuslama Yaptiniz. Lutfen Tekrar Deneyiniz.\n\n");
	}

void bilgimesaji()
	{
		printf("\nRezervasyon Isleminiz Tamamlanmistir.\nYakit Masraflari Dahil Olarak Toplam Odemeniz Gereken Tutar: ");
	}	

void bilgimesaji2()
	{
		printf("Yakit Masraflari Haric Odemeniz Gereken Tutar: ");
	}
	
void uyari()
	{
	 	printf("Dosya Adresini Girdiginiz Konumda Bulunamadi!");	
	}	

int main() {

	printf("******OTOMOBIL KIRALAMA SISTEMINE HOSGELDINIZ!******\n\n\n");
	
	printf("***SISTEMIMIZDE BULUNAN ARAC MODELLERI:***");
	char dizi1[4][40]={"1-2019","2-2020","3-2021","4-2022\n"};
	satirboslugu();
	int a=0;
	for(a=0;a<4;a++)
	{
		printf("%s",dizi1[a]);
		satirboslugu();
	}
	
	printf("***ARACLARIMIZIN GUNLUK KIRA UCRETLERI:***");
	satirboslugu();
	char dizi2[4][40]={"2019 model icin 300TL","2020 model icin 500TL","2021 model icin 700TL","2022 model icin 900TL\n"};
	int b=0;
	for(b=0;b<4;b++)
	{
		printf("%s",dizi2[b]);
		satirboslugu();
	}
	
	printf("***ARACLARIMIZIN MODELLERINE GORE SIRASIYLA KM'DE YAKTIGI YAKIT UCRETLERI:***");
	satirboslugu();
	char dizi3[4][40]={"2019 model icin km'de 7TL","2020 model icin km'de 5TL","2021 model icin km'de 3TL","2022 model icin km'de 1.5TL\n"};
	int c=0;
	for(c=0;c<4;c++)
	{
		printf("%s",dizi3[c]);
		satirboslugu();
	}
	
	FILE *not1,*not2,*not3;
	char karakter1,karakter2,karakter3;
	
	not1=fopen("C:\\Users\\pc\\Desktop\\not1.txt","r");
	if(not1==NULL)
	{
		uyari();
	}
	else
	{
		do
		{
			karakter1=getc(not1);
			printf("%c",karakter1);
		}
		while(karakter1!=EOF);
	}
	fclose(not1);
	
	printf("\n\n");
	
	not2=fopen("C:\\Users\\pc\\Desktop\\not2.txt","r");
	if(not2==NULL)
	{
		uyari();
	}
	else
	{
		do
		{
			karakter2=getc(not2);
			printf("%c",karakter2);
		}
		while(karakter2!=EOF);
	}
	fclose(not2);
	
	printf("\n\n");

	not3=fopen("C:\\Users\\pc\\Desktop\\not3.txt","r");
	if(not3==NULL)
	{
		uyari();
	}
	else
	{
		do
		{
			karakter3=getc(not3);
			printf("%c",karakter3);
		}
		while(karakter3!=EOF);   
	}                          
	fclose(not3);
	
	satirboslugu();
	satirboslugu();
	printf("----------------------------------------------------\n");
	
	int kiraliksuresi=0,toplam=0,aracmodel=0,gidilecekkm=0;
 	int model1=300;
 	int model2=500;
 	int model3=700;
 	int model4=900;
 	
 	int i=1;
 	while(i>0)
 	{
	i++;
	printf("Hangi Model Yilina Ait Araci Kiralamak Istiyorsunuz?\n");
	
	scanf("%d",&aracmodel);
	if(2019<=aracmodel && aracmodel<=2022)
	{
	int j=1;
	while(j>0)
	{
	j++;
	printf("Araci Kac Gun Icin Kiralamak Istiyorsunuz?\n");
	
	scanf("%d",&kiraliksuresi);
	if(kiraliksuresi<=7)
	{
	int k=1;		
	while(k>0)
	{
	k++;
	
	printf("Arac Ile Kac Km Yol Gideceksiniz?\n");
	
	scanf("%d",&gidilecekkm);
	if(gidilecekkm<=500)
	{
	switch(aracmodel)
	{
		case 2019:
			bilgimesaji2();
			printf("%dTL'dir.\n\n",(model1*kiraliksuresi));
			break;
		case 2020: 
			bilgimesaji2();
			printf("%dTL'dir.\n\n",(model2*kiraliksuresi));
			break;
		case 2021: 
			bilgimesaji2();
			printf("%dTL'dir.\n\n",(model3*kiraliksuresi));
			break;
		case 2022:
			bilgimesaji2();
			printf("%dTL'dir.\n\n",(model4*kiraliksuresi));
			break;
		default:hatamesaji();
		
    }
    
    printf("Rezervasyon Islemini Onayliyorsaniz 1'e , Onaylamiyorsaniz 2'ye Basiniz.\n");
    int sayi;
    scanf("%d",&sayi);
    if(sayi==1)
    {
    	int model1yakit=7;
    	int model2yakit=5;
    	int model3yakit=3;
    	float model4yakit=1.5;
    	switch(aracmodel)
		{
		case 2019:
			bilgimesaji();
			printf("%dTL'dir.\n",(model1*kiraliksuresi)+(gidilecekkm*model1yakit));
			break;
		case 2020: 
			bilgimesaji();
			printf("%dTL'dir.\n",(model2*kiraliksuresi)+(gidilecekkm*model2yakit));
			break;
		case 2021: 
			bilgimesaji();
			printf("%dTL'dir.\n",(model3*kiraliksuresi)+(gidilecekkm*model3yakit));
			break;
		case 2022:
			bilgimesaji();
			printf("%.2fTL'dir.\n",(model4*kiraliksuresi)+(gidilecekkm*model4yakit));
			break;
	    }
	    break;
    }
    
    	
	
	if(sayi==2)
	
	{
		printf("\nRezervasyon Isleminiz Iptal Edilmistir.\nSistemden Cikmak Icin Herhangi Bir Tusa Basiniz.");
		break;
	}
	
	}
	else
	{
		hatamesaji();
	}
	
	}
	break;
 	}
 	else
 	{
 		hatamesaji();
	}
	
	}
	break;
	}
	else
	{
		hatamesaji();
	}
	
	}
	
    
	return 0;
}
