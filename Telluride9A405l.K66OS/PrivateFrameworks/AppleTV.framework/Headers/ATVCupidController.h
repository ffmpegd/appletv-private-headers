/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import "BRDataQueryController.h"
#import "AppleTV-Structs.h"

@class BRPhotoBrowserController, BRFullScreenPhotoController;

@interface ATVCupidController : BRDataQueryController <BRSecureResource> {
@private
	BRPhotoBrowserController *_browser;	// 148 = 0x94
	BRFullScreenPhotoController *_fullScreenController;	// 152 = 0x98
	unsigned _index;	// 156 = 0x9c
	int _mode;	// 160 = 0xa0
}
@property(readonly, assign) unsigned index;	// G=0x35d87a09; @synthesize=_index
@property(readonly, assign) int mode;	// G=0x35d87a19; @synthesize=_mode
+ (id)cupidController;	// 0x35d8727d
+ (id)cupidControllerWithMode:(int)mode index:(unsigned)index;	// 0x35d872f5
+ (id)cupidScreenSaverController;	// 0x35d872b5
+ (void)initialize;	// 0x35d871ad
- (id)init;	// 0x35d87335
- (id)initWithMode:(int)mode index:(unsigned)index;	// 0x35d8734d
- (id)_browserForProvider:(id)provider collection:(ATVMediaCollectionRef)collection;	// 0x35d87a61
- (ATVMediaQueryRef)_createQuery;	// 0x35d87a29
- (ATVMediaQueryRef)createDataQuery;	// 0x35d8760d
- (BOOL)dataClientUpdated:(id)updated;	// 0x35d8761d
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x35d8766d
- (void)dealloc;	// 0x35d87441
- (id)errorForNoContent;	// 0x35d875ed
// declared property getter: - (unsigned)index;	// 0x35d87a09
// declared property getter: - (int)mode;	// 0x35d87a19
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x35d879d1
- (void)wasExhumed;	// 0x35d87599
- (void)wasPopped;	// 0x35d8751d
- (void)wasPushed;	// 0x35d874a1
@end

