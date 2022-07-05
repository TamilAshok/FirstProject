#include <stdio.h>
  
// size is 8, 4 + 1, then round to multiple of 4 (int's size),
struct stu_a {
    int i;
    char c;
};

// size is 16, 8 + 1, then round to multiple of 8 (long's size),
struct stu_b {
    long l;
    char c;
};
void test_struct_padding()
{
  printf("\n \n");
  printf("%s: %ld\n", "stu_a", sizeof(struct stu_a));
  printf("%s: %ld\n", "stu_b", sizeof(struct stu_b));
  
}

int main(int argc, char * argv[]) {
    test_struct_padding();
    return 0;
}

