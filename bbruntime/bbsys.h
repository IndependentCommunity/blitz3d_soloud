
#ifndef BBSYS_H
#define BBSYS_H

#include "basic.h"
#include "../gxruntime/gxruntime.h"

extern bool debug;
extern gxRuntime *gx_runtime;

struct bbEx{
	const char *err;
	bbEx( const char *e ):err(e){
#ifdef __GNUC__
		if( e ) { gx_runtime->debugError( e ); exit(-1); }
		exit(0);
#elif _MSC_VER
		if( e ) gx_runtime->debugError( e );
#endif
	}
};

#define RTEX( _X_ ) throw bbEx( _X_ );

#endif
