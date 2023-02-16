#include <bits/stdc++.h>
using namespace std;
const string FIGURE[8] ={
		 "   -------------    \n" 
         "   |                \n" 
         "   |                \n" 
         "   |                \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

		 "   -------------    \n" 
         "   |           |    \n" 
         "   |                \n" 
         "   |                \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

		 "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |                \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

		 "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |           |    \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

		 "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|    \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",

		 "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|\\  \n" 
         "   |                \n" 
         "   |     \n" 
         " -----   \n",
		 
		 "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|\\  \n" 
         "   |          /     \n" 
         "   |     \n" 
         " -----   \n",

		 "   -------------    \n" 
         "   |           |    \n" 
         "   |           O    \n" 
         "   |          /|\\  \n" 
         "   |          / \\  \n" 
         "   |     \n" 
         " -----   \n"
};

const string WORD_LIST[200]={"angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm"};

int x=7;
int dem=0;
bool checkword[1001];

void chooseword(string &s){
    srand(time(0));
    int n=rand()%3;
    s=WORD_LIST[n];
	return;

}

char guessit(){
	char u;
cout << "guess the word: ";
cin >> u;
return u;
}

void badguess(){
    --x;
}

void check(char w, string &s){	
	int v=s.size();
	int cnt=0;
	for(int i=0;i<=v;++i){
		if(w==s[i]){ checkword[i]= true;
        ++cnt;
        ++dem;
	}
    }
   
    cout << endl;
    if(cnt==0) badguess();
    
    return;

}

void rendergame(string &s){
    system("CLS");
    cout << FIGURE[7-x] << endl;
     for(int i=0;i<s.size();++i){
        if(checkword[i]!=0) cout << s[i];
        else cout << "_ ";
    }

    cout << endl;
	char w = guessit();
	check(w,s);
    return;
}

int main(){
    string s;
    chooseword(s);
    int t=s.size();
    cout << endl;
    while(dem<t&&x>0){
        rendergame(s);
    }
    if(dem==t) cout << "Congratulations! You win!";
    if(x==0) cout << "You lost. The correct word is " << s;
    cout << endl;

}
