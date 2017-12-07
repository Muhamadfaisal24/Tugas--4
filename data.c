#include<stdio.h>
#include<stdbool.h>

int main() {
char nama[50];
int npm;
float ipk;
int nilai;
char kelamin[20];
bool status= true;

	printf("==========================\n");
	printf("Selamat datang di akademik\n");
	printf("==========================\n");
	printf("\n");

	printf("masukan nama anda: ");
	scanf("%s", &nama);
	
	printf("masukan nilai anda: ");
	scanf("%i", &npm);

	printf("masukan nilai ipk anda : ");
	scanf("%f", &ipk);

	printf("jenis kelamin anda L/P: ");
	scanf("%s", &kelamin);
	
	printf("status pernikahan anda: ");
	scanf("%d", &status);
	
	printf("\n");
	printf("==========================\n");
	printf("Apakah data anda sudah Valid?\n");
	printf("==========================\n");
	printf("\n");

	printf("data anda adalah %s\n", nama);
	printf("npm anda adalah %i\n", npm);
	printf("index kumulatif anda adalah %f\n", ipk);
	printf("jenis kelamin anda adalah %s\n", kelamin);
	printf("anda sudah %d\n", status);

return 0;
}
