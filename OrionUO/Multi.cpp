﻿// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/***********************************************************************************
**
** Multi.cpp
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#include "stdafx.h"
//----------------------------------------------------------------------------------
CMulti::CMulti(const short &x, const short &y)
: CBaseQueueItem(), X(x), Y(y)
{
}
//----------------------------------------------------------------------------------
CMulti::~CMulti()
{
}
//----------------------------------------------------------------------------------
