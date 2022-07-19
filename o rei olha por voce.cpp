#include <iostream>
using namespace std;



int main(){
int escolha, passoum,tocha;


	cout<< ".           ..         .           .       .           .           .			";
	cout<< "      .         .            .          .       .								";
	cout<< "            .         ..xxxxxxxxxx....               .       .             .	";
	cout<< "    .             MWMWMWWMWMWMWMWMWMWMWMWMW                       .				";
	cout<< "              IIIIMWMWMWMWMWMWMWMWMWMWMWMWMWMttii:        .           .			";
	cout<< " .      IIYVVXMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWxx...         .           . ";
	cout<< "     IWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMx..					";
	cout<< "   IIWMWMWMWMWMWMWMWMWBY%ZACH%AND%OWENMWMWMWMWMWMWMWMWMWMWMWMWMx..        .		";
	cout<< "   ""MWMWMWMWMWM"""""""".  .:..   .""""'MWMWMWMWMWMWMWMWMWMWMWMWMWti.			";
 	cout<< ".     ""   . `  .: . :. : .  . :.  .  . . .  """"MWMWMWMWMWMWMWMWMWMWMWMWMti=	";
	cout<< "        . .   :` . :   .  .'.' '....xxxxx...,'. '   ' .""'YWMWMWMWMWMWMWMWMWMW+ ";
	cout<< "     ; . ` .  . : . .' :  . ..XXXXXXXXXXXXXXXXXXXXx.    `     . 'YWMWMWMWMWMWMW ";
	cout<< ".    .  .  .    . .   .  ..XXXXXXXXWWWWWWWWWWWWWWWWXXXX.  .     .     """"""    ";
	cout<< "        ' :  : . : .  ...XXXXXWWW'   W88N88@888888WWWWWXX.   .   .       . .	";
	cout<< "   . ' .    . :   ...XXXXXXWWW'    M88N88GGGGGG888^8M 'WMBX.          .   ..  : ";
 	cout<< "        :     ..XXXXXXXXWWW'     M88888WWRWWWMW8oo88M   WWMX.     .    :    .	";
	cout<< "           'XXXXXXXXXXXXWW'       WN8888WWWWW  W8@@@8M    BMBRX.         .  : : ";
	cout<< "  .       XXXXXXXX=MMWW':  .      W8N888WWWWWWWW88888W      XRBRXX.  .       .  ";
	cout<< "     ....  ""XXXXXMM::::. .        W8@889WWWWWM8@8N8W      . . :RRXx.    .		";
	cout<< "         ``...'''  MMM::.:.  .      W888N89999888@8W      . . ::::'RXV    .  :  ";
	cout<< " .       ..'''''      MMMm::.  .      WW888N88888WW     .  . mmMMMMMRXx			";
	cout<< "      ..' .            ""MMmm .  .       WWWWWWW   . :. :,miMM""'  : ""`    .	";
	cout<< "   .                .       ""MMMMmm . .  .  .   ._,mMMMM""'  :  ' .  :			";
	cout<< "               .                  ""MMMMMMMMMMMMM"". .  : . '   .        .		";
	cout<< "          .              .     .    .                      .         .			";
	cout<< ".                                         .          .         .				";




	
	cout<< "o rei deseja olhar para voce.";
	cout<<"\n";
	cout<<"aceita receber o olhar do rei?\n\n";
	cout<<"1 - sim				  2 - não\n";
		cin>> escolha;
	
	switch(escolha){
		
		case 1:
			system("cls");
			cout<< "pois bem.\n";
			cout<<"voce esta na sala do trono. tudo esta escuro.\n";
			cout<< "seguir reto - 1    			seguir pela porta a esquerda - 2";
				cin>> passoum;
				
			switch (passoum){
			case 1:
				system("cls")
				cout<<" voce nao encherga a tapecaria e cai. seu pescoco quebra. O rei nao olha mais para voce.\n";
				system("shutdown -s -t");break;
			case 2:
				system("cls")
				cout<<"voce passa pela porta, vendo um enorme salao.\n";
				cout<<"no chao, há uma tocha apagada e em seu bolso ha um esqueiro.";
				cout<<" acender a tocha?";
				cout<<"sim - 1    2 - nao ";
					cin>> tocha;
					
				switch (tocha){
			case 1:
			    system("cls")
				cout<<"voce acende a tocha e percebe uma ninhada de serpentes proxima a voce\n";
				cout<<"ao seu lado ha uma elevacao que te permite seguir por ela sem se aproximar das serpentes.\n";
				cout<<"ao atravessa-la voce encontra uma passagem estreita, a qual a atravessa.";
				cout<<"voce esta agradando o rei.";
				cout<<"\n\n";
				cout<<"voce se rasteja ate sair. agopra voce ve duas passagens.";
				cout<<"por qual passagem deseja seguir:";
				cout<<"direita - 1           esquerda - 2";	
		}				
		}	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
}
