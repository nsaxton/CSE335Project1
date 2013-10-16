/*!
 * \file CScore.h
 *
 * \author Matt Smania
 *
 * \brief Creates a score object.
 * 
 * 
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
    
    //!makes changes to the score
    void Add(int change){ mScore += change;}
    std::wstring PrintScore();
        
    /*! \brief Gets the current score
     * \returns the current score of the game
     */
    int GetScore() {return mScore;}
    
private:
    int mScore;
    
};

#endif	/* CSCORE_H */

