int getRandomNumber(int min, int max) {
  return min + (rand() % (max - min));
}

void main() {
  int randomNumber = getRandomNumber(1, 10);
  printf("%d\n", randomNumber);
}