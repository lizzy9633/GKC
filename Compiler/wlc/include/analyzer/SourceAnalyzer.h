﻿/*
** Copyright (c) 2015, Xin YUAN, courses of Zhejiang University
** All rights reserved.
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the 2-Clause BSD License.
**
** Author contact information:
**   yxxinyuan@zju.edu.cn
**
*/

/*
This file contains classes for source analyzer.
Author: Lijuan Mei
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __SOURCE_ANALYZER_H__
#define __SOURCE_ANALYZER_H__
////////////////////////////////////////////////////////////////////////////////

#include "../base/CharStreamProvider.h"

////////////////////////////////////////////////////////////////////////////////
namespace GKC {
////////////////////////////////////////////////////////////////////////////////

// source analyzer

class SourceAnalyzer
{
public:
	SourceAnalyzer() throw()
	{
	}
	~SourceAnalyzer() throw()
	{
	}

	// init
	CallResult Initialize(const RefPtr<CharS>& szFileName) throw()
	{
		CallResult cr;
		return cr;
	}

	// parse
	void parse() throw()
	{
	}

private:
	void lexical() throw()
	{
	}
	void grammar() throw()
	{
	}
	void semantics() throw()
	{
	}
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif // __SOURCE_ANALYZER_H__
////////////////////////////////////////////////////////////////////////////////
