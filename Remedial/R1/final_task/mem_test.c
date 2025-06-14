#include <stdio.h>

#define NO_WORDS 2
#define SIZE_WORDS (NO_WORDS<<3)

typedef struct {
   unsigned long long double_word[NO_WORDS];
} arr_t __attribute__ ((aligned (SIZE_WORDS) ));


arr_t store_byte_data[8] =
       {
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 }
       };


arr_t store_byte_expected_data[8] =
       {    // double_word0         double_word1
          { 0x00000000000000EF, 0x0000000000000000 },
          { 0x000000000000BE00, 0x0000000000000000 },
          { 0x0000000000AD0000, 0x0000000000000000 },
          { 0x00000000DE000000, 0x0000000000000000 },
          { 0x000000EF00000000, 0x0000000000000000 },
          { 0x0000BE0000000000, 0x0000000000000000 },
          { 0x00AD000000000000, 0x0000000000000000 },
          { 0xDE00000000000000, 0x0000000000000000 }
       };


arr_t store_half_word_data[8] =
       {
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 }
       };


arr_t store_half_word_expected_data[8] =
       {
          { 0x000000000000BEEF, 0x0000000000000000 },
          { 0x0000000000ADBE00, 0x0000000000000000 },
          { 0x00000000DEAD0000, 0x0000000000000000 },
          { 0x000000EFDE000000, 0x0000000000000000 },
          { 0x0000BEEF00000000, 0x0000000000000000 },
          { 0x00ADBE0000000000, 0x0000000000000000 },
          { 0xDEAD000000000000, 0x0000000000000000 },
          { 0xDE00000000000000, 0x00000000000000EF }
       };


arr_t store_word_data[8] =
       {
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 }
       };


arr_t store_word_expected_data[8] =
       {
          { 0x00000000DEADBEEF, 0x0000000000000000 },
          { 0x000000DEADBEEF00, 0x0000000000000000 },
          { 0x0000DEADBEEF0000, 0x0000000000000000 },
          { 0x00DEADBEEF000000, 0x0000000000000000 },
          { 0xF00DC0DE00000000, 0x0000000000000000 },
          { 0x0DC0DE0000000000, 0x00000000000000F0 },
          { 0xC0DE000000000000, 0x000000000000F00D },
          { 0xDE00000000000000, 0x0000000000F00DC0 }
       };


arr_t store_double_word_data[8] =
       {
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 },
          { 0x0000000000000000, 0x0000000000000000 }
       };


arr_t store_double_word_expected_data[8] =
       {
          { 0xDEADBEEFF00DC0DE, 0x0000000000000000 },
          { 0xADBEEFF00DC0DE00, 0x00000000000000DE },
          { 0xBEEFF00DC0DE0000, 0x000000000000DEAD },
          { 0xEFF00DC0DE000000, 0x0000000000DEADBE },
          { 0xF00DC0DE00000000, 0x00000000DEADBEEF },
          { 0x0DC0DE0000000000, 0x000000DEADBEEFF0 },
          { 0xC0DE000000000000, 0x0000DEADBEEFF00D },
          { 0xDE00000000000000, 0x00DEADBEEFF00DC0 }
       };



int store_byte_test() {

    char arr[8] = {0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE};
    const char *result = "Pass";
     
    // Adding the values in store_byte_data
    for (int i = 0; i < 8; i++) {
      char *ptr = (char *)(store_byte_data[i].double_word);
        ptr[i] = arr[i];  

    }

   // Comparing the two arrays 
    for (int i = 0; i < 8; i++) {

      char *data_test = (char *)(store_byte_data[i].double_word);
      char *expected_test = (char *)(store_byte_expected_data[i].double_word); 

      if (data_test[i] != expected_test[i] ){
         return 0;
      }

    }

    // Use this for Printing the arrays
    /*printf("Printing store byte data array\n");
    for (int i = 0; i < 8; i++) {
      printf("\n");
     printf("Store byte index %d\n", i);
     printf("double_word[0] = 0x%016llX\n", store_byte_data[i].double_word[0]);
     printf("double_word[1] = 0x%016llX\n", store_byte_data[i].double_word[1]);
      }
*/
    printf("\n");

    return 1;
} 

int store_half_word_test() {
    unsigned short half_words[8] = { 0xBEEF, 0xADBE, 0xDEAD, 0xEFDE, 0xBEEF, 0xADBE, 0xDEAD, 0xEFDE };
    
     
    // Adding the values in store_byte_data
    for (int i = 0; i < 8; i++) {
     unsigned char *ptr = (unsigned char *)(store_half_word_data[i].double_word);
       ptr[i] = half_words[i];  
      ptr[i+1] = ((half_words[i] >> 8) & 0xFF);

    }

    // use this if you want to print

   /*for (int i = 0; i < 8; i++) {
     printf("\n");
     printf("Store half word index %d\n", i);
     printf("double_word[0] = 0x%016llX\n", store_half_word_data[i].double_word[0]);
     printf("double_word[1] = 0x%016llX\n", store_half_word_data[i].double_word[1]);
      }
   */
  
   // Testing
   for (int i = 0; i < 8; i++) {

   
      if ((store_half_word_data[i].double_word[0] != store_half_word_expected_data[i].double_word[0] )|| (store_half_word_data[i].double_word[1] != store_half_word_expected_data[i].double_word[1])){
         return 0;
      }

    }
    return 1;
}
int store_word_test ( ) {
unsigned int words[8] = { 0xDEADBEEF, 0xDEADBEEF,0xDEADBEEF,0xDEADBEEF, 0xF00DC0DE, 0xF00DC0DE, 0xF00DC0DE, 0xF00DC0DE };

for (int i = 0; i < 8; i++) {
     unsigned char *ptr = (unsigned char *)(store_word_data[i].double_word);
       ptr[i] = words[i];  
      ptr[i+1] = ((words[i] >> 8) & 0xFF);
      ptr[i+2] = (words[i] >> 16) & 0xFF;
      ptr[i+3] = (words[i] >> 24) & 0xFF;

    }

        // use this if you want to print

  /*for (int i = 0; i < 8; i++) {
     printf("\n");
     printf("Store word data index %d\n", i);
     printf("double_word[0] = 0x%016llX\n", store_word_data[i].double_word[0]);
     printf("double_word[1] = 0x%016llX\n", store_word_data[i].double_word[1]);
      }
   */
  

   // Testing
   for (int i = 0; i < 8; i++) {

   
      if ((store_word_data[i].double_word[0] != store_word_expected_data[i].double_word[0] )|| (store_word_data[i].double_word[1] != store_word_expected_data[i].double_word[1])){
         return 0;
      }

    }
    return 1;
// DEADBEEF, F00DC0DE

} // store_word_test



int store_double_word_test ( ) {
   unsigned long long words[8] = { 0xDEADBEEFF00DC0DE, 0xDEADBEEFF00DC0DE,0xDEADBEEFF00DC0DE,0xDEADBEEFF00DC0DE, 0xDEADBEEFF00DC0DE, 0xDEADBEEFF00DC0DE, 0xDEADBEEFF00DC0DE, 0xDEADBEEFF00DC0DE };

for (int i = 0; i < 8; i++) {
     unsigned char *ptr = (unsigned char *)(store_double_word_data[i].double_word);
       ptr[i] = words[i];  
      ptr[i+1] = ((words[i] >> 8) & 0xFF);
      ptr[i+2] = (words[i] >> 16) & 0xFF;
      ptr[i+3] = (words[i] >> 24) & 0xFF;
      ptr[i+4] = (words[i] >> 32) & 0xFF;
      ptr[i+5] = ((words[i] >> 40) & 0xFF);
      ptr[i+6] = (words[i] >> 48) & 0xFF;
      ptr[i+7] = (words[i] >> 56) & 0xFF;

    }

        // use this if you want to print

 /* for (int i = 0; i < 8; i++) {
     printf("\n");
     printf("Store double word index %d\n", i);
     printf("double_word[0] = 0x%016llX\n", store_double_word_data[i].double_word[0]);
     printf("double_word[1] = 0x%016llX\n", store_double_word_data[i].double_word[1]);
      }
   */
  

   // Testing
   for (int i = 0; i < 8; i++) {

   
      if ((store_double_word_data[i].double_word[0] != store_double_word_expected_data[i].double_word[0] )|| (store_double_word_data[i].double_word[1] != store_double_word_expected_data[i].double_word[1])){
         return 0;
      }

    }
    return 1;

// DEADBEEFF00DC0DE

} // store_double_word_test



int main() {

   int x = store_byte_test();
   if ( x == 1){
      printf("Store byte test has passed\n");
   }
   else if ( x == 0){
      printf("Store byte test has not passed\n");
   }

  printf("\n");
   x = store_half_word_test();
    if ( x == 1){
      printf("Store half word test has passed\n");
   }
   else if ( x == 0){
      printf("Store half word test has not passed\n");
   }
printf("\n");
   x = store_word_test();
    if ( x == 1){
      printf("Store word test has passed\n");
   }
   else if ( x == 0){
      printf("Store word test has not passed\n");
   }
   printf("\n");
   x = store_double_word_test ( );
   if ( x == 1){
      printf("Store double word test has passed\n");
   }
   else if ( x == 0){
      printf("Store double word test has not passed\n");
   }

   return 0;
} // main
