extern int __VERIFIER_nondet_int();
extern void __VERIFIER_error();

int id(int x);
int id2(int x);

int id(int x) {
  if (x==0) return 0;
  int ret = id2(x-1) + 1;
  if (ret > 3) return 3;
  return ret;
}

int id2(int x) {
  if (x==0) return 0;
  int ret = id(x-1) + 1;
  if (ret > 3) return 3;
  return ret;
}

int main(void) {
  int input = __VERIFIER_nondet_int();
  int result = id(input);
  if (result == 5) {
    ERROR: __VERIFIER_error();
  }
}
