/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MSPlatform.h"


__attribute__((visibility("hidden")))
@interface ATVCupidPlatform : XXUnknownSuperclass <MSPlatform> {
}
+ (id)cupidMediaPath;	// 0x10ca11
- (id)OSString;	// 0x10d039
- (id)OSVersion;	// 0x10ce05
- (id)UDID;	// 0x10cd55
- (id)URLConnectionProperties;	// 0x10ce45
- (void)_initializePlatformStrings;	// 0x10d0e1
- (id)appBundleInfoString;	// 0x10d05d
- (id)authTokenForPersonID:(id)personID;	// 0x10cf15
- (id)baseURLForPersonID:(id)personID;	// 0x10ce49
- (Class)deletePluginClass;	// 0x10cbf9
- (id)fullNameFromFirstName:(id)firstName lastName:(id)name;	// 0x10cbc1
- (id)hardwareString;	// 0x10cab1
- (void)logFacility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x10cad5
- (void)logFile:(const char *)file func:(const char *)func line:(int)line facility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x10cb49
- (id)pathMediaStreamDir;	// 0x10cbc5
- (BOOL)policyMayDownload;	// 0x10ce3d
- (BOOL)policyMaySendDelete;	// 0x10ce41
- (BOOL)policyMayUpload;	// 0x10ce39
- (Class)publisherPluginClass;	// 0x10cbe1
- (id)pushTokenForPersonID:(id)personID;	// 0x10cc09
- (Class)sharingPluginClass;	// 0x10cbf5
- (BOOL)shouldLogAtLevel:(int)level;	// 0x10caad
- (id)socketOptions;	// 0x10d035
- (Class)subscriberPluginClass;	// 0x10cbe5
- (id)theDaemon;	// 0x10cfc9
@end
