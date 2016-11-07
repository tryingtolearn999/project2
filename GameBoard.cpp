//
//  GameBoard.cpp
//

#include "GameBoard.hpp"

// Build the gameboard
// If the landing square is a chute, set the position to the corresponding lower square
// I.e., player slides down to the lower square
// If the landing square is a ladder, set the position to the corresponding higher square
// Player climbs up to the higher square
// Otherwise, player stays put at the landing square
// TO DO: implement this method
void GameBoard::buildBoard() {
    for(int i = 0; i < 101; i++)
   {
     switch (i) 
      {
            case GameBoard::ONE: // Ladder
                (*Space)[i] = 38;
                break;
            case GameBoard::FOUR: // Ladder
                (*Space)[i] = 14;
                break;
            case GameBoard::NINE: // Ladder
                (*Space)[i] = 31;
                break;
            case GameBoard::SIXTEEN: // Chute
                (*Space)[i] = 6;
                break;
            case GameBoard::TWENTY_ONE: // Ladder
                (*Space)[i] = 42;
                break;
            case GameBoard::TWENTY_EIGHT: // Ladder
                (*Space)[i] = 84;
                break;
            case GameBoard::THIRTY_SIX: // Ladder
                (*Space)[i] = 44;
                break;
            case GameBoard::FORTY_SEVEN: // Chute
                (*Space)[i] = 26;
                break;
            case GameBoard::FORTY_NINE: // Chute
                (*Space)[i] = 11;
                break;
            case GameBoard::FIFTY_ONE: // Ladder
                (*Space)[i] = 67;
                break;
            case GameBoard::SIXTY_TWO: // Chute
                (*Space)[i] = 19;
                break;
            case GameBoard::FIFTY_SIX: // Chute
                (*Space)[i] = 53;
                break;
            case GameBoard::SIXTY_FOUR: // Chute
                (*Space)[i] = 60;
                break;
            case GameBoard::SEVENTY_ONE: // Ladder
                (*Space)[i] = 91;
                break;
            case GameBoard::EIGHTY: // Ladder
                (*Space)[i] = 100;
                break;
            case GameBoard::EIGHTY_SEVEN: // Chute
                (*Space)[i] = 24;
                break;
            case GameBoard::NINETY_THREE: // Chute
                (*Space)[i] = 73;
                break;
            case GameBoard::NINETY_FIVE: // Chute
                (*Space)[i] = 75;
                break;
            case GameBoard::NINETY_EIGHT: // Chute
                (*Space)[i] = 78;
                break;
            default:
                (*Space)[i] = i;
                break;
        }
   }
   // TODO: implement this function properly
   throw std::logic_error("not implemented yet");
   
}
