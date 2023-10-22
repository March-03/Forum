#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("data.txt", "r"); // Gantilah "data.txt" dengan nama file yang sesuai

    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    int id;
    char nama[100]; // Ukuran array sesuaikan dengan kebutuhan
    double gaji;

    printf("ID\tNama\t\t\tGaji\n");
    while (fscanf(file, "%d %s %lf", &id, nama, &gaji) != EOF) {
        printf("%d\t%s\t%.2lf\n", id, nama, gaji);
    }

    fclose(file);
    return 0;
}

