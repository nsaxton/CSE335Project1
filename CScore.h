/* 
 * File:   CScore.h
 * Author: student
 *
 * Created on October 13, 2013, 10:26 PM
 */

#ifndef CSCORE_H
#define	CSCORE_H

#include <wx/string.h>
#include <sstream>

class CScore
{
public:
    CScore();
    CScore(const CScore& orig);
    virtual ~CScore();
    void Add(int change){ mScore += change;}
    std::wstring PrintScore();
    
private:
    int mScore;
    
};

#endif	/* CSCORE_H */

