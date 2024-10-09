
#ifndef DEBUGGER_H
#define DEBUGGER_H

class Debugger{
public:
	virtual __stdcall void debugRun()=0;
	virtual __stdcall void debugStop()=0;
	virtual __stdcall void debugStmt( int srcpos,const char *file )=0;
	virtual __stdcall void debugEnter( void *frame,void *env,const char *func )=0;
	virtual __stdcall void debugLeave()=0;
	virtual __stdcall void debugLog( const char *msg )=0;
	virtual __stdcall void debugMsg( const char *msg,bool serious )=0;
	virtual __stdcall void debugSys( void *msg )=0;
};

//extern "C" _declspec(dllexport) Debugger * _cdecl debuggerGetDebugger( void *mod,void *env );

#endif
