﻿/*
** Copyright (c) 2016, Xin YUAN, courses of Zhejiang University
** All rights reserved.
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the 2-Clause BSD License.
**
** Author contact information:
**   yxxinyuan@zju.edu.cn
**
*/

////////////////////////////////////////////////////////////////////////////////
// internal header
////////////////////////////////////////////////////////////////////////////////

//Linux

//------------------------------------------------------------------------------
// path

// get_exe_path_name
//   maximum buffer size: MAX_FULL_PATH characters
inline bool get_exe_path_name(char_s* szBuffer, uintptr uSize, uintptr& uChars) throw()
{
	assert( uSize > 0 );
	uChars = 0;
	ssize_t ret = ::readlink("/proc/self/exe", szBuffer, uSize - 1);
	if( ret == -1 )
		return false;  //errno
	szBuffer[ret] = 0;
	uChars = ret;
	return true;
}

// get_full_path_name
//   buffer size: MAX_FULL_PATH
//   szPath: use platform path prefix
//   this function can process the current directory.
inline bool get_full_path_name(const char_s* szPath, char_s* szBuffer) throw()
{
	char_s* p = (char_s*)::realpath(szPath, szBuffer);
	return p != NULL;  //errno
}

// get_current_directory
//   buffer size: MAX_FULL_PATH
inline bool get_current_directory(char_s* szBuffer, uintptr uSize) throw()
{
	assert( uSize > 0 );
	char_s* p = (char_s*)::getcwd(szBuffer, uSize);
	return p != NULL;  //errno
}

// set_current_directory
inline bool set_current_directory(const char_s* szPath) throw()
{
	return ::chdir(szPath) == 0;  //-1, errno
}

////////////////////////////////////////////////////////////////////////////////
