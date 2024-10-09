
#ifndef EX_H
#define EX_H

struct Ex{
	string ex;	            //what happened
	int pos;        		//position in source as int row=((pos>>16)&65535)+1,col=(pos&65535)+1;
	string file;
	Ex( const string &ex ):ex(ex),pos(-1){}
	Ex( const string &ex,int pos,const string &t ):ex(ex),pos(pos),file(t){}
};

#endif
