struct yume {
    char a;
    int b;
    char c;
};

int main(void) {
    char a[] = {'a','b','c',1,2,3};
    struct yume dream[] = {
        {
            .a = 'a',
            .b = 10,
            .c = 'c'
        },
        {
            .a = 'A',
            .b = 100,
            .c = 'C'
        }
    };

    dream[0].a = 'z';
    dream[1].a = 'Z';
    a[6] = 4;
    return 0;
}