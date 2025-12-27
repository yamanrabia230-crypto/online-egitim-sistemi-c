#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {

    int i, j, d, p;

    /* === KURS BILGILERI (2 BOYUTLU CHAR DIZISI) === */
    char kurslar[5][40] = {
        "C Programlama",
        "Web Gelistirme",
        "Algoritmalar",
        "Python Veri Bilimi",
        "Mobil Uygulama"
    };

    char onizleme[5][50] = {
        "Degiskenler ve donguler",
        "HTML CSS JS giris",
        "Veri yapilari giris",
        "Pandas numpy baslangic",
        "Android ekranlar"
    };

    int fiyat[5] = {200, 250, 300, 220, 280};

    /* === YORUMLAR (3 BOYUTLU CHAR DIZISI) === */
    char yorumlar[5][2][50] = {
        {"Guzel baslangic", "Ornekler iyi"},
        {"Icerik guzel", "Proje eksik"},
        {"Zor ama faydali", "Hoca iyi"},
        {"Harika anlatim", "Baslangic icin ideal"},
        {"Pratik agirlikli", "Arayuz eksik"}
    };

    /* === KURS PUAN MATRISI (2 BOYUTLU INT) === */
    int kursPuan[5][3] = {
        {80, 85, 90},
        {75, 70, 80},
        {60, 65, 70},
        {90, 95, 92},
        {85, 80, 88}
    };

    /* === KULLANICI BILGILERI === */
    char isim[30];
    char email[30];

    int secim;
    int devam = 1;

    while (devam == 1) {

        printf("\n=== ONLINE EGITIM SISTEMI ===\n");

        /* === KURSLARI LISTELE (DONGU + DIZI) === */
        for (i = 0; i < 5; i++) {
            printf("%d) %s - %d TL\n", i + 1, kurslar[i], fiyat[i]);
        }

        printf("\nBir kurs secin (1-5): ");
        scanf("%d", &secim);

        if (secim < 1 || secim > 5) {
            printf("Hatali secim!\n");
            continue;
        }

        int index = secim - 1;

        printf("\n--- KAYIT BILGILERI ---\n");
        printf("Ad Soyad (bosluksuz): ");
        scanf("%s", isim);

        printf("Email (bosluksuz): ");
        scanf("%s", email);

        printf("\n--- KURS DETAYLARI ---\n");
        printf("Kurs: %s\n", kurslar[index]);
        printf("Onizleme: %s\n", onizleme[index]);
        printf("Fiyat: %d TL\n", fiyat[index]);

        printf("\nYorumlar:\n");
        for (j = 0; j < 2; j++) {
            printf("- %s\n", yorumlar[index][j]);
        }

        /* === PUANLAR (2 BOYUTLU MATRIS OKUMA) === */
        printf("\nKurs Puanlari:\n");
        for (j = 0; j < 3; j++) {
            printf("Ogrenci %d Puani: %d\n", j + 1, kursPuan[index][j]);
        }

        char satin;
        printf("\nSatin almak ister misiniz? (e/h): ");
        scanf(" %c", &satin);

        if (satin == 'e') {
            int bakiye;
            printf("Bakiye girin: ");
            scanf("%d", &bakiye);

            if (bakiye >= fiyat[index]) {

                printf("\nSATIN ALMA BASARILI!\n");

                /* === DERSLER (2 BOYUTLU CHAR DIZISI) === */
                char dersler[4][30] = {
                    "Ders 1: Giris",
                    "Ders 2: Ornekler",
                    "Ders 3: Uygulama",
                    "Ders 4: Ozet"
                };

                printf("\nKurs Icerigi:\n");
                for (d = 0; d < 4; d++) {
                    printf("%d) %s\n", d + 1, dersler[d]);
                }

                int dsec;
                printf("\nBir ders secin (1-4): ");
                scanf("%d", &dsec);

                if (dsec >= 1 && dsec <= 4) {

                    printf("Derse giriliyor: %s\n", dersler[dsec - 1]);

                    /* === ILERLEME DONGUSU === */
                    for (p = 0; p <= 100; p += 20) {
                        printf("%%%d tamamlandi...\n", p);
                    }

                    printf("Ders tamamlandi!\n");

                } else {
                    printf("Hatali ders secimi!\n");
                }

            } else {
                printf("Yetersiz bakiye!\n");
            }

        } else {
            printf("Satin alma iptal edildi.\n");
        }

        printf("\nBaska kurs bakmak ister misiniz? (1=Evet / 0=Hayir): ");
        scanf("%d", &devam);
    }

    printf("\nCikis yapiliyor...\n");
    return 0;
}

