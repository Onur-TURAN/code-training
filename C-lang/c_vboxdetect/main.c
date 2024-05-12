include<stdio.h>

void cpuid(int code, unsigned int* a, unsigned int* b, unsigned int* c, unsigned int* d) {asm volatile("cpuid"): "=a" (*a), "=b" (*b), "=c" (*c), "=d" (*d)
    : "a" (code));
                      }

                  int main() {
             unsigned int eax, ebx, ecx, edx;
            int isVirtualMachine = 0;
          // CPUID talimatı kullanarak sanal makine bayrağını kontrol et
          cpuid(0x1, &eax, &ebx, &ecx, &edx);
                    if ((ecx & (1 << 31)) != 0) {
       isVirtualMachine = 1;
               }
             if (isVirtualMachine) {
           printf("Bu bir sanal makinede çalışıyor olabilir.\n");
                 char operator;
                        double num1, num2;
                  printf("Hesap Makinesi Uygulaması\n");
    printf("İşlem yapmak için sayıları ve operatörü girin (+, -, *, /):\n");
  scanf("%lf %c %lf", &num1, &operator, &num2);
        switch (operator) {
                case '+':
              printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, num1 + num2);
                break;
                  case '-':
            printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, num1 - num2);
              break;
         case '*':
         printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, num1 * num2);
        break;
       case '/':
           if (num2 != 0) {
   printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, num1 / num2);
     } else {
    printf("Bölme işleminde payda sıfır olamaz.\n");
         }
                                                                                                                                                        break;
      default:
  printf("Geçersiz operatör girdisi.\n");
     }
  } else {
     printf("Bu bir gerçek makinede çalışıyor olabilir.\n");
     }
    return 0;
       }

