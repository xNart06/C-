#include<stdio.h>
#include<stdlib.h>
/**********************************************************************************/
//prev = geri next = ileri icin kullanilacak olan anahtarlarimiz 
//baslagic degeri (r) dan onceki prev ve en son nden sonraki next NULL deger gosterir
//iter her zaman oldugu gibi r ile ayni isi gorecek
//iter kullanmamizin nedeni r'u yani baslangic degerini kaybetmeden liste icinde gezmek
//prev ve next kullanmak icin yine struct icinde bir pointer ile bunu belli etmemiz gerekiyor
//ayrica sunu unutmamak gerekiyor. Linked list icinde dizilerde oldugu gibi random erisim yapilamaz
//bir sonraki ne giden yol her zaman bir onceki nden gecmek zorundadir
//ama cift bagli liste avantaji istedigimiz zaman geri donme imkani verir
/**********************************************************************************/

//Struct yapisi olusturduk next ve prev icin
struct node{
    int data;
    struct node *next;
    struct node *prev;
};

//baslangic adresini tutacak bir root/head degiskenine ihtiyacimiz var
struct node *root =NULL;
 
//dugum olusturmak icin struct yapisi yazdik
struct node* dugumOlustur(int veri){
    struct node* yeniDugum = (struct node*)malloc(sizeof(struct node));
    yeniDugum->data = veri;
    yeniDugum->next = NULL;
    yeniDugum->prev = NULL;

    return yeniDugum; //struct turunde bir fonksiyon oldugu icin geriye dugum dondurmesi gerekiyor
};

//sona ekleme fonsksiyonu
void sonaEkle(int veri){//veri adli degisken scope dolayindan dolayi ilk kez kullaniliyor gibi kullanilacak
    struct node* sonaEklenecek = dugumOlustur(veri); //oncelikle ekleme yapabilmek icin yeni bir dugum olusturmamiz gerekiyor
    //hic eleman olmamasi durumu
    if(root == NULL){
        root = sonaEklenecek;
    }else{
    //son elemana gelene kadar listeyi dolascaz
        struct node* iter = root;
        while(iter->next!=NULL){ 
            iter = iter->next; //son degere gelen kadar listeyi gez
        }
        sonaEklenecek->prev = iter;
        iter->next = sonaEklenecek; //izledigim adam gore sona null atamasi yapmama gerek yok
    }
}

//basa eleman ekleme
void basaEkle(int veri){

    struct node* basaEklenecek = dugumOlustur(veri);
    //eleman olmam durumu
    if(root == NULL){
        root = basaEklenecek;
        return;
    }else{
    root->prev = basaEklenecek; //root oncesine dugum olusturduk
    basaEklenecek->next = root; //yeni dugumun nextine root un eski degerini atadik
    root = basaEklenecek; //yeni olusan bastaki eleman artik yeni root degerimiz oldu
    }
}

//araya eleman ekleme
/*A B elemani arasina C degeri eklenecek olsun. A'nin sonraki elemani C yi gösterirken
B'nin de onceki elemani C'yi gostermesi lazim */
void arayaEkle(int kiminOnune, int eklenecek){
    struct node* iter = root;
    struct node* arayaEklenecek = dugumOlustur(eklenecek);
    struct node* onceki = NULL;
    //eleman olmam durumunu kontrol ediyoruz
    if(root==NULL){
        root = arayaEklenecek;
    }else if (root->data == kiminOnune){
        basaEkle(eklenecek);
    }else{

    while(iter->next != NULL){
        if(iter->data == kiminOnune){
            onceki = iter->prev; //B'yi tutuyoruz
            break; //bulduktan sonra dongu duracak
        }
        iter = iter->next;
    }
    iter->prev = arayaEklenecek;
    arayaEklenecek->next = iter;
    arayaEklenecek->prev = onceki;
    onceki->next = arayaEklenecek;
    }
}

//bastan eleman silme
void bastanSil(){
    if(root == NULL){
        printf("Eleman yok...");
        return;
    }else if(root->next == NULL){
        free(root);
        root = NULL;
        return;
    }else{
    struct node* ikinci = root->next;
    free(root);
    ikinci->prev = NULL;
    root = ikinci;
    }
}

//sondan eleman silme
void sondanSil(){
    if(root == NULL){
        printf("!!Liste zaten bos!!");
        return;
    }
    if(root->next == NULL){
        bastanSil();
        return;
    }

    struct node* iter = root;

    while (iter->next != NULL)
    {
        iter = iter->next;
    }
    struct node* onceki = iter->prev;
    free(iter);
    onceki->next = NULL;
}

//aradan silme 
void aradanSil(int silinecek){
    struct node* iter = root;
    while (iter->next != NULL)
    {
        if(iter->data == silinecek)
            break;
        iter = iter->next;
    }
    struct node* sonraki = iter->next;
    struct node* onceki = iter->prev;
    free(iter);
    onceki->next = sonraki;
    sonraki->prev = onceki;
}

//yazdirmak icinde fonksiyon tanimliyoruz
void yazdir(){
        struct node* iter = root;
        while(iter!=NULL){ 
            printf(" %d ", iter->data);
            iter = iter->next; //son degere gelen kadar listeyi gez
        }
    
}

int main(){

    int i, secim, sayi, sayi1;
    
    while(1){
            printf("\n[1] Sona eleman ekleme \n");
            printf("[2] Basa eleman ekleme \n");
            printf("[3] Araya eleman ekleme \n");
            printf("[4] Bastan eleman silme \n");
            printf("[5] Sondan eleman silme \n");
            printf("[6] Aradan eleman silme \n");
            printf(" Seciminizi yapin ...  \n");
            scanf("%d",&secim);

            switch (secim)
            {
            case 1: 
                printf("sona eklemek istediginiz elemani giriniz... \n");
                scanf("%d",&sayi);
                sonaEkle(sayi);
                yazdir();
                break;

                case 2: 
                printf("basa eklemek istediginiz elemani giriniz... \n");
                scanf("%d",&sayi);
                basaEkle(sayi);
                yazdir();
                break;

                case 3: 
                printf("araya eklemek istediginiz elemani giriniz... \n");
                scanf("%d",&sayi);
                printf("hangi elemanin onune eklemek istediginiz elemani giriniz... \n");
                scanf("%d",&sayi1);
                arayaEkle(sayi1,sayi);
                yazdir();
                break;

                case 4:                 
                bastanSil();
                yazdir();
                break;

                case 5:                 
                sondanSil();
                yazdir();
                break;
                
                case 6:
                printf("silinmesini istedeginiz elemani giriniz... \n");
                scanf("%d",&sayi);                 
                aradanSil(sayi);
                yazdir();
                break;
            }
    }

    return 0;
}
