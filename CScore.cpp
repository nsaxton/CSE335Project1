/*!
 * \file CScore.cpp
 *
 * \author Matt Smania
 */

#include "CScore.h"

CScore::CScore()
{
    mScore = 1000;
}

CScore::CScore(const CScore& orig)
{
}

CScore::~CScore()
{
}


std::wstring CScore::PrintScore()
{
    std::wstringstream tempStr;
    tempStr << L"Score: " << mScore;
    std::wstring str = tempStr.str();
    return str;
}

