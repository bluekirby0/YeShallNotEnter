#include "..\..\..\SDK\Depends\Common\Extension.h"

//do not delete this. Ashita will clean it up.
ExtensionInterfaceData* ModuleData;

class YeShallNotEnter : public ExtensionBase
{
private:
	IAshitaCore* m_AshitaCore;
public:
	YeShallNotEnter()
	{}
	~YeShallNotEnter()
	{}
	
	int __stdcall Load(IAshitaCore* mAshitaCore, DWORD ExtensionID);

	void __stdcall Unload();

	ExtensionInterfaceData __stdcall GetExtensionData();

	bool __stdcall HandleNewChatLine(short sMode, char* szText);

};

//Exports
__declspec( dllexport ) void __stdcall CreateExtensionData(ExtensionInterfaceData* Data);

__declspec( dllexport ) IExtension* __stdcall CreateExtension(char* szText);
