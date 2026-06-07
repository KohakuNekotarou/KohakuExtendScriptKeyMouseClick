#include "VCPlugInHeaders.h"

// Interface includes:
#include "IScript.h"
#include "IScriptRequestData.h"

// General includes:
#include "CAlert.h"
#include "CScriptProvider.h"

// Project includes:
#include "KESKMCScriptingDefs.h"
#include "KESKMCID.h"

#ifdef WINDOWS
#pragma comment(lib, "user32.lib")
#include <windows.h>
#endif

class KESKMCScriptProvider : public CScriptProvider
{
public:
	KESKMCScriptProvider(IPMUnknown* boss) : CScriptProvider(boss) {};

	~KESKMCScriptProvider() {}

	ErrorCode HandleMethod(ScriptID scriptID, IScriptRequestData* iScriptRequestData, IScript* iScript);

private:
	ErrorCode ClickLeftMouseButton();
};

CREATE_PMINTERFACE(KESKMCScriptProvider, kKESKMCScriptProviderImpl)

// HandleMethod
ErrorCode KESKMCScriptProvider::HandleMethod(ScriptID scriptID, IScriptRequestData* iScriptRequestData, IScript* iScript)
{
	ErrorCode status = kFailure;

	switch (scriptID.Get())
	{
	case e_KESKMCClickLeftMouseButton:
		status =this->ClickLeftMouseButton();
		break;

	default:
		status = CScriptProvider::HandleMethod(scriptID, iScriptRequestData, iScript);
	}

    return status;
}

// ClickLeftMouseButton
ErrorCode KESKMCScriptProvider::ClickLeftMouseButton()
{
#ifdef WINDOWS
	INPUT inputs[2] = { 0 };

	inputs[0].type = INPUT_MOUSE;
	inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

	inputs[1].type = INPUT_MOUSE;
	inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;

	SendInput(2, inputs, sizeof(INPUT));
#endif

	return kSuccess;
}