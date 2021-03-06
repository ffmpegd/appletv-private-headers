/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSecureResource.h"
#import "BRDataQueryController.h"

@class BRFullScreenPhotoController, BRPhotoBrowserController;

@interface ATVCupidController : BRDataQueryController <BRSecureResource> {
@private
	BRPhotoBrowserController *_browser;	// 148 = 0x94
	BRFullScreenPhotoController *_fullScreenController;	// 152 = 0x98
	unsigned _index;	// 156 = 0x9c
	int _mode;	// 160 = 0xa0
}
@property(readonly, assign) unsigned index;	// G=0x33195601; @synthesize=_index
@property(readonly, assign) int mode;	// G=0x33195611; @synthesize=_mode
+ (id)cupidController;	// 0x33194e75
+ (id)cupidControllerWithMode:(int)mode index:(unsigned)index;	// 0x33194eed
+ (id)cupidScreenSaverController;	// 0x33194ead
+ (void)initialize;	// 0x33194da5
- (id)init;	// 0x33194f2d
- (id)initWithMode:(int)mode index:(unsigned)index;	// 0x33194f45
- (id)_browserForProvider:(id)provider collection:(ATVMediaCollectionRef)collection;	// 0x33195659
- (ATVMediaQueryRef)_createQuery;	// 0x33195621
- (ATVMediaQueryRef)createDataQuery;	// 0x33195205
- (BOOL)dataClientUpdated:(id)updated;	// 0x33195215
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x33195265
- (void)dealloc;	// 0x33195039
- (id)errorForNoContent;	// 0x331951e5
// declared property getter: - (unsigned)index;	// 0x33195601
// declared property getter: - (int)mode;	// 0x33195611
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x331955c9
- (void)wasExhumed;	// 0x33195191
- (void)wasPopped;	// 0x33195115
- (void)wasPushed;	// 0x33195099
@end

