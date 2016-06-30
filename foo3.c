void foo3() {return;}
void foo2() {foo3();return;}
void foo1() {foo2();return;}
void foo()  {foo1();return;}

int main(void) {
    foo();
    return 0;
}