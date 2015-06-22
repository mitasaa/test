#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
 

const char* f(const char* pass){
	
	char alf[]="1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 	// Альфавит
    //char pass[]="3241";									// Час пароль

    int size = sizeof(alf) / sizeof(char); 
    char* pass_serch = new char[7];
    //cout << "size:" << size << endl;
    //unsigned int n = 0;
    for(int i=0;i<=size;i++){
        for(int j=0;j<=size;j++){
            for(int k=0;k<=size;k++){
                for(int l=0;l<=size;l++){
                	for(int g=0;g<=size;g++){
                		for(int h=0;h<=size;h++){    
                		//n++;
                   		pass_serch[0]=alf[i];
                    	pass_serch[1]=alf[j];
                    	pass_serch[2]=alf[k];
                    	pass_serch[3]=alf[l];
                    	pass_serch[4]=alf[g];
                    	pass_serch[5]=alf[h];
                    	pass_serch[6]='\0';
                   
                    	if(strcmp(pass_serch, pass)==0){
                       		//cout << "n:" << n << endl;
                       		return pass_serch;
                    		}
                    	}
                    }
                }
            }
        }
    }
    //cout << "n:" << n << endl;
    return "Error";
}


//char alf[]="1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 	// Альфавит
char alf[]="abcdefghijklmnopqrstuvwxyz"; 	// Альфавит
//char alf[]="123"; 	// Альфавит
unsigned int sizeAlf = sizeof(alf) / sizeof(char); // количество символо в алфавите.
int k = -1;	                                //
const int n = 5; 							// количество символов в пароле
char a[n];              					// Ответиы
char pass[] = "zzzzzz";						// пароль
int sizePas = sizeof(pass) / sizeof(char); 	// количество символо в пароле. 
unsigned int v = 0;

void per(int &k){
	
	// 1. условия выхода
	if(k >= (sizePas - 1)){		
		//return;
	}else
	
	// 2. условия выхода
	if(strcmp(a, pass) == 0){
    	cout << "Пароль найден:" << a << endl;
    	sizeAlf = 0;
   	}else{
   		k++;
		unsigned int i = 0;
		for(; i < sizeAlf; i++){
			a[k] = alf[i];
			per(k);
		}		
		k--; 	                   
	}	
}


int main(){
 	setlocale(0, "rus");

 	unsigned int startTime = clock();
 	cout << "time:" << startTime  << endl;

 	//cout << "out:" << f("mita") << endl;	

    per(k);

    cout << "time:" << clock() << endl;
	cout << "time:" << (clock() - startTime) << " mil/sec" << endl;
   	 
    return 0;
}















