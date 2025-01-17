#include <stdio.h>

int main() {
  int body, head;

// User's Input
printf("Enter the number for arrow body: ");
scanf("%d", &body);

printf("Enter the number for arrow head: ");
scanf("%d" , &head);

//Print Upper Part of the Head
printf(" d%\n", head);
printf(" %d%d\n", head, head);

//Print body and Middle Part
for (int i = 0; i< 3; i++) {
    printf("%d%d%d%d%d%d%d\n", body, body, body, body, head, head, head);
}

//Print Lower Part
printf(" %d%d\n", head, head);
printf(" %d\n", head);


return 0;

}

