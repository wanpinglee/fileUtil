#include <stdio.h>
#include <cstdlib>
#include "FileUtilities.h"

int main(int argc, char** argv) {
  string temp_file;
  // Note: The temp directory will be generated.
  FileUtilities::GetTempFilename(temp_file);
 
  string temp_dir;
  FileUtilities::GetTempDirectory(temp_dir);
  printf("Your temp directory is %s.\n", temp_dir.c_str());

  FileUtilities::DeleteDir(temp_dir);

  return EXIT_SUCCESS;
}
