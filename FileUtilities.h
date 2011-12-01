// ***************************************************************************
// CFileUtilities - performs basic file operations.
// ---------------------------------------------------------------------------
// (c) 2006 - 2009 Michael Strömberg
// Marth Lab, Department of Biology, Boston College
// ---------------------------------------------------------------------------
// Dual licenced under the GNU General Public License 2.0+ license or as
// a commercial license with the Marth Lab.
// ***************************************************************************

#ifndef FILEUTILITIES_H_
#define FILEUTILITIES_H_

#include <stdint.h>

#include <vector>
#include <string>

#include "LargeFileSupport.h"

using std::string;
using std::vector;

namespace FileUtilities {
	// checks if a file exists, exits otherwise
	bool CheckFile(const char* filename, bool showError = false);
	// deletes the directory
	bool DeleteDir(const string& folder_name);
	// deletes the file
	bool DeleteFile(const string& filename);
	// checks if a directory exists, creates it otherwise
	void CreateDir(const char* directory);
	// calculates the file size for the given filename
	void GetFileSize(const string& filename, uint64_t& fileSize);
	// searches a directory for filenames that contain the specified string
	void SearchDirectory(vector<string>& filenames, const char* directory);
	// moves the specified file to the specified directory
	void MoveFile(const char* filename, const char* directory);
	// moves the specified file to the specified directory
	void CopyFile(const char* filename, const char* directory);
	// returns the temp directory for the appropriate platform
	void GetTempDirectory(string& tempDirectory);
	// generates a random filename in the temp directory
	void GetTempFilename(string& tempFilename);
	// returns the file size for the specified filename
	off_type GetFileSize(const char* filename);
	// returns true if a directory exists, false otherwise
	bool DirExists(const char* directory);
	bool CheckTempFile( const char* filename, bool showError );

};

#endif // FILEUTILITIES_H_
