//Bilal Ulutas - 2021//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct otobusBilgi
{
	char model[200];
	int kapasite;
	int personel;
}otobusler[1000];

int n=0;
int *p=&n;

void firma();
void musteri();
void otobusEkle();
void otobusListele();

void otobusEkle()
{
	system("cls");
	int num;
	do{
    printf("\n\n\n");
    printf("\t\t\tOtobus Modeli:");
    //scanf("%s",&o[otobusSira].model);
    printf("\t\t\tAracin Kapasitesi:");
    //scanf("%d",&o[otobusSira].kapasite);
    printf("\t\t\tPersonel Sayisi:");
    //scanf("%d",&o[otobusSira].personel);
    //o[otobusSira].no = otobusSira+1;
    otobusSira++;
    //otobusListele();
    printf("\t\t\t1.YENI KAYIT\n");
    printf("\t\t\t2.UST MENU\n");
    printf("\t\t\tLutfen bir giris yapiniz:-> \n");
    scanf("%d",&num);
    }while(num != 2);
    firma();
}
void otobusListele()
{
	int i;
//	for(i=0;i<=otobusSira;i++)
	//{
	//	printf("%d Numarali Arac:\n",o[otobusSira].no);
	//	printf("Modeli: %s\n",o[otobusSira].model);
	//	printf("Kapasitesi: %d\n",o[otobusSira].kapasite);
	//	printf("Personel Sayisi: %d\n",o[otobusSira].personel);
//	}
}
void firma()
{
	
	int num;
	do{
	system("cls");
    printf("\n\n\n");
    printf("\t\t\tANA MENU\n\n\n");
    printf("\t\t\t1.OTOBUS BILGISI EKLE\n");
    printf("\t\t\t2.OTOBUS LISTELE\n");
    printf("\t\t\t3.SEFER BILGISI EKLE\n");
    printf("\t\t\t4.SEFER/KOLTUK BILGISI\n");
    printf("\t\t\t5.BIR UST MENUYE DON\n");
    printf("\t\t\tLutfen bir giris yapiniz:-> ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
    	otobusEkle();
        break;
    case 2:
        otobusListele();
        break;
    }
    }while(num != 5);
    main();
}

void musteri()
{
	
	int num;
	do{
	system("cls");
    printf("\n\n\n");
    printf("\t\t\tANA MENU\n\n\n");
    printf("\t\t\t1.SEFERLERI LISTELE\n");
    printf("\t\t\t2.SEFER REZERVASYON YAP\n");
    printf("\t\t\t3.REZERVASYON GOSTER\n");
    printf("\t\t\t4.BIR UST MENUYE DON\n");
    printf("\t\t\tLutfen bir giris yapiniz:-> ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
    	firma();
        break;
    case 2:
        musteri();
        break;
    }
    }while(num != 4);
    main();
}
void ekle(struct otobusBilgi x){
    for(int i=0;i<n;i++){
    printf("\n\n%d.Arac plakasini giriniz:",i+1);
scanf("%s",&araclar[i].plaka);
printf("\n%d.Arac modelini giriniz:",i+1);
scanf("%s",&araclar[i].model);
printf("\n%d.Arac renk bilgisini giriniz:",i+1);
scanf("%s",&araclar[i].renk);
printf("\n%d.Arac Giris saatini belirtiniz: \"***aa:aa olarak belirtiniz...****\" ",i+1);
scanf("%s",&araclar[i].zaman);
}

void liste(struct otobusBilgi y){ 
	int i,n;
    printf("\nKac Arac Listesi Yazdirilacak ise Lutfen Belirtiniz");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("\n\n%d. Arac Bilgileri:",i+1);
    printf("-------------------------------------------------------------------------------");
    printf("\n\n%d.Arac Giris Saati :%s",i+1,araclar[i].zaman);
    printf("\n\nArac Plaka:%s\n\n",araclar[i].plaka);
    printf("Arac Model:%s\n\n",araclar[i].model);
    printf("Arac Renk:%s\n\n",araclar[i].renk);
    printf("************************************************************************");
    }
}

int main()
{
	
	ekle();
	liste();


    
	getch();
int num;
    do{
    system("cls");
    printf("\n\n\n");
    printf("\t\t\tANA MENU\n\n\n");
    printf("\t\t\t1.FIRMA GIRISI\n");
    printf("\t\t\t2.MUSTERI GIRISI\n");
    printf("\t\t\t3.CIKIS\n");
    printf("\t\t\tLutfen bir giris yapiniz:-> ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
    	firma();
        break;
    case 2:
        musteri();
        break;
    }
getch();
    }while(num != 3);
    system("CLS");
    printf("\t\t\tCIKIS YAPTINIZ\n");
    getch();
    return 0;
}
