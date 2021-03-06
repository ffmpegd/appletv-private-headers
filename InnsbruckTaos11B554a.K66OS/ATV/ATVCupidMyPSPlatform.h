/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCupidDaemonDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MSPlatform.h"


__attribute__((visibility("hidden")))
@interface ATVCupidMyPSPlatform : XXUnknownSuperclass <ATVCupidDaemonDelegate, MSPlatform> {
}
+ (id)cupidMediaPath;	// 0x4cb9e1
- (id)OSString;	// 0x4cbd65
- (id)UDID;	// 0x4cbc45
- (id)appBundleInfoString;	// 0x4cbea9
- (id)authTokenForPersonID:(id)personID;	// 0x4cc341
- (id)baseURLForPersonID:(id)personID;	// 0x4cc1a5
- (Class)deletePluginClass;	// 0x4cbc29
- (id)fullNameFromFirstName:(id)firstName lastName:(id)name;	// 0x4cbbd9
- (id)hardwareString;	// 0x4cbd11
- (void)logFacility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x4cbaa9
- (void)logFile:(const char *)file func:(const char *)func line:(int)line facility:(int)facility level:(int)level format:(id)format args:(void *)args;	// 0x4cbb41
- (void)mediaStreamDaemonAuthFailed:(id)failed personID:(id)anId;	// 0x4cc561
- (void)mediaStreamDaemonDidIdle:(id)mediaStreamDaemon;	// 0x4cc559
- (void)mediaStreamDaemonDidUnidle:(id)mediaStreamDaemon;	// 0x4cc55d
- (id)pathMediaStreamDir;	// 0x4cbbdd
- (BOOL)policyMayDownload;	// 0x4cbf71
- (BOOL)policyMaySendDelete;	// 0x4cbf75
- (BOOL)policyMayUpload;	// 0x4cbf6d
- (Class)publisherPluginClass;	// 0x4cbc05
- (id)pushTokenForPersonID:(id)personID;	// 0x4cbf7d
- (Class)sharingPluginClass;	// 0x4cbc25
- (BOOL)shouldEnableNewFeatures;	// 0x4cc1a1
- (BOOL)shouldLogAtLevel:(int)level;	// 0x4cbaa5
- (id)socketOptions;	// 0x4cbf79
- (Class)subscriberPluginClass;	// 0x4cbc09
- (id)theDaemon;	// 0x4cc475
@end

