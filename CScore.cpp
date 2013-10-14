/*!
 * \file CScore.cpp
 *
 * \author Matt Smania
 */

#include "CScore.h"

/*! \brief Default constructor
 *
 * Creates the score object and initializes the score
 */
CScore::CScore()
{
    mScore = 10000; //!< initial score for the game
}

/*! \brief Copy constructor
 *
 * Creates score object based on the original score
 */
CScore::CScore(const CScore& orig)
{
}

/*! \brief Default destructor
 *
 * deletes the score object
 * 
 */
CScore::~CScore()
{
}


/*! \brief Outputs a string stating the score of the game 
 *      
 * 
 * \param none
 * \returns wstring stating "score:" and the current score
 */
std::wstring CScore::PrintScore()
{
    std::wstringstream tempStr;
    tempStr << L"CURRENT SCORE: " << mScore;
    std::wstring str = tempStr.str();
    return str;
}

