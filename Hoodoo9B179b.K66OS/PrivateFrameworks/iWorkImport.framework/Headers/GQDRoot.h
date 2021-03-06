/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDRoot : NSObject {
@private
	CFDictionaryRef mUidToObjectMap;	// 4 = 0x4
	BOOL mAppBundleColorMapLoaded;	// 8 = 0x8
	CFDictionaryRef mAppBundleResourceToColorMap;	// 12 = 0xc
	BOOL mAppBundleResourcesUrlInitialized;	// 16 = 0x10
	CFURLRef mAppBundleResourcesUrl;	// 20 = 0x14
	int mAppBundleVersion;	// 24 = 0x18
	unsigned long long mDocVersion;	// 28 = 0x1c
}
+ (xmlNs *)appNamespace;	// 0x35977151
- (id)init;	// 0x35977189
- (const char *)addIdentifiedObject:(id)object fromCurrentNode:(xmlTextReader *)currentNode;	// 0x35977545
- (BOOL)addObject:(id)object withOwnedXmlUid:(const char *)ownedXmlUid;	// 0x35977605
- (BOOL)appBundleCanProcessCurrentDocVersion;	// 0x359771ed
- (CFURLRef)appBundleResourcesUrl;	// 0x359773f5
- (Class)classForName:(const char *)name;	// 0x35977645
- (id)colorForMissingAppBundleResource:(CFStringRef)missingAppBundleResource processorBundle:(CFBundleRef)bundle;	// 0x3597741d
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x35977155
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle fileExists:(BOOL *)exists;	// 0x35977465
- (void)dealloc;	// 0x35977685
- (unsigned)documentReleaseVersion;	// 0x35977161
- (void)forgetAboutObject:(id)object withXmlUid:(const char *)xmlUid;	// 0x359774f9
- (BOOL)includeStyleWithIdentifier:(const char *)identifier parentIdentifier:(const char *)identifier2 uid:(const char *)uid;	// 0x359774ad
- (void)initializeAppBundleResourcesUrl;	// 0x35977159
- (void)loadAppBundleResourceToColorMap;	// 0x3597715d
- (id)objectWithXmlUid:(const char *)xmlUid;	// 0x35977531
- (BOOL)readDocumentVersion:(xmlTextReader *)version;	// 0x359773dd
- (BOOL)readDocumentVersion:(xmlTextReader *)version isTooNew:(BOOL *)aNew;	// 0x35977251
- (id)uuid;	// 0x359775d1
@end

