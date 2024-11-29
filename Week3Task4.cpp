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
    public:
    virtual void setDisplyTheme() = 0;
};
class SportTheme : public Theme{
    string backGroundColor;
    string fontColor;
    int fontSize;
    string iconStyle;
    public:
    SportTheme(){}
    void setDisplayTheme(string backGroundColor,string fontColor,int fontSize,string iconStyle){
        this->backGroundColor = backGroundColor;
        this->fontColor = fontColor;
        this->fontSize = fontSize;
        this->iconStyle = iconStyle;
    }
    void setFontColor(string fontColor){
        this->fontColor = fontColor;

    }
    void setBackGroundColor(string backGroundColor){
        this->backGroundColor = backGroundColor;

    }
    void setFontSize(int fontSize){
        this->fontSize = fontSize;

    }
    void setIconStyle(string iconStyle){
        this->iconStyle = iconStyle;
    }

    string getThemeDetails(){
        return  " BackGround Color :" + this->backGroundColor + " Font Color : " + this->fontColor + " Font Size : "+to_string(this->fontSize) + " Icon Style : " + this->iconStyle ;
    }
        
    

};
class ClassicTheme : public Theme{
    string backGroundColor;
    string fontColor;
    int fontSize;
    string iconStyle;
    public:
    ClassicTheme(){}
    void setDisplayTheme(string backGroundColor,string fontColor,int fontSize,string iconStyle){
        this->backGroundColor = backGroundColor;
        this->fontColor = fontColor;
        this->fontSize = fontSize;
        this->iconStyle = iconStyle;
    }
    void setFontColor(string fontColor){
        this->fontColor = fontColor;

    }
    void setBackGroundColor(string backGroundColor){
        this->backGroundColor = backGroundColor;

    }
    void setFontSize(int fontSize){
        this->fontSize = fontSize;

    }
    void setIconStyle(string iconStyle){
        this->iconStyle = iconStyle;
    }

    string getThemeDetails(){
        return  " BackGround Color :" + this->backGroundColor + " Font Color : " + this->fontColor + " Font Size : "+to_string(this->fontSize) + " Icon Style : " + this->iconStyle ;
    }
};
class EcoTheme : public Theme{
    string backGroundColor;
    string fontColor;
    int fontSize;
    string iconStyle;
    public:
    EcoTheme(){}
    void setDisplayTheme(string backGroundColor,string fontColor,int fontSize,string iconStyle){
        this->backGroundColor = backGroundColor;
        this->fontColor = fontColor;
        this->fontSize = fontSize;
        this->iconStyle = iconStyle;
    }
    void setFontColor(string fontColor){
        this->fontColor = fontColor;

    }
    void setBackGroundColor(string backGroundColor){
        this->backGroundColor = backGroundColor;

    }
    void setFontSize(int fontSize){
        this->fontSize = fontSize;

    }
    void setIconStyle(string iconStyle){
        this->iconStyle = iconStyle;
    }

    string getThemeDetails(){
        return  " BackGround Color :" + this->backGroundColor + " Font Color : " + this->fontColor + " Font Size : "+to_string(this->fontSize) + " Icon Style : " + this->iconStyle ;
    }
};

class ThemeSelector{
    public:
    ThemeSelector *themeSelector;
    ThemeSelector(ThemeSelector *themeSelector){
        this->themeSelector = themeSelector;
    }
};

int main(){
    int num;
    cout << "Enter \n 1 : EcoTheme \n 2 : Classic Theme \n 3 : SportTheme " << endl;
    cin >>num;
    // Theme *selectTheme;
    // if(theme == "EcoTheme"){
    //     Theme *selectTheme = new EcoTheme();
    // }
    // else if(theme == "sportsTheme"){
    //     Theme *selectTheme = new EcoTheme();
    // }
    // else if(theme == "classicTheme")

    return 0;
}

