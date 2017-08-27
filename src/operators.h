#ifdef INTEGER
#ifdef INTEGER_SUM
int sum(int a, int b);
#endif
#ifdef INTEGER_MUL
int mul(int a, int b);
#endif
#ifdef INTEGER_SUB
int sub(int a, int b);
#endif
#ifdef INTEGER_DIV
int cdiv(int a, int b);
#endif
#elif REAL
#ifdef REAL_SUM
float sum(float a, float b);
#endif
#ifdef REAL_MUL
float mul(float a, float b);
#endif
#ifdef REAL_SUB
float sub(float a, float b);
#endif
#ifdef REAL_DIV
float cdiv(float a, float b);
#endif
#endif
