/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDate, NSString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface ATVDotMacProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_data;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
	BOOL _chainLoadingDisabled;	// 24 = 0x18
	BOOL _isTemporaryProvider;	// 25 = 0x19
}
@property(assign) BOOL chainLoadingDisabled;	// G=0x35ccbf11; S=0x35ccbf01; converted property
@property(readonly, retain) NSString *uniqueID;	// G=0x35ccc169; converted property
+ (BOOL)accountWithNameIsPersistent:(id)nameIsPersistent;	// 0x35ccbb2d
+ (id)providerOfPersistentAccounts;	// 0x35ccbae9
- (id)initAsTemporaryProvider:(BOOL)provider;	// 0x35ccbbf1
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x35ccd43d
- (void)_accountToRemove:(id)remove;	// 0x35ccc7bd
- (id)_accountWithName:(id)name;	// 0x35cce0a5
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x35cce025
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x35ccd63d
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x35ccdee9
- (void)_cancelDataMonitoringForAccounts;	// 0x35ccc47d
- (id)_collectionWithIdentifier:(id)identifier withParentAccountName:(id)parentAccountName;	// 0x35ccdf95
- (id)_data;	// 0x35ccdf85
- (BOOL)_handlesObject:(id)object;	// 0x35cccd51
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x35ccdd89
- (id)_initForPersistentAccounts;	// 0x35ccc179
- (void)_listenerUpdate:(id)update;	// 0x35ccc989
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x35cccd55
- (void)_newAccountToAdd:(id)add;	// 0x35ccc505
- (BOOL)_newAuthenticationForCollection:(id)collection updateData:(id)data;	// 0x35ccd4f1
- (id)_persistentAccounts;	// 0x35ccc28d
- (void)_postUpdateNotification:(id)notification;	// 0x35cccd19
- (void)_processChangeToObject:(id)object;	// 0x35ccc9d9
- (void)_sendUpdateNotification;	// 0x35cccbb1
- (void)_sendUpdateNotificationAfterDelay;	// 0x35cccb7d
- (void)_updateDataCount;	// 0x35cce121
- (id)accessibilityLabel;	// 0x35ccdf75
// converted property getter: - (BOOL)chainLoadingDisabled;	// 0x35ccbf11
- (id)controlFactory;	// 0x35ccbe01
- (id)dataAtIndex:(long)index;	// 0x35ccbe39
- (long)dataCount;	// 0x35ccbe11
- (void)dealloc;	// 0x35ccbd09
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x35ccbf6d
- (id)hashForDataAtIndex:(long)index;	// 0x35ccbea5
- (void)invalidate;	// 0x35ccbf21
// converted property setter: - (void)setChainLoadingDisabled:(BOOL)disabled;	// 0x35ccbf01
// converted property getter: - (id)uniqueID;	// 0x35ccc169
@end

