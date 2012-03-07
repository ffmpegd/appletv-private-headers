/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSAttributedString, NSArray, BRMenuItem, BRPosterControl;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoCacheMonitor : NSObject {
@private
	NSAttributedString *_posterOriginalText;	// 4 = 0x4
	BOOL _posterAlwaysShowTitlesOriginal;	// 8 = 0x8
	BRMenuItem *_menuItem;	// 12 = 0xc
	BRPosterControl *_poster;	// 16 = 0x10
	NSArray *_assetIDs;	// 20 = 0x14
}
@property(readonly, assign) NSArray *assetIDs;	// G=0x35ef0795; @synthesize=_assetIDs
@property(readonly, assign) BRMenuItem *menuItem;	// G=0x35ef0775; @synthesize=_menuItem
@property(readonly, assign) BRPosterControl *poster;	// G=0x35ef0785; @synthesize=_poster
- (id)initWithMenuItem:(id)menuItem assetIDs:(id)ids;	// 0x35ef059d
- (id)initWithPoster:(id)poster assetIDs:(id)ids;	// 0x35ef0619
- (BOOL)_assetWithAssetIDIsLoading;	// 0x35ef0a75
- (void)_cacheManagerStateChanged:(id)changed;	// 0x35ef0b99
- (id)_initWithObject:(id)object assetIDs:(id)ids;	// 0x35ef07a5
- (void)_itemUpdated:(id)updated;	// 0x35ef0bcd
- (void)_updateMenuItemText;	// 0x35ef08b1
- (void)_updatePosterText;	// 0x35ef0949
// declared property getter: - (id)assetIDs;	// 0x35ef0795
- (void)dealloc;	// 0x35ef06e5
// declared property getter: - (id)menuItem;	// 0x35ef0775
// declared property getter: - (id)poster;	// 0x35ef0785
@end

