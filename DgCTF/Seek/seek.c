
#include <stdio.h>
#include <stdlib.h>

int oops(){
   printf("oops this wasn't the char I was looking for\n");
   exit(1);
   return 0;
}
int main () {
   FILE *fp;
   FILE *nfp;
   char c;
   fp = fopen("flag.txt","r");
   nfp = fopen("mod.txt", "w");
   if (nfp==NULL)
   {
      printf("error opening file\n");
      exit(1);
   } 
fseek(nfp,540,SEEK_SET);fputc( 32,nfp);
fseek(nfp,711,SEEK_SET);fputc( 32,nfp);
fseek(nfp,73,SEEK_SET);fputc( 95,nfp);
fseek(nfp,68,SEEK_SET);fputc( 95,nfp);
fseek(nfp,155,SEEK_SET);fputc( 95,nfp);
fseek(nfp,673,SEEK_SET);fputc( 32,nfp);
fseek(nfp,35,SEEK_SET);fputc( 95,nfp);
fseek(nfp,309,SEEK_SET);fputc( 124,nfp);
fseek(nfp,148,SEEK_SET);fputc( 32,nfp);
fseek(nfp,280,SEEK_SET);fputc( 124,nfp);
fseek(nfp,474,SEEK_SET);fputc( 96,nfp);
fseek(nfp,240,SEEK_SET);fputc( 32,nfp);
fseek(nfp,178,SEEK_SET);fputc( 32,nfp);
fseek(nfp,340,SEEK_SET);fputc( 32,nfp);
fseek(nfp,695,SEEK_SET);fputc( 32,nfp);
fseek(nfp,526,SEEK_SET);fputc( 95,nfp);
fseek(nfp,286,SEEK_SET);fputc( 32,nfp);
fseek(nfp,313,SEEK_SET);fputc( 32,nfp);
fseek(nfp,259,SEEK_SET);fputc( 95,nfp);
fseek(nfp,543,SEEK_SET);fputc( 95,nfp);
fseek(nfp,256,SEEK_SET);fputc( 32,nfp);
fseek(nfp,584,SEEK_SET);fputc( 32,nfp);
fseek(nfp,97,SEEK_SET);fputc( 95,nfp);
fseek(nfp,55,SEEK_SET);fputc( 32,nfp);
fseek(nfp,0,SEEK_SET);fputc( 32,nfp);
fseek(nfp,22,SEEK_SET);fputc( 95,nfp);
fseek(nfp,615,SEEK_SET);fputc( 47,nfp);
fseek(nfp,300,SEEK_SET);fputc( 45,nfp);
fseek(nfp,30,SEEK_SET);fputc( 46,nfp);
fseek(nfp,634,SEEK_SET);fputc( 32,nfp);
fseek(nfp,676,SEEK_SET);fputc( 32,nfp);
fseek(nfp,298,SEEK_SET);fputc( 46,nfp);
fseek(nfp,428,SEEK_SET);fputc( 96,nfp);
fseek(nfp,250,SEEK_SET);fputc( 32,nfp);
fseek(nfp,93,SEEK_SET);fputc( 95,nfp);
fseek(nfp,505,SEEK_SET);fputc( 32,nfp);
fseek(nfp,556,SEEK_SET);fputc( 32,nfp);
fseek(nfp,586,SEEK_SET);fputc( 32,nfp);
fseek(nfp,697,SEEK_SET);fputc( 32,nfp);
fseek(nfp,496,SEEK_SET);fputc( 124,nfp);
fseek(nfp,222,SEEK_SET);fputc( 45,nfp);
fseek(nfp,720,SEEK_SET);fputc( 32,nfp);
fseek(nfp,324,SEEK_SET);fputc( 124,nfp);
fseek(nfp,501,SEEK_SET);fputc( 124,nfp);
fseek(nfp,361,SEEK_SET);fputc( 32,nfp);
fseek(nfp,44,SEEK_SET);fputc( 95,nfp);
fseek(nfp,442,SEEK_SET);fputc( 32,nfp);
fseek(nfp,683,SEEK_SET);fputc( 32,nfp);
fseek(nfp,306,SEEK_SET);fputc( 124,nfp);
fseek(nfp,567,SEEK_SET);fputc( 95,nfp);
fseek(nfp,118,SEEK_SET);fputc( 32,nfp);
fseek(nfp,610,SEEK_SET);fputc( 95,nfp);
fseek(nfp,197,SEEK_SET);fputc( 32,nfp);
fseek(nfp,702,SEEK_SET);fputc( 32,nfp);
fseek(nfp,326,SEEK_SET);fputc( 32,nfp);
fseek(nfp,61,SEEK_SET);fputc( 95,nfp);
fseek(nfp,374,SEEK_SET);fputc( 32,nfp);
fseek(nfp,355,SEEK_SET);fputc( 47,nfp);
fseek(nfp,493,SEEK_SET);fputc( 124,nfp);
fseek(nfp,279,SEEK_SET);fputc( 32,nfp);
fseek(nfp,4,SEEK_SET);fputc( 95,nfp);
fseek(nfp,80,SEEK_SET);fputc( 32,nfp);
fseek(nfp,116,SEEK_SET);fputc( 32,nfp);
fseek(nfp,317,SEEK_SET);fputc( 32,nfp);
fseek(nfp,668,SEEK_SET);fputc( 95,nfp);
fseek(nfp,618,SEEK_SET);fputc( 124,nfp);
fseek(nfp,435,SEEK_SET);fputc( 32,nfp);
fseek(nfp,666,SEEK_SET);fputc( 92,nfp);
fseek(nfp,268,SEEK_SET);fputc( 32,nfp);
fseek(nfp,458,SEEK_SET);fputc( 32,nfp);
fseek(nfp,20,SEEK_SET);fputc( 95,nfp);
fseek(nfp,248,SEEK_SET);fputc( 32,nfp);
fseek(nfp,111,SEEK_SET);fputc( 32,nfp);
fseek(nfp,120,SEEK_SET);fputc( 32,nfp);
fseek(nfp,574,SEEK_SET);fputc( 32,nfp);
fseek(nfp,651,SEEK_SET);fputc( 32,nfp);
fseek(nfp,228,SEEK_SET);fputc( 45,nfp);
fseek(nfp,486,SEEK_SET);fputc( 45,nfp);
fseek(nfp,23,SEEK_SET);fputc( 95,nfp);
fseek(nfp,316,SEEK_SET);fputc( 32,nfp);
fseek(nfp,341,SEEK_SET);fputc( 32,nfp);
fseek(nfp,92,SEEK_SET);fputc( 95,nfp);
fseek(nfp,98,SEEK_SET);fputc( 95,nfp);
fseek(nfp,130,SEEK_SET);fputc( 32,nfp);
fseek(nfp,183,SEEK_SET);fputc( 32,nfp);
fseek(nfp,281,SEEK_SET);fputc( 32,nfp);
fseek(nfp,38,SEEK_SET);fputc( 95,nfp);
fseek(nfp,29,SEEK_SET);fputc( 95,nfp);
fseek(nfp,335,SEEK_SET);fputc( 32,nfp);
fseek(nfp,454,SEEK_SET);fputc( 32,nfp);
fseek(nfp,715,SEEK_SET);fputc( 32,nfp);
fseek(nfp,19,SEEK_SET);fputc( 95,nfp);
fseek(nfp,636,SEEK_SET);fputc( 32,nfp);
fseek(nfp,357,SEEK_SET);fputc( 32,nfp);
fseek(nfp,705,SEEK_SET);fputc( 32,nfp);
fseek(nfp,504,SEEK_SET);fputc( 32,nfp);
fseek(nfp,275,SEEK_SET);fputc( 32,nfp);
fseek(nfp,147,SEEK_SET);fputc( 32,nfp);
fseek(nfp,173,SEEK_SET);fputc( 124,nfp);
fseek(nfp,299,SEEK_SET);fputc( 45,nfp);
fseek(nfp,239,SEEK_SET);fputc( 124,nfp);
fseek(nfp,104,SEEK_SET);fputc( 124,nfp);
fseek(nfp,591,SEEK_SET);fputc( 95,nfp);
fseek(nfp,641,SEEK_SET);fputc( 32,nfp);
fseek(nfp,708,SEEK_SET);fputc( 32,nfp);
fseek(nfp,421,SEEK_SET);fputc( 45,nfp);
fseek(nfp,477,SEEK_SET);fputc( 39,nfp);
fseek(nfp,49,SEEK_SET);fputc( 95,nfp);
fseek(nfp,548,SEEK_SET);fputc( 32,nfp);
fseek(nfp,114,SEEK_SET);fputc( 47,nfp);
fseek(nfp,82,SEEK_SET);fputc( 32,nfp);
fseek(nfp,254,SEEK_SET);fputc( 124,nfp);
fseek(nfp,617,SEEK_SET);fputc( 32,nfp);
fseek(nfp,345,SEEK_SET);fputc( 32,nfp);
fseek(nfp,251,SEEK_SET);fputc( 32,nfp);
fseek(nfp,399,SEEK_SET);fputc( 124,nfp);
fseek(nfp,163,SEEK_SET);fputc( 95,nfp);
fseek(nfp,598,SEEK_SET);fputc( 95,nfp);
fseek(nfp,377,SEEK_SET);fputc( 32,nfp);
fseek(nfp,6,SEEK_SET);fputc( 95,nfp);
fseek(nfp,203,SEEK_SET);fputc( 32,nfp);
fseek(nfp,213,SEEK_SET);fputc( 45,nfp);
fseek(nfp,270,SEEK_SET);fputc( 32,nfp);
fseek(nfp,664,SEEK_SET);fputc( 32,nfp);
fseek(nfp,438,SEEK_SET);fputc( 124,nfp);
fseek(nfp,45,SEEK_SET);fputc( 95,nfp);
fseek(nfp,329,SEEK_SET);fputc( 32,nfp);
fseek(nfp,655,SEEK_SET);fputc( 32,nfp);
fseek(nfp,667,SEEK_SET);fputc( 95,nfp);
fseek(nfp,191,SEEK_SET);fputc( 124,nfp);
fseek(nfp,387,SEEK_SET);fputc( 124,nfp);
fseek(nfp,242,SEEK_SET);fputc( 124,nfp);
fseek(nfp,436,SEEK_SET);fputc( 32,nfp);
fseek(nfp,707,SEEK_SET);fputc( 32,nfp);
fseek(nfp,423,SEEK_SET);fputc( 32,nfp);
fseek(nfp,409,SEEK_SET);fputc( 32,nfp);
fseek(nfp,237,SEEK_SET);fputc( 45,nfp);
fseek(nfp,31,SEEK_SET);fputc( 32,nfp);
fseek(nfp,205,SEEK_SET);fputc( 32,nfp);
fseek(nfp,592,SEEK_SET);fputc( 95,nfp);
fseek(nfp,238,SEEK_SET);fputc( 96,nfp);
fseek(nfp,21,SEEK_SET);fputc( 95,nfp);
fseek(nfp,706,SEEK_SET);fputc( 32,nfp);
fseek(nfp,27,SEEK_SET);fputc( 95,nfp);
fseek(nfp,188,SEEK_SET);fputc( 32,nfp);
fseek(nfp,645,SEEK_SET);fputc( 32,nfp);
fseek(nfp,450,SEEK_SET);fputc( 124,nfp);
fseek(nfp,596,SEEK_SET);fputc( 32,nfp);
fseek(nfp,716,SEEK_SET);fputc( 32,nfp);
fseek(nfp,402,SEEK_SET);fputc( 124,nfp);
fseek(nfp,186,SEEK_SET);fputc( 124,nfp);
fseek(nfp,430,SEEK_SET);fputc( 45,nfp);
fseek(nfp,429,SEEK_SET);fputc( 45,nfp);
fseek(nfp,158,SEEK_SET);fputc( 124,nfp);
fseek(nfp,100,SEEK_SET);fputc( 32,nfp);
fseek(nfp,24,SEEK_SET);fputc( 95,nfp);
fseek(nfp,274,SEEK_SET);fputc( 124,nfp);
fseek(nfp,572,SEEK_SET);fputc( 32,nfp);
fseek(nfp,652,SEEK_SET);fputc( 32,nfp);
fseek(nfp,209,SEEK_SET);fputc( 32,nfp);
fseek(nfp,475,SEEK_SET);fputc( 45,nfp);
fseek(nfp,199,SEEK_SET);fputc( 92,nfp);
fseek(nfp,57,SEEK_SET);fputc( 95,nfp);
fseek(nfp,633,SEEK_SET);fputc( 32,nfp);
fseek(nfp,315,SEEK_SET);fputc( 124,nfp);
fseek(nfp,512,SEEK_SET);fputc( 124,nfp);
fseek(nfp,499,SEEK_SET);fputc( 32,nfp);
fseek(nfp,622,SEEK_SET);fputc( 32,nfp);
fseek(nfp,558,SEEK_SET);fputc( 32,nfp);
fseek(nfp,232,SEEK_SET);fputc( 32,nfp);
fseek(nfp,177,SEEK_SET);fputc( 32,nfp);
fseek(nfp,718,SEEK_SET);fputc( 32,nfp);
fseek(nfp,396,SEEK_SET);fputc( 32,nfp);
fseek(nfp,576,SEEK_SET);fputc( 92,nfp);
fseek(nfp,681,SEEK_SET);fputc( 32,nfp);
fseek(nfp,36,SEEK_SET);fputc( 95,nfp);
fseek(nfp,422,SEEK_SET);fputc( 39,nfp);
fseek(nfp,272,SEEK_SET);fputc( 124,nfp);
fseek(nfp,654,SEEK_SET);fputc( 32,nfp);
fseek(nfp,319,SEEK_SET);fputc( 32,nfp);
fseek(nfp,137,SEEK_SET);fputc( 32,nfp);
fseek(nfp,172,SEEK_SET);fputc( 32,nfp);
fseek(nfp,65,SEEK_SET);fputc( 32,nfp);
fseek(nfp,523,SEEK_SET);fputc( 95,nfp);
fseek(nfp,235,SEEK_SET);fputc( 45,nfp);
fseek(nfp,95,SEEK_SET);fputc( 32,nfp);
fseek(nfp,142,SEEK_SET);fputc( 95,nfp);
fseek(nfp,252,SEEK_SET);fputc( 124,nfp);
fseek(nfp,611,SEEK_SET);fputc( 95,nfp);
fseek(nfp,124,SEEK_SET);fputc( 32,nfp);
fseek(nfp,206,SEEK_SET);fputc( 32,nfp);
fseek(nfp,462,SEEK_SET);fputc( 124,nfp);
fseek(nfp,492,SEEK_SET);fputc( 32,nfp);
fseek(nfp,88,SEEK_SET);fputc( 95,nfp);
fseek(nfp,143,SEEK_SET);fputc( 124,nfp);
fseek(nfp,709,SEEK_SET);fputc( 32,nfp);
fseek(nfp,382,SEEK_SET);fputc( 32,nfp);
fseek(nfp,703,SEEK_SET);fputc( 32,nfp);
fseek(nfp,367,SEEK_SET);fputc( 124,nfp);
fseek(nfp,542,SEEK_SET);fputc( 124,nfp);
fseek(nfp,66,SEEK_SET);fputc( 32,nfp);
fseek(nfp,296,SEEK_SET);fputc( 32,nfp);
fseek(nfp,321,SEEK_SET);fputc( 124,nfp);
fseek(nfp,485,SEEK_SET);fputc( 96,nfp);
fseek(nfp,262,SEEK_SET);fputc( 32,nfp);
fseek(nfp,54,SEEK_SET);fputc( 32,nfp);
fseek(nfp,102,SEEK_SET);fputc( 32,nfp);
fseek(nfp,521,SEEK_SET);fputc( 95,nfp);
fseek(nfp,208,SEEK_SET);fputc( 124,nfp);
fseek(nfp,115,SEEK_SET);fputc( 32,nfp);
fseek(nfp,338,SEEK_SET);fputc( 32,nfp);
fseek(nfp,194,SEEK_SET);fputc( 32,nfp);
fseek(nfp,215,SEEK_SET);fputc( 32,nfp);
fseek(nfp,534,SEEK_SET);fputc( 95,nfp);
fseek(nfp,189,SEEK_SET);fputc( 124,nfp);
fseek(nfp,378,SEEK_SET);fputc( 124,nfp);
fseek(nfp,151,SEEK_SET);fputc( 32,nfp);
fseek(nfp,204,SEEK_SET);fputc( 92,nfp);
fseek(nfp,339,SEEK_SET);fputc( 32,nfp);
fseek(nfp,406,SEEK_SET);fputc( 32,nfp);
fseek(nfp,719,SEEK_SET);fputc( 32,nfp);
fseek(nfp,364,SEEK_SET);fputc( 124,nfp);
fseek(nfp,202,SEEK_SET);fputc( 32,nfp);
fseek(nfp,465,SEEK_SET);fputc( 124,nfp);
fseek(nfp,388,SEEK_SET);fputc( 32,nfp);
fseek(nfp,491,SEEK_SET);fputc( 124,nfp);
fseek(nfp,457,SEEK_SET);fputc( 32,nfp);
fseek(nfp,69,SEEK_SET);fputc( 32,nfp);
fseek(nfp,710,SEEK_SET);fputc( 32,nfp);
fseek(nfp,60,SEEK_SET);fputc( 95,nfp);
fseek(nfp,589,SEEK_SET);fputc( 95,nfp);
fseek(nfp,86,SEEK_SET);fputc( 32,nfp);
fseek(nfp,99,SEEK_SET);fputc( 95,nfp);
fseek(nfp,348,SEEK_SET);fputc( 95,nfp);
fseek(nfp,334,SEEK_SET);fputc( 124,nfp);
fseek(nfp,632,SEEK_SET);fputc( 32,nfp);
fseek(nfp,444,SEEK_SET);fputc( 32,nfp);
fseek(nfp,466,SEEK_SET);fputc( 32,nfp);
fseek(nfp,639,SEEK_SET);fputc( 32,nfp);
fseek(nfp,159,SEEK_SET);fputc( 32,nfp);
fseek(nfp,497,SEEK_SET);fputc( 92,nfp);
fseek(nfp,161,SEEK_SET);fputc( 32,nfp);
fseek(nfp,635,SEEK_SET);fputc( 32,nfp);
fseek(nfp,365,SEEK_SET);fputc( 32,nfp);
fseek(nfp,325,SEEK_SET);fputc( 32,nfp);
fseek(nfp,323,SEEK_SET);fputc( 32,nfp);
fseek(nfp,295,SEEK_SET);fputc( 124,nfp);
fseek(nfp,662,SEEK_SET);fputc( 32,nfp);
fseek(nfp,500,SEEK_SET);fputc( 32,nfp);
fseek(nfp,691,SEEK_SET);fputc( 32,nfp);
fseek(nfp,551,SEEK_SET);fputc( 124,nfp);
fseek(nfp,223,SEEK_SET);fputc( 45,nfp);
fseek(nfp,284,SEEK_SET);fputc( 32,nfp);
fseek(nfp,176,SEEK_SET);fputc( 124,nfp);
fseek(nfp,198,SEEK_SET);fputc( 32,nfp);
fseek(nfp,575,SEEK_SET);fputc( 32,nfp);
fseek(nfp,224,SEEK_SET);fputc( 45,nfp);
fseek(nfp,156,SEEK_SET);fputc( 95,nfp);
fseek(nfp,84,SEEK_SET);fputc( 95,nfp);
fseek(nfp,563,SEEK_SET);fputc( 32,nfp);
fseek(nfp,363,SEEK_SET);fputc( 95,nfp);
fseek(nfp,637,SEEK_SET);fputc( 32,nfp);
fseek(nfp,278,SEEK_SET);fputc( 32,nfp);
fseek(nfp,550,SEEK_SET);fputc( 32,nfp);
fseek(nfp,650,SEEK_SET);fputc( 32,nfp);
fseek(nfp,557,SEEK_SET);fputc( 32,nfp);
fseek(nfp,167,SEEK_SET);fputc( 92,nfp);
fseek(nfp,58,SEEK_SET);fputc( 95,nfp);
fseek(nfp,89,SEEK_SET);fputc( 95,nfp);
fseek(nfp,308,SEEK_SET);fputc( 32,nfp);
fseek(nfp,2,SEEK_SET);fputc( 95,nfp);
fseek(nfp,426,SEEK_SET);fputc( 32,nfp);
fseek(nfp,469,SEEK_SET);fputc( 32,nfp);
fseek(nfp,568,SEEK_SET);fputc( 95,nfp);
fseek(nfp,601,SEEK_SET);fputc( 32,nfp);
fseek(nfp,190,SEEK_SET);fputc( 32,nfp);
fseek(nfp,322,SEEK_SET);fputc( 32,nfp);
fseek(nfp,174,SEEK_SET);fputc( 32,nfp);
fseek(nfp,372,SEEK_SET);fputc( 32,nfp);
fseek(nfp,602,SEEK_SET);fputc( 92,nfp);
fseek(nfp,303,SEEK_SET);fputc( 32,nfp);
fseek(nfp,690,SEEK_SET);fputc( 32,nfp);
fseek(nfp,276,SEEK_SET);fputc( 32,nfp);
fseek(nfp,241,SEEK_SET);fputc( 32,nfp);
fseek(nfp,404,SEEK_SET);fputc( 32,nfp);
fseek(nfp,569,SEEK_SET);fputc( 124,nfp);
fseek(nfp,234,SEEK_SET);fputc( 45,nfp);
fseek(nfp,507,SEEK_SET);fputc( 45,nfp);
fseek(nfp,411,SEEK_SET);fputc( 92,nfp);
fseek(nfp,612,SEEK_SET);fputc( 95,nfp);
fseek(nfp,253,SEEK_SET);fputc( 32,nfp);
fseek(nfp,726,SEEK_SET);fputc( 32,nfp);
fseek(nfp,381,SEEK_SET);fputc( 124,nfp);
fseek(nfp,536,SEEK_SET);fputc( 95,nfp);
fseek(nfp,227,SEEK_SET);fputc( 45,nfp);
fseek(nfp,119,SEEK_SET);fputc( 32,nfp);
fseek(nfp,403,SEEK_SET);fputc( 32,nfp);
fseek(nfp,50,SEEK_SET);fputc( 95,nfp);
fseek(nfp,328,SEEK_SET);fputc( 32,nfp);
fseek(nfp,717,SEEK_SET);fputc( 32,nfp);
fseek(nfp,56,SEEK_SET);fputc( 32,nfp);
fseek(nfp,34,SEEK_SET);fputc( 95,nfp);
fseek(nfp,107,SEEK_SET);fputc( 32,nfp);
fseek(nfp,607,SEEK_SET);fputc( 124,nfp);
fseek(nfp,184,SEEK_SET);fputc( 92,nfp);
fseek(nfp,291,SEEK_SET);fputc( 32,nfp);
fseek(nfp,410,SEEK_SET);fputc( 32,nfp);
fseek(nfp,580,SEEK_SET);fputc( 95,nfp);
fseek(nfp,383,SEEK_SET);fputc( 32,nfp);
fseek(nfp,153,SEEK_SET);fputc( 32,nfp);
fseek(nfp,578,SEEK_SET);fputc( 95,nfp);
fseek(nfp,541,SEEK_SET);fputc( 32,nfp);
fseek(nfp,283,SEEK_SET);fputc( 124,nfp);
fseek(nfp,247,SEEK_SET);fputc( 32,nfp);
fseek(nfp,346,SEEK_SET);fputc( 32,nfp);
fseek(nfp,533,SEEK_SET);fputc( 95,nfp);
fseek(nfp,146,SEEK_SET);fputc( 47,nfp);
fseek(nfp,386,SEEK_SET);fputc( 32,nfp);
fseek(nfp,201,SEEK_SET);fputc( 92,nfp);
fseek(nfp,301,SEEK_SET);fputc( 46,nfp);
fseek(nfp,135,SEEK_SET);fputc( 124,nfp);
fseek(nfp,678,SEEK_SET);fputc( 32,nfp);
fseek(nfp,293,SEEK_SET);fputc( 124,nfp);
fseek(nfp,5,SEEK_SET);fputc( 95,nfp);
fseek(nfp,588,SEEK_SET);fputc( 95,nfp);
fseek(nfp,687,SEEK_SET);fputc( 32,nfp);
fseek(nfp,606,SEEK_SET);fputc( 32,nfp);
fseek(nfp,640,SEEK_SET);fputc( 32,nfp);
fseek(nfp,577,SEEK_SET);fputc( 95,nfp);
fseek(nfp,16,SEEK_SET);fputc( 95,nfp);
fseek(nfp,126,SEEK_SET);fputc( 32,nfp);
fseek(nfp,285,SEEK_SET);fputc( 124,nfp);
fseek(nfp,418,SEEK_SET);fputc( 32,nfp);
fseek(nfp,594,SEEK_SET);fputc( 47,nfp);
fseek(nfp,77,SEEK_SET);fputc( 46,nfp);
fseek(nfp,347,SEEK_SET);fputc( 95,nfp);
fseek(nfp,11,SEEK_SET);fputc( 95,nfp);
fseek(nfp,185,SEEK_SET);fputc( 32,nfp);
fseek(nfp,370,SEEK_SET);fputc( 124,nfp);
fseek(nfp,249,SEEK_SET);fputc( 124,nfp);
fseek(nfp,331,SEEK_SET);fputc( 32,nfp);
fseek(nfp,83,SEEK_SET);fputc( 95,nfp);
fseek(nfp,675,SEEK_SET);fputc( 32,nfp);
fseek(nfp,9,SEEK_SET);fputc( 32,nfp);
fseek(nfp,445,SEEK_SET);fputc( 32,nfp);
fseek(nfp,10,SEEK_SET);fputc( 32,nfp);
fseek(nfp,171,SEEK_SET);fputc( 32,nfp);
fseek(nfp,76,SEEK_SET);fputc( 32,nfp);
fseek(nfp,539,SEEK_SET);fputc( 32,nfp);
fseek(nfp,573,SEEK_SET);fputc( 32,nfp);
fseek(nfp,448,SEEK_SET);fputc( 32,nfp);
fseek(nfp,495,SEEK_SET);fputc( 32,nfp);
fseek(nfp,661,SEEK_SET);fputc( 32,nfp);
fseek(nfp,419,SEEK_SET);fputc( 39,nfp);
fseek(nfp,724,SEEK_SET);fputc( 47,nfp);
fseek(nfp,51,SEEK_SET);fputc( 95,nfp);
fseek(nfp,145,SEEK_SET);fputc( 32,nfp);
fseek(nfp,47,SEEK_SET);fputc( 95,nfp);
fseek(nfp,722,SEEK_SET);fputc( 95,nfp);
fseek(nfp,220,SEEK_SET);fputc( 44,nfp);
fseek(nfp,289,SEEK_SET);fputc( 92,nfp);
fseek(nfp,79,SEEK_SET);fputc( 95,nfp);
fseek(nfp,397,SEEK_SET);fputc( 124,nfp);
fseek(nfp,128,SEEK_SET);fputc( 32,nfp);
fseek(nfp,671,SEEK_SET);fputc( 32,nfp);
fseek(nfp,53,SEEK_SET);fputc( 95,nfp);
fseek(nfp,110,SEEK_SET);fputc( 32,nfp);
fseek(nfp,616,SEEK_SET);fputc( 32,nfp);
fseek(nfp,434,SEEK_SET);fputc( 32,nfp);
fseek(nfp,665,SEEK_SET);fputc( 32,nfp);
fseek(nfp,166,SEEK_SET);fputc( 32,nfp);
fseek(nfp,131,SEEK_SET);fputc( 32,nfp);
fseek(nfp,516,SEEK_SET);fputc( 32,nfp);
fseek(nfp,379,SEEK_SET);fputc( 32,nfp);
fseek(nfp,369,SEEK_SET);fputc( 32,nfp);
fseek(nfp,168,SEEK_SET);fputc( 32,nfp);
fseek(nfp,271,SEEK_SET);fputc( 32,nfp);
fseek(nfp,629,SEEK_SET);fputc( 32,nfp);
fseek(nfp,40,SEEK_SET);fputc( 32,nfp);
fseek(nfp,621,SEEK_SET);fputc( 124,nfp);
fseek(nfp,32,SEEK_SET);fputc( 95,nfp);
fseek(nfp,427,SEEK_SET);fputc( 32,nfp);
fseek(nfp,677,SEEK_SET);fputc( 32,nfp);
fseek(nfp,517,SEEK_SET);fputc( 32,nfp);
fseek(nfp,600,SEEK_SET);fputc( 124,nfp);
fseek(nfp,547,SEEK_SET);fputc( 32,nfp);
fseek(nfp,105,SEEK_SET);fputc( 32,nfp);
fseek(nfp,653,SEEK_SET);fputc( 32,nfp);
fseek(nfp,265,SEEK_SET);fputc( 32,nfp);
fseek(nfp,553,SEEK_SET);fputc( 95,nfp);
fseek(nfp,663,SEEK_SET);fputc( 32,nfp);
fseek(nfp,565,SEEK_SET);fputc( 32,nfp);
fseek(nfp,244,SEEK_SET);fputc( 95,nfp);
fseek(nfp,255,SEEK_SET);fputc( 32,nfp);
fseek(nfp,304,SEEK_SET);fputc( 124,nfp);
fseek(nfp,524,SEEK_SET);fputc( 95,nfp);
fseek(nfp,609,SEEK_SET);fputc( 95,nfp);
fseek(nfp,590,SEEK_SET);fputc( 95,nfp);
fseek(nfp,169,SEEK_SET);fputc( 32,nfp);
fseek(nfp,527,SEEK_SET);fputc( 95,nfp);
fseek(nfp,389,SEEK_SET);fputc( 124,nfp);
fseek(nfp,546,SEEK_SET);fputc( 32,nfp);
fseek(nfp,424,SEEK_SET);fputc( 32,nfp);
fseek(nfp,136,SEEK_SET);fputc( 32,nfp);
fseek(nfp,425,SEEK_SET);fputc( 124,nfp);
fseek(nfp,549,SEEK_SET);fputc( 32,nfp);
fseek(nfp,307,SEEK_SET);fputc( 32,nfp);
fseek(nfp,226,SEEK_SET);fputc( 96,nfp);
fseek(nfp,13,SEEK_SET);fputc( 95,nfp);
fseek(nfp,693,SEEK_SET);fputc( 32,nfp);
fseek(nfp,349,SEEK_SET);fputc( 124,nfp);
fseek(nfp,1,SEEK_SET);fputc( 95,nfp);
fseek(nfp,525,SEEK_SET);fputc( 95,nfp);
fseek(nfp,342,SEEK_SET);fputc( 32,nfp);
fseek(nfp,522,SEEK_SET);fputc( 95,nfp);
fseek(nfp,292,SEEK_SET);fputc( 32,nfp);
fseek(nfp,71,SEEK_SET);fputc( 32,nfp);
fseek(nfp,694,SEEK_SET);fputc( 32,nfp);
fseek(nfp,559,SEEK_SET);fputc( 32,nfp);
fseek(nfp,613,SEEK_SET);fputc( 95,nfp);
fseek(nfp,337,SEEK_SET);fputc( 124,nfp);
fseek(nfp,685,SEEK_SET);fputc( 32,nfp);
fseek(nfp,552,SEEK_SET);fputc( 95,nfp);
fseek(nfp,480,SEEK_SET);fputc( 124,nfp);
fseek(nfp,391,SEEK_SET);fputc( 32,nfp);
fseek(nfp,519,SEEK_SET);fputc( 10,nfp);
fseek(nfp,417,SEEK_SET);fputc( 32,nfp);
fseek(nfp,356,SEEK_SET);fputc( 32,nfp);
fseek(nfp,561,SEEK_SET);fputc( 124,nfp);
fseek(nfp,318,SEEK_SET);fputc( 124,nfp);
fseek(nfp,311,SEEK_SET);fputc( 10,nfp);
fseek(nfp,207,SEEK_SET);fputc( 10,nfp);
fseek(nfp,33,SEEK_SET);fputc( 95,nfp);
fseek(nfp,684,SEEK_SET);fputc( 32,nfp);
fseek(nfp,187,SEEK_SET);fputc( 32,nfp);
fseek(nfp,464,SEEK_SET);fputc( 32,nfp);
fseek(nfp,447,SEEK_SET);fputc( 124,nfp);
fseek(nfp,670,SEEK_SET);fputc( 32,nfp);
fseek(nfp,498,SEEK_SET);fputc( 32,nfp);
fseek(nfp,333,SEEK_SET);fputc( 32,nfp);
fseek(nfp,443,SEEK_SET);fputc( 32,nfp);
fseek(nfp,302,SEEK_SET);fputc( 32,nfp);
fseek(nfp,170,SEEK_SET);fputc( 124,nfp);
fseek(nfp,453,SEEK_SET);fputc( 32,nfp);
fseek(nfp,352,SEEK_SET);fputc( 47,nfp);
fseek(nfp,605,SEEK_SET);fputc( 124,nfp);
fseek(nfp,508,SEEK_SET);fputc( 45,nfp);
fseek(nfp,28,SEEK_SET);fputc( 95,nfp);
fseek(nfp,25,SEEK_SET);fputc( 95,nfp);
fseek(nfp,619,SEEK_SET);fputc( 32,nfp);
fseek(nfp,15,SEEK_SET);fputc( 95,nfp);
fseek(nfp,26,SEEK_SET);fputc( 95,nfp);
fseek(nfp,264,SEEK_SET);fputc( 32,nfp);
fseek(nfp,359,SEEK_SET);fputc( 32,nfp);
fseek(nfp,144,SEEK_SET);fputc( 32,nfp);
fseek(nfp,479,SEEK_SET);fputc( 32,nfp);
fseek(nfp,219,SEEK_SET);fputc( 32,nfp);
fseek(nfp,471,SEEK_SET);fputc( 124,nfp);
fseek(nfp,74,SEEK_SET);fputc( 95,nfp);
fseek(nfp,134,SEEK_SET);fputc( 124,nfp);
fseek(nfp,413,SEEK_SET);fputc( 32,nfp);
fseek(nfp,165,SEEK_SET);fputc( 32,nfp);
fseek(nfp,721,SEEK_SET);fputc( 47,nfp);
fseek(nfp,400,SEEK_SET);fputc( 32,nfp);
fseek(nfp,96,SEEK_SET);fputc( 32,nfp);
fseek(nfp,258,SEEK_SET);fputc( 95,nfp);
fseek(nfp,392,SEEK_SET);fputc( 46,nfp);
fseek(nfp,327,SEEK_SET);fputc( 32,nfp);
fseek(nfp,90,SEEK_SET);fputc( 95,nfp);
fseek(nfp,656,SEEK_SET);fputc( 32,nfp);
fseek(nfp,530,SEEK_SET);fputc( 92,nfp);
fseek(nfp,393,SEEK_SET);fputc( 32,nfp);
fseek(nfp,109,SEEK_SET);fputc( 32,nfp);
fseek(nfp,488,SEEK_SET);fputc( 39,nfp);
fseek(nfp,581,SEEK_SET);fputc( 95,nfp);
fseek(nfp,63,SEEK_SET);fputc( 32,nfp);
fseek(nfp,414,SEEK_SET);fputc( 92,nfp);
fseek(nfp,700,SEEK_SET);fputc( 32,nfp);
fseek(nfp,597,SEEK_SET);fputc( 124,nfp);
fseek(nfp,446,SEEK_SET);fputc( 32,nfp);
fseek(nfp,149,SEEK_SET);fputc( 47,nfp);
fseek(nfp,312,SEEK_SET);fputc( 124,nfp);
fseek(nfp,62,SEEK_SET);fputc( 95,nfp);
fseek(nfp,288,SEEK_SET);fputc( 32,nfp);
fseek(nfp,456,SEEK_SET);fputc( 92,nfp);
fseek(nfp,603,SEEK_SET);fputc( 95,nfp);
fseek(nfp,243,SEEK_SET);fputc( 95,nfp);
fseek(nfp,463,SEEK_SET);fputc( 32,nfp);
fseek(nfp,192,SEEK_SET);fputc( 32,nfp);
fseek(nfp,17,SEEK_SET);fputc( 32,nfp);
fseek(nfp,132,SEEK_SET);fputc( 32,nfp);
fseek(nfp,461,SEEK_SET);fputc( 32,nfp);
fseek(nfp,625,SEEK_SET);fputc( 32,nfp);
fseek(nfp,193,SEEK_SET);fputc( 32,nfp);
fseek(nfp,412,SEEK_SET);fputc( 32,nfp);
fseek(nfp,42,SEEK_SET);fputc( 32,nfp);
fseek(nfp,196,SEEK_SET);fputc( 32,nfp);
fseek(nfp,182,SEEK_SET);fputc( 32,nfp);
fseek(nfp,478,SEEK_SET);fputc( 32,nfp);
fseek(nfp,394,SEEK_SET);fputc( 96,nfp);
fseek(nfp,579,SEEK_SET);fputc( 95,nfp);
fseek(nfp,688,SEEK_SET);fputc( 32,nfp);
fseek(nfp,245,SEEK_SET);fputc( 32,nfp);
fseek(nfp,8,SEEK_SET);fputc( 32,nfp);
fseek(nfp,657,SEEK_SET);fputc( 32,nfp);
fseek(nfp,535,SEEK_SET);fputc( 95,nfp);
fseek(nfp,509,SEEK_SET);fputc( 39,nfp);
fseek(nfp,344,SEEK_SET);fputc( 32,nfp);
fseek(nfp,330,SEEK_SET);fputc( 32,nfp);
fseek(nfp,595,SEEK_SET);fputc( 32,nfp);
fseek(nfp,81,SEEK_SET);fputc( 32,nfp);
fseek(nfp,649,SEEK_SET);fputc( 32,nfp);
fseek(nfp,267,SEEK_SET);fputc( 32,nfp);
fseek(nfp,140,SEEK_SET);fputc( 95,nfp);
fseek(nfp,127,SEEK_SET);fputc( 32,nfp);
fseek(nfp,395,SEEK_SET);fputc( 32,nfp);
fseek(nfp,481,SEEK_SET);fputc( 32,nfp);
fseek(nfp,336,SEEK_SET);fputc( 32,nfp);
fseek(nfp,490,SEEK_SET);fputc( 32,nfp);
fseek(nfp,218,SEEK_SET);fputc( 32,nfp);
fseek(nfp,175,SEEK_SET);fputc( 32,nfp);
fseek(nfp,200,SEEK_SET);fputc( 32,nfp);
fseek(nfp,362,SEEK_SET);fputc( 95,nfp);
fseek(nfp,554,SEEK_SET);fputc( 124,nfp);
fseek(nfp,157,SEEK_SET);fputc( 95,nfp);
fseek(nfp,91,SEEK_SET);fputc( 95,nfp);
fseek(nfp,723,SEEK_SET);fputc( 95,nfp);
fseek(nfp,266,SEEK_SET);fputc( 124,nfp);
fseek(nfp,513,SEEK_SET);fputc( 32,nfp);
fseek(nfp,231,SEEK_SET);fputc( 32,nfp);
fseek(nfp,160,SEEK_SET);fputc( 47,nfp);
fseek(nfp,452,SEEK_SET);fputc( 32,nfp);
fseek(nfp,376,SEEK_SET);fputc( 124,nfp);
fseek(nfp,467,SEEK_SET);fputc( 32,nfp);
fseek(nfp,195,SEEK_SET);fputc( 32,nfp);
fseek(nfp,604,SEEK_SET);fputc( 95,nfp);
fseek(nfp,660,SEEK_SET);fputc( 32,nfp);
fseek(nfp,416,SEEK_SET);fputc( 124,nfp);
fseek(nfp,108,SEEK_SET);fputc( 32,nfp);
fseek(nfp,672,SEEK_SET);fputc( 32,nfp);
fseek(nfp,179,SEEK_SET);fputc( 124,nfp);
fseek(nfp,405,SEEK_SET);fputc( 124,nfp);
fseek(nfp,52,SEEK_SET);fputc( 95,nfp);
fseek(nfp,18,SEEK_SET);fputc( 46,nfp);
fseek(nfp,59,SEEK_SET);fputc( 95,nfp);
fseek(nfp,642,SEEK_SET);fputc( 32,nfp);
fseek(nfp,123,SEEK_SET);fputc( 32,nfp);
fseek(nfp,638,SEEK_SET);fputc( 32,nfp);
fseek(nfp,14,SEEK_SET);fputc( 95,nfp);
fseek(nfp,564,SEEK_SET);fputc( 124,nfp);
fseek(nfp,624,SEEK_SET);fputc( 32,nfp);
fseek(nfp,511,SEEK_SET);fputc( 32,nfp);
fseek(nfp,545,SEEK_SET);fputc( 124,nfp);
fseek(nfp,566,SEEK_SET);fputc( 124,nfp);
fseek(nfp,314,SEEK_SET);fputc( 32,nfp);
fseek(nfp,704,SEEK_SET);fputc( 32,nfp);
fseek(nfp,528,SEEK_SET);fputc( 47,nfp);
fseek(nfp,472,SEEK_SET);fputc( 32,nfp);
fseek(nfp,408,SEEK_SET);fputc( 124,nfp);
fseek(nfp,520,SEEK_SET);fputc( 124,nfp);
fseek(nfp,305,SEEK_SET);fputc( 32,nfp);
fseek(nfp,225,SEEK_SET);fputc( 39,nfp);
fseek(nfp,139,SEEK_SET);fputc( 95,nfp);
fseek(nfp,294,SEEK_SET);fputc( 32,nfp);
fseek(nfp,75,SEEK_SET);fputc( 32,nfp);
fseek(nfp,138,SEEK_SET);fputc( 32,nfp);
fseek(nfp,385,SEEK_SET);fputc( 32,nfp);
fseek(nfp,441,SEEK_SET);fputc( 124,nfp);
fseek(nfp,216,SEEK_SET);fputc( 32,nfp);
fseek(nfp,503,SEEK_SET);fputc( 124,nfp);
fseek(nfp,150,SEEK_SET);fputc( 124,nfp);
fseek(nfp,538,SEEK_SET);fputc( 32,nfp);
fseek(nfp,646,SEEK_SET);fputc( 32,nfp);
fseek(nfp,674,SEEK_SET);fputc( 32,nfp);
fseek(nfp,570,SEEK_SET);fputc( 32,nfp);
fseek(nfp,164,SEEK_SET);fputc( 95,nfp);
fseek(nfp,628,SEEK_SET);fputc( 32,nfp);
fseek(nfp,41,SEEK_SET);fputc( 32,nfp);
fseek(nfp,431,SEEK_SET);fputc( 45,nfp);
fseek(nfp,117,SEEK_SET);fputc( 32,nfp);
fseek(nfp,70,SEEK_SET);fputc( 32,nfp);
fseek(nfp,489,SEEK_SET);fputc( 32,nfp);
fseek(nfp,593,SEEK_SET);fputc( 95,nfp);
fseek(nfp,451,SEEK_SET);fputc( 32,nfp);
fseek(nfp,263,SEEK_SET);fputc( 124,nfp);
fseek(nfp,510,SEEK_SET);fputc( 32,nfp);
fseek(nfp,350,SEEK_SET);fputc( 32,nfp);
fseek(nfp,290,SEEK_SET);fputc( 124,nfp);
fseek(nfp,72,SEEK_SET);fputc( 32,nfp);
fseek(nfp,583,SEEK_SET);fputc( 47,nfp);
fseek(nfp,43,SEEK_SET);fputc( 95,nfp);
fseek(nfp,713,SEEK_SET);fputc( 32,nfp);
fseek(nfp,643,SEEK_SET);fputc( 32,nfp);
fseek(nfp,415,SEEK_SET);fputc( 10,nfp);
fseek(nfp,532,SEEK_SET);fputc( 95,nfp);
fseek(nfp,696,SEEK_SET);fputc( 32,nfp);
fseek(nfp,679,SEEK_SET);fputc( 32,nfp);
fseek(nfp,514,SEEK_SET);fputc( 32,nfp);
fseek(nfp,620,SEEK_SET);fputc( 32,nfp);
fseek(nfp,384,SEEK_SET);fputc( 124,nfp);
fseek(nfp,229,SEEK_SET);fputc( 45,nfp);
fseek(nfp,181,SEEK_SET);fputc( 124,nfp);
fseek(nfp,515,SEEK_SET);fputc( 47,nfp);
fseek(nfp,214,SEEK_SET);fputc( 46,nfp);
fseek(nfp,277,SEEK_SET);fputc( 124,nfp);
fseek(nfp,585,SEEK_SET);fputc( 32,nfp);
fseek(nfp,354,SEEK_SET);fputc( 32,nfp);
fseek(nfp,614,SEEK_SET);fputc( 95,nfp);
fseek(nfp,407,SEEK_SET);fputc( 32,nfp);
fseek(nfp,39,SEEK_SET);fputc( 32,nfp);
fseek(nfp,113,SEEK_SET);fputc( 32,nfp);
fseek(nfp,257,SEEK_SET);fputc( 124,nfp);
fseek(nfp,358,SEEK_SET);fputc( 124,nfp);
fseek(nfp,502,SEEK_SET);fputc( 32,nfp);
fseek(nfp,12,SEEK_SET);fputc( 95,nfp);
fseek(nfp,698,SEEK_SET);fputc( 32,nfp);
fseek(nfp,282,SEEK_SET);fputc( 32,nfp);
fseek(nfp,351,SEEK_SET);fputc( 32,nfp);
fseek(nfp,94,SEEK_SET);fputc( 95,nfp);
fseek(nfp,529,SEEK_SET);fputc( 32,nfp);
fseek(nfp,320,SEEK_SET);fputc( 32,nfp);
fseek(nfp,162,SEEK_SET);fputc( 32,nfp);
fseek(nfp,714,SEEK_SET);fputc( 32,nfp);
fseek(nfp,112,SEEK_SET);fputc( 92,nfp);
fseek(nfp,101,SEEK_SET);fputc( 32,nfp);
fseek(nfp,468,SEEK_SET);fputc( 32,nfp);
fseek(nfp,297,SEEK_SET);fputc( 32,nfp);
fseek(nfp,269,SEEK_SET);fputc( 124,nfp);
fseek(nfp,701,SEEK_SET);fputc( 32,nfp);
fseek(nfp,152,SEEK_SET);fputc( 32,nfp);
fseek(nfp,494,SEEK_SET);fputc( 32,nfp);
fseek(nfp,273,SEEK_SET);fputc( 32,nfp);
fseek(nfp,398,SEEK_SET);fputc( 32,nfp);
fseek(nfp,287,SEEK_SET);fputc( 32,nfp);
fseek(nfp,260,SEEK_SET);fputc( 32,nfp);
fseek(nfp,7,SEEK_SET);fputc( 95,nfp);
fseek(nfp,141,SEEK_SET);fputc( 95,nfp);
fseek(nfp,440,SEEK_SET);fputc( 32,nfp);
fseek(nfp,626,SEEK_SET);fputc( 32,nfp);
fseek(nfp,48,SEEK_SET);fputc( 95,nfp);
fseek(nfp,648,SEEK_SET);fputc( 32,nfp);
fseek(nfp,680,SEEK_SET);fputc( 32,nfp);
fseek(nfp,125,SEEK_SET);fputc( 32,nfp);
fseek(nfp,455,SEEK_SET);fputc( 32,nfp);
fseek(nfp,544,SEEK_SET);fputc( 95,nfp);
fseek(nfp,518,SEEK_SET);fputc( 47,nfp);
fseek(nfp,154,SEEK_SET);fputc( 95,nfp);
fseek(nfp,64,SEEK_SET);fputc( 32,nfp);
fseek(nfp,482,SEEK_SET);fputc( 124,nfp);
fseek(nfp,437,SEEK_SET);fputc( 32,nfp);
fseek(nfp,473,SEEK_SET);fputc( 32,nfp);
fseek(nfp,506,SEEK_SET);fputc( 39,nfp);
fseek(nfp,658,SEEK_SET);fputc( 32,nfp);
fseek(nfp,460,SEEK_SET);fputc( 32,nfp);
fseek(nfp,689,SEEK_SET);fputc( 32,nfp);
fseek(nfp,46,SEEK_SET);fputc( 32,nfp);
fseek(nfp,630,SEEK_SET);fputc( 32,nfp);
fseek(nfp,659,SEEK_SET);fputc( 32,nfp);
fseek(nfp,560,SEEK_SET);fputc( 32,nfp);
fseek(nfp,537,SEEK_SET);fputc( 124,nfp);
fseek(nfp,106,SEEK_SET);fputc( 32,nfp);
fseek(nfp,37,SEEK_SET);fputc( 95,nfp);
fseek(nfp,476,SEEK_SET);fputc( 45,nfp);
fseek(nfp,360,SEEK_SET);fputc( 32,nfp);
fseek(nfp,669,SEEK_SET);fputc( 92,nfp);
fseek(nfp,217,SEEK_SET);fputc( 124,nfp);
fseek(nfp,122,SEEK_SET);fputc( 124,nfp);
fseek(nfp,562,SEEK_SET);fputc( 32,nfp);
fseek(nfp,67,SEEK_SET);fputc( 95,nfp);
fseek(nfp,375,SEEK_SET);fputc( 32,nfp);
fseek(nfp,212,SEEK_SET);fputc( 45,nfp);
fseek(nfp,373,SEEK_SET);fputc( 124,nfp);
fseek(nfp,332,SEEK_SET);fputc( 32,nfp);
fseek(nfp,310,SEEK_SET);fputc( 32,nfp);
fseek(nfp,180,SEEK_SET);fputc( 32,nfp);
fseek(nfp,210,SEEK_SET);fputc( 32,nfp);
fseek(nfp,483,SEEK_SET);fputc( 32,nfp);
fseek(nfp,692,SEEK_SET);fputc( 32,nfp);
fseek(nfp,121,SEEK_SET);fputc( 124,nfp);
fseek(nfp,230,SEEK_SET);fputc( 124,nfp);
fseek(nfp,555,SEEK_SET);fputc( 32,nfp);
fseek(nfp,236,SEEK_SET);fputc( 45,nfp);
fseek(nfp,129,SEEK_SET);fputc( 32,nfp);
fseek(nfp,439,SEEK_SET);fputc( 32,nfp);
fseek(nfp,103,SEEK_SET);fputc( 10,nfp);
fseek(nfp,420,SEEK_SET);fputc( 45,nfp);
fseek(nfp,599,SEEK_SET);fputc( 95,nfp);
fseek(nfp,487,SEEK_SET);fputc( 45,nfp);
fseek(nfp,644,SEEK_SET);fputc( 32,nfp);
fseek(nfp,682,SEEK_SET);fputc( 32,nfp);
fseek(nfp,647,SEEK_SET);fputc( 32,nfp);
fseek(nfp,712,SEEK_SET);fputc( 32,nfp);
fseek(nfp,85,SEEK_SET);fputc( 46,nfp);
fseek(nfp,390,SEEK_SET);fputc( 32,nfp);
fseek(nfp,133,SEEK_SET);fputc( 32,nfp);
fseek(nfp,261,SEEK_SET);fputc( 32,nfp);
fseek(nfp,449,SEEK_SET);fputc( 32,nfp);
fseek(nfp,631,SEEK_SET);fputc( 32,nfp);
fseek(nfp,459,SEEK_SET);fputc( 92,nfp);
fseek(nfp,401,SEEK_SET);fputc( 32,nfp);
fseek(nfp,87,SEEK_SET);fputc( 32,nfp);
fseek(nfp,78,SEEK_SET);fputc( 95,nfp);
fseek(nfp,686,SEEK_SET);fputc( 32,nfp);
fseek(nfp,699,SEEK_SET);fputc( 32,nfp);
fseek(nfp,432,SEEK_SET);fputc( 45,nfp);
fseek(nfp,366,SEEK_SET);fputc( 32,nfp);
fseek(nfp,371,SEEK_SET);fputc( 32,nfp);
fseek(nfp,484,SEEK_SET);fputc( 32,nfp);
fseek(nfp,587,SEEK_SET);fputc( 92,nfp);
fseek(nfp,221,SEEK_SET);fputc( 45,nfp);
fseek(nfp,582,SEEK_SET);fputc( 95,nfp);
fseek(nfp,343,SEEK_SET);fputc( 124,nfp);
fseek(nfp,368,SEEK_SET);fputc( 32,nfp);
fseek(nfp,623,SEEK_SET);fputc( 10,nfp);
fseek(nfp,725,SEEK_SET);fputc( 32,nfp);
fseek(nfp,3,SEEK_SET);fputc( 95,nfp);
fseek(nfp,470,SEEK_SET);fputc( 32,nfp);
fseek(nfp,627,SEEK_SET);fputc( 32,nfp);
fseek(nfp,211,SEEK_SET);fputc( 46,nfp);
fseek(nfp,353,SEEK_SET);fputc( 32,nfp);
fseek(nfp,246,SEEK_SET);fputc( 32,nfp);
fseek(nfp,380,SEEK_SET);fputc( 32,nfp);
fseek(nfp,531,SEEK_SET);fputc( 95,nfp);
fseek(nfp,608,SEEK_SET);fputc( 95,nfp);
fseek(nfp,571,SEEK_SET);fputc( 32,nfp);
fseek(nfp,233,SEEK_SET);fputc( 124,nfp);
fseek(nfp,433,SEEK_SET);fputc( 46,nfp);


   printf("CORRECT!\n");
   fclose(fp);
   
   return(0);
}

