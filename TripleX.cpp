 #include <iostream>
 
 int main ()
{
    //Premise explanation
    std::cout<< "You are a secret agent breaking into the server room...";
    std::cout<< std::endl;
    std::cout<< "Enter the correct code to continue...";

    //Declare three number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 5;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;  

    //Print instructions  
    std::cout << std::endl; 
    std::cout << "+ There are 3 numbers in the code\n" << std::endl;
    std::cout << "+ The codes add-up to: "<< CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: "<< CodeProduct << std::endl;
   
    //Prompt player for PlayerGuess
    int PlayerGuess1, PlayerGuess2, PlayerGuess3;
    std::cout << "Enter your 3 Guesses: \n";
    std::cin >> PlayerGuess1 >> PlayerGuess2 >> PlayerGuess3;
    std::cout << "You entered: " << PlayerGuess1 << ", " 
        << PlayerGuess2 << ", and " << PlayerGuess3 << std::endl;
    
    //Guess arithmetic
    int GuessSum = PlayerGuess1 + PlayerGuess2 + PlayerGuess3;
    int GuessProduct = PlayerGuess1 * PlayerGuess2 * PlayerGuess3;

    //condition
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!\n";
    } else std::cout << "You lose, please try again.\n";


    return 0;
}