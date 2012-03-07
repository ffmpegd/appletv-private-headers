/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSArray;

@interface ISSoftwareMap : NSObject {
	NSArray *_applications;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *applications;	// G=0x327283b5; 
+ (void)_startWatchingInstallationNotifications;	// 0x32728739
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x32727d9d
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier applicationType:(CFStringRef)type;	// 0x32727db9
+ (id)currentMap;	// 0x32727bbd
+ (BOOL)currentMapIsValid;	// 0x32727c01
+ (BOOL)haveApplicationsOfType:(CFStringRef)type;	// 0x32727a11
+ (void)invalidateCurrentMap;	// 0x32727c2d
+ (id)loadedMap;	// 0x32727c91
+ (void)setCurrentMap:(id)map;	// 0x32727d35
+ (void)startObservingNotifications;	// 0x327286ed
- (id)init;	// 0x32727925
- (void)_loadFromMobileInstallation;	// 0x327287e1
- (id)_newSoftwareUpdateDictionaryForApplication:(id)application;	// 0x32728879
- (id)_softwareUpdatesAccountsStringForApplications:(id)applications;	// 0x32728915
- (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x327281e5
- (id)applicationForItemIdentifier:(id)itemIdentifier;	// 0x327282cd
// declared property getter: - (id)applications;	// 0x327283b5
- (id)copySoftwareUpdatesPropertyList;	// 0x327283c5
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)updatesContext;	// 0x327283d9
- (void)dealloc;	// 0x327279bd
@end

