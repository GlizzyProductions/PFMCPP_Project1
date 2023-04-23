#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       house
//  action 1:   the house provides shelter
house.provideShelter();
//  action 2:   the house appreciates in value
house.appreciateInValue();
//  action 3:   the house deteriorates over time
house.deteriorateOverTime();

//  2)
//  Noun:       computer  
//  action 1:   the computer boots up 
computer.bootUp();
//  action 2:   the computer overheats
computer.overheat();
//  action 3:   the computer shuts down
computer.shutDown();
//  3)
//  Noun:       andrew
//  action 1:   andrew runs errand
andrew.runErrand();
//  action 2:   andrew pays cashier
andrew.payCashier();
//  action 3:   andrew relaxes
andrew.relax();
//  4)
//  Noun:       america
//  action 1:   america holds election
america.holdElection();
//  action 2:   america votes for president
america.voteForPresident();
//  action 3:   america placates citizens
america.placateCitizens();
//  5)
//  Noun:       camera
//  action 1:   the camera displays menu
camera.displayMenu();
//  action 2:   the camera captures image
camera.captureImage();
//  action 3:   the camera exports file
camera.exportFile();
//  6)
//  Noun:       julianne
//  action 1:   julianne wears makeup
julianne.wearMakeup();
//  action 2:   julianne selects outfit
julianne.selectOutfit();
//  action 3:   julianne decides to excessorize
julianne.decideToExcessorize();
//  7)
//  Noun:       thailand
//  action 1:   thailand welcomes tourism
thailand.welcomeTourism();
//  action 2:   thailand issues temp visa
thailand.issueTempVisa();
//  action 3:   thailand profits from tourist
thailand.profitFromTourist();
//  8)
//  Noun:       basketball
//  action 1:   the basketball sits stationary
basketball.sitStationary();
//  action 2:   the basketball rotates
basketball.rotate();
//  action 3:   the basketball looses air
basketball.loseAir();
//  9)
//  Noun:       jon stewart
//  action 1:   jon stewart makes political jokes
jonStewart.makePoliticalJoke();
//  action 2:   jon stewart attacks fox news
jonStewart.attackFoxNews();
//  action 3:   jon stewart lobbies for veterans
jonStewart.lobbyForVeteran();
//  10)
//  Noun:       mexico
//  action 1:   mexico celebrates dia de muertos
mexico.celebrateDiaDeMuertos();
//  action 2:   mexico issues travel warning
mexico.issueTravelWarning();
//  action 3:   mexicco closes boarder
mexico.closeBoarder();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
