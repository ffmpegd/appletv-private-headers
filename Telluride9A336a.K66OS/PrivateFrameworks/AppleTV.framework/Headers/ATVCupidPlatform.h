/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MSPlatform.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVCupidPlatform : NSObject <MSPlatform> {
}
+ (id)cupidMediaPath;	// 0x33a1fbc5
- (id)OSString;	// 0x33a201c5
- (id)OSVersion;	// 0x33a1ff99
- (id)UDID;	// 0x33a1fefd
- (id)URLConnectionProperties;	// 0x33a1ffd5
- (void)_initializePlatformStrings;	// 0x33a2026d
- (id)appBundleInfoString;	// 0x33a201e9
- (id)authTokenForPersonID:(id)personID;	// 0x33a200a5
- (id)baseURLForPersonID:(id)personID;	// 0x33a1ffd9
- (id)fullNameFromFirstName:(id)firstName lastName:(id)name;	// 0x33a1fd81
- (id)hardwareString;	// 0x33a1fc65
- (void)logFacility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x33a1fc89
- (void)logFile:(const char *)file func:(const char *)func line:(int)line facility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x33a1fd05
- (id)pathMediaStreamDir;	// 0x33a1fd85
- (BOOL)policyMayDownload;	// 0x33a1ffd1
- (BOOL)policyMayUpload;	// 0x33a1ffcd
- (Class)publisherPluginClass;	// 0x33a1fda1
- (id)pushTokenForPersonID:(id)personID;	// 0x33a1fdb9
- (Class)sharingPluginClass;	// 0x33a1fdb5
- (BOOL)shouldLogAtLevel:(int)level;	// 0x33a1fc61
- (id)socketOptions;	// 0x33a201c1
- (Class)subscriberPluginClass;	// 0x33a1fda5
- (id)theDaemon;	// 0x33a20155
@end

