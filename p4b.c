#include <stdio.h>
void towerOfHanoi(int n, char source, char temp, char destination) {
    if (n == 1) {
        printf("Move disc 1 from %c -> %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, temp);
    printf("Move disc %d from %c -> %c\n", n, source, destination);
    towerOfHanoi(n - 1, temp, source, destination);
}
int main() {
    int n;
    printf("Enter number of discs: ");
    scanf("%d", &n);

    printf("\nSequence of moves:\n");
    towerOfHanoi(n, 'S', 'T', 'D');  // S = Source, T = Temporary, D = Destination

    int totalMoves = (1 << n) - 1;  // 2^n - 1 moves
    printf("\nTotal number of moves = %d\n", totalMoves);

    return 0;
}
