// Task 4: HMI Skin Customization System
// Objective: Implement a system to manage different themes or skins for an HMI display.
// Requirements:
// Create a Theme class:
// Attributes: backgroundColor, fontColor, fontSize, and iconStyle.
// Implement methods to apply and display the theme.
// Store multiple themes using std::map:
// Example themes: Classic, Sport, and Eco.
// Create a simple user interface to switch between themes:
// Use console input to select a theme.
// Display a preview of the selected theme on the console (e.g., "Sport Theme: Red Background, White Font").
// Deliverables:
// A C++ program that demonstrates theme switching.
// Output displaying applied themes.
// General Instructions:
// Ensure your code follows OOP principles (e.g., use of classes, inheritance, and encapsulation).
// Comment your code to explain each step and decision.
// Include a README file with instructions for running the program.
#include<iostream>
#include<string>
#include<map>
using namespace std;

class Theme{
    string backGroundColor;
    string fontColor;
    int fontSize;
    string iconStyle;
    public:
    Theme(){}
    void setThemeDetails(string backGroundColor,string fontColor,int fontSize,string iconStyle){
        this->backGroundColor = backGroundColor;
        this->fontColor = fontColor;
        this->fontSize = fontSize;
        this->iconStyle = iconStyle;
    }
    string getThemeDetails(){
        return  "BackGroundColor->" + this->backGroundColor + 
        ", FontColor-> " + this->fontColor + 
        ", FontSize->"+to_string(this->fontSize) + 
        ", IconStyle->" + this->iconStyle ;
    }
        
};
class ThemeStore{
    map<int,pair<string,Theme>> themeMap;
    Theme theme;
    public:
    ThemeStore(){
        theme.setThemeDetails("Blue","Balck",24,"Round");
        themeMap[1] = {"EcoTheme",theme};
        theme.setThemeDetails("Balck","Red",26,"Ovel");
        themeMap[2] = {"Sport Theme",theme};
        theme.setThemeDetails("White","Blue",20,"Square");
        themeMap[3] ={"Classic Theme",theme};
    }
    void getTheme(int i){
        Theme theme;
        string themeName;
       
        if(i == 1){
            themeName = themeMap[1].first;
            theme = themeMap[1].second;
            cout << themeName << " : " << theme.getThemeDetails() << endl;
        }
        else if(i == 2){
            themeName = themeMap[i].first;
            theme = themeMap[i].second;
            cout << themeName << " : " << theme.getThemeDetails() << endl;
        }
        else if(i == 3){
            themeName = themeMap[i].first;
            theme = themeMap[i].second;
            cout << themeName << " : " << theme.getThemeDetails() << endl;
        }
        else{
            cout << "Enter valid number" << endl;
        }
        
    }
    
    void displayThemes(){
        for(auto it : themeMap){
            cout << it.second.first << ": " << it.second.second.getThemeDetails() << endl;
        }
    }
        
};


void client(){
    while(true){
        int num;
        cout << "Enter a number to selectTheme : \n 1 : EcoTheme \n 2 : Classic Theme \n 3 : SportTheme \n 4 : Show available Themes \n 5: Exit" << endl;
        cin >>num;
        ThemeStore themeStore; 
        if(num == 1){
            themeStore.getTheme(num);
            cout << endl;
        }
        else if(num == 2){
            
             themeStore.getTheme(num);
             cout << endl;
        }
        else if(num == 3){
            
            themeStore.getTheme(num);
            cout << endl;
        }
        else if(num == 4){
            cout << "current themes are :\n" << endl;
            themeStore.displayThemes();
            cout << endl;
            //cout << "enter number to switch the theme" << endl;
        }
        else if(num == 5){
            break;
            //cout << "please select the appropriate Number " << endl;
        }
        
    }
    
}

int main(){
    map<int,Theme> mapTheme;
    client();
    return 0;
}

