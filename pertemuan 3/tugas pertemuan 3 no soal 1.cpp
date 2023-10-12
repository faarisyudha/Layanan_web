 #include <stdio.h>

int main()
{
    float hitungluas;
    float hitungkeliling;
    float alas;
    float tinggi;
    float sisi;

    printf("Masukan panjang alas segitiga: ");
    scanf("%f",&alas);
    printf("Masukan tinggi segitiga (cm) :");
    scanf("%f",&tinggi);
    printf("Masukan sisi segitiga (cm) :");
    scanf("%f",&sisi);

    hitungluas = 0.5 * alas * tinggi;
    hitungkeliling = sisi + sisi + sisi;

    printf("Luas segitiga: %.2f \n" , hitungluas);
    printf("Keliling segitiga: %.2f", hitungkeliling);

    return 0;
}

