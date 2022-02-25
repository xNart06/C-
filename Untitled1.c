#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    float kdv, kdv_tev, birim, sonuc, islem, fiyat, mal_h_topl, topl_kdv, topl_kdv_tev, vergiler_dhl, odenecek;
    int sec, a=0, i;
    char mal;
    while(a==0){
                printf("Birim Miktarýný Giriniz:\n"); scanf("%f",&birim);
                printf("Birim Fiyatýný giriniz: \n"); scanf("%f",&fiyat);
                islem=birim*fiyat; kdv=islem*18/100;
                printf("\n**********");
                printf("\nKDV Tutarý: %2.2f TL\n",kdv);
                kdv_tev = kdv*70/100;
                printf("KDV Tevkifat Tutarý: %2.2f TL\n",kdv_tev);
                printf("Mal Hizmet Tutarý: %2.2f TL",islem);
                printf("\n**********\n");

                mal_h_topl= mal_h_topl + islem;
                topl_kdv = topl_kdv + kdv;
                topl_kdv_tev =  topl_kdv_tev + kdv_tev;
                vergiler_dhl = mal_h_topl + topl_kdv;
                odenecek = vergiler_dhl - topl_kdv_tev;


                printf("\t\t*********SONUÇ********\n");
                printf("\t\tMal Hizmet Toplam Tutarý:  %2.2f TL\n",mal_h_topl);
                printf("\t\tHesaplanan KDV(%18):  %2.2f TL\n",topl_kdv);
                printf("\t\tHesaplanan KDV Tevkifat(%70): %2.2f\n",topl_kdv_tev);
                printf("\t\tTevkifata Tabi Ýþlem Tutarý:  %2.2f TL\n",mal_h_topl);
                printf("\t\tTevkifata Tabi Ýþlem Üzerinden Hesaplanan KDV:  %2.2f TL\n",topl_kdv);
                printf("\t\tVergiler Dahil Toplam Tutar:  %2.2f TL\n",vergiler_dhl);
                printf("\t\tÖdenecek Tutar:  %2.2f TL\n",odenecek);
                printf("\t\t*********************\n\n");
        }
    return 0;

    }
