//
//Radhika Agrawal
//CS110 - HW4 titled Choose your Own Adventure
//

#include <iostream>

using namespace std;

int main(){
    cout << "Welcome to Choose your Own Adevnture story!";
    
    cout << endl << "This adevnture is titled: Crossing Oceans: International Student in the States.";
    
    cout << endl << "Please enter your name. ";
    string name;
    cin >> name;
    
    cout << endl << "Please enter your home country. ";
    string country;
    cin >> country;
    
    cout << endl << "Hi " << name << "! You are a bright and ambitious international student from " << country << " pursuing your studies in the United States. Your journey begins here, and the decisions you make will shape your path. Get ready!";
    
    cout << endl << "You've just landed at JFK International Airport.";
    
    cout << endl << "Please enter your choice. Type \"1\" if you decide to take a taxi to your campus or type \"2\" if you choose to navigate the subway system. ";
    string choice;
    cin >> choice;
    
    if(choice == "1"){ //O>A
        
        cout << endl << "The taxi driver seems friendly but doesn't know the way to your dorm. What do you do?";
        
        cout << endl << "Please enter your choice. Type \"1\" if you ask the driver to use GPS or type \"2\" if you trust your own sense of direction. ";
        string choice;
        cin >> choice;
        
        if(choice == "1"){ //O>A>C
            
            cout << endl << "The GPS leads the driver to your dorm, but the fare is higher than expected. How do you handle it?";
            
            cout << endl << "Please enter your choice. Type \"1\" if you negotiate and the driver agress or type \"2\" if you negotiate but the driver doesn't agree. ";
            string choice;
            cin >> choice;
            
            if(choice == "1"){ //Path 1 is O>A>C>G
                
                cout << endl << "You pay the driver the fair price that both agreed upon after some negotiation and proceed to unload your bags from the car.";
            }
            
            else{ //Path 2 is O>A>C>H
                
                cout << endl << "You pay the driver the original fare as the negotiation failed and proceed to unload your bags from the car.";
            }
        }
        
        else{ //O>A>D
            
            cout << endl << "Your intuition leads you to your dorm, but it takes a while. What do you do next?";
            
            cout << endl << "Please enter your choice. Type \"1\" if you call your family back home or type \"2\" if you focus on settling in your new room first. ";
            string choice;
            cin >> choice;
            
            if(choice == "1"){ //Path 3 is O>A>D>I
                
                cout << endl << "You call your family in India and share your mixed feelings about finally making it to the United States. ";
            }
            
            else{ //Path 4 is O>A>D>J
                
                cout << endl << "You organize our belongings and decorate your room with full enthusiasm.";
            }
        }
    }
    
    else{ //O>B
        
        cout << endl << "The subway system is confusing, and you're not sure which line to take. What's your next move?";
        
        cout << endl <<  "Please enter your choice. Type \"1\" if you ask a fellow passenger for help or type \"2\" if you decide to follow the signs. ";
        string choice;
        cin >> choice;
        
        if(choice == "1"){ //O>B>E
            
            cout << endl << "The passenger helps you navigate the subway successfully. What do you do to thank them?";
            
            cout << endl << "Please enter your choice. Type \"1\" if you offer to buy them a coffee or type \"2\" if you express your gratitude and continue on. ";
            string choice;
            cin >> choice;
            
            if(choice == "1"){ //Path 5 is O>B>E>K
                
                cout << endl << "You have a friendly conversation with them over coffee and exchange contacts for future meet-ups.";
            }
            
            else{ //Path 6 is O>B>E>L
                
                cout << endl << "You head straight to your dorm to take some rest after a long journey.";
            }
        }
        
        else{ //O>B>F
            
            cout << endl << "You follow the signs and reach your destination. However, it takes longer than expected. How do you react?";
            
            cout << endl << "Please enter your choice. Type \"1\" if you stay calm and enjoy the journey or type \"2\" if you feel anxious and impatient. ";
            string choice;
            cin >> choice;
            
            if(choice == "1"){ //Path 7 is O>B>F>M
                
                cout << endl << "You decide to make a short vlog by combining all the photos and videos you took while on the subway.";
            }
            
            else{ //Path 8 is O>B>F>N
                
                cout << endl << "You decide to call up your roommate and let her know that you will be late.";
            }
        }
    }
    
	return 0;
}
	
