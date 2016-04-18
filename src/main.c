#include "main.h"
#include "config.h"

int main (int argc, char *argv[]) {

  printf("Welcome to SPASM, the SuPerb AsSeMbler, version %s\n", PACKAGE_VERSION);

  if (argc <= 1) {
   printf("No input files! Go write some SPASM!\n");
  } else {
    is_correct_extension = check_extension(argv[1]);
    if (is_correct_extension == true) {
      printf("Reading file, %s!\n", argv[1]);
    } else {
      printf("Your file extension is not .spasm or .SPASM. Fix this.\n");
    }
  }

  return 0;
}

bool check_extension (char filename[]) {
  int len = strlen(filename);
  const char *last_six = &filename[len-6];

  if (strcmp(last_six, ".spasm") == 0) {
    return true;
  } else {
    return false;
  }
}
