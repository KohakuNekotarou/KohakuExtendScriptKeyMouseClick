#ifndef __KESKMCID_h__
#define __KESKMCID_h__

#include "SDKDef.h"

// Company:
#define kKESKMCCompanyKey	kSDKDefPlugInCompanyKey		// Company name used internally for menu paths and the like. Must be globally unique, only A-Z, 0-9, space and "_".
#define kKESKMCCompanyValue	kSDKDefPlugInCompanyValue	// Company name displayed externally.

// Plug-in:
#define kKESKMCPluginName	"KohakuExtendScriptKeyMouseClick"			// Name of this plug-in.
#define kKESKMCPrefixNumber	0xb164f5f1 		// Unique prefix number for this plug-in(*Must* be obtained from Adobe Developer Support).
#define kKESKMCVersion		kSDKDefPluginVersionString						// Version of this plug-in (for the About Box).
#define kKESKMCAuthor		""					// Author of this plug-in (for the About Box).

// Plug-in Prefix: (please change kKESKMCPrefixNumber above to modify the prefix.)
#define kKESKMCPrefix		RezLong(kKESKMCPrefixNumber)				// The unique numeric prefix for all object model IDs for this plug-in.
#define kKESKMCStringPrefix	SDK_DEF_STRINGIZE(kKESKMCPrefixNumber)	// The string equivalent of the unique prefix number for  this plug-in.

// Missing plug-in: (see ExtraPluginInfo resource)
#define kKESKMCMissingPluginURLValue		kSDKDefPartnersStandardValue_enUS // URL displayed in Missing Plug-in dialog
#define kKESKMCMissingPluginAlertValue	kSDKDefMissingPluginAlertValue // Message displayed in Missing Plug-in dialog - provide a string that instructs user how to solve their missing plug-in problem

// PluginID:
DECLARE_PMID(kPlugInIDSpace, kKESKMCPluginID, kKESKMCPrefix + 0)

// ClassIDs:
DECLARE_PMID(kClassIDSpace, kKESKMCScriptProviderBoss, kKESKMCPrefix + 0)

// InterfaceIDs:
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESKMCINTERFACE, kKESKMCPrefix + 0)

// ImplementationIDs:
DECLARE_PMID(kImplementationIDSpace, kKESKMCScriptProviderImpl, kKESKMCPrefix + 0 )

// ActionIDs:
DECLARE_PMID(kActionIDSpace, kKESKMCAboutActionID, kKESKMCPrefix + 0)

// WidgetIDs:

//Script Element IDs
DECLARE_PMID(kScriptInfoIDSpace, kKESKMCClickLeftMouseButtonMethodScriptElement, kKESKMCPrefix + 0)

// "About Plug-ins" sub-menu:
#define kKESKMCAboutMenuKey			kKESKMCStringPrefix "kKESKMCAboutMenuKey"
#define kKESKMCAboutMenuPath		kSDKDefStandardAboutMenuPath kKESKMCCompanyKey

// "Plug-ins" sub-menu:
#define kKESKMCPluginsMenuKey 		kKESKMCStringPrefix "kKESKMCPluginsMenuKey"
#define kKESKMCPluginsMenuPath		kSDKDefPlugInsStandardMenuPath kKESKMCCompanyKey kSDKDefDelimitMenuPath kKESKMCPluginsMenuKey

// Menu item keys:

// Other StringKeys:
#define kKESKMCAboutBoxStringKey	kKESKMCStringPrefix "kKESKMCAboutBoxStringKey"
#define kKESKMCTargetMenuPath kKESKMCPluginsMenuPath

// Menu item positions:


// Initial data format version numbers
#define kKESKMCFirstMajorFormatNumber  RezLong(1)
#define kKESKMCFirstMinorFormatNumber  RezLong(0)

// Data format version numbers for the PluginVersion resource 
#define kKESKMCCurrentMajorFormatNumber kKESKMCFirstMajorFormatNumber
#define kKESKMCCurrentMinorFormatNumber kKESKMCFirstMinorFormatNumber

#endif // __KESKMCID_h__
