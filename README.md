# Quick_Launch_app
Using the Number keys on the right side of your keyboard you can quickly open applications (decimal point is to close the program)

Replace text.txt with the file loction of your text file. When you have created the text file to be used here are a few things to keep in mind:
1. Use the Name of the applictions exe file, and for apps like Microsoft edge extra info will be needed (start microsoft-edge://google)
2. This app runs whatever is put in the text file in the format:
"
start microsoft-edge://google.com
start Code
start devenv
"
3. The commands inputed in the text file will be ran in the cmd so be carefull when editing the file (I am not responible for any mis-use of the application)
4. The last item you add to the text file will be repeated, so in the previous example both num3 and num4 will both launch Microsoft Visual Studio however, this is not a problem if you use all ten items
For Modders:
6. The system() function requires "const char*" to work, and does not accept strings, however using the "mystr.c_str()" function should solve that problem
7. https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes?redirectedfrom=MSDN contains all the virtual key codes you may need (for Microsoft)
8. Do not forget to add "sleep(300)" in every input function as failure do do so will result in opening hundreds of the same appliction in less than a second
9. In my Visual Studio set-up I have the app run as a console app, however this is not required for users but good for debugging 

This was a one day build to start off the school year so please excuse any inconveniences as this was pretty rushed, however I do plan on updating this soon
