/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrCollectionController : BRMediaMenuController {
	int _mode;	// 176 = 0xb0
	ATVInternetPhotosAccount *_account;	// 180 = 0xb4
	id _screenSaverSelectionBlock;	// 184 = 0xb8
	id _photoSelectionBlock;	// 188 = 0xbc
}
@property(copy, nonatomic) id photoSelectionBlock;	// G=0x174075; S=0x174089; @synthesize=_photoSelectionBlock
@property(copy, nonatomic) id screenSaverSelectionBlock;	// G=0x174051; S=0x174065; @synthesize=_screenSaverSelectionBlock
- (id)initWithMode:(int)mode forAccount:(id)account;	// 0x173965
- (void)_handleAddSelection:(id)selection;	// 0x1744e1
- (void)_handleCollectionSelection:(id)selection;	// 0x174099
- (void)_handleContactsSelection:(id)selection;	// 0x174691
- (void)_handleRemoveSelection:(id)selection;	// 0x174365
- (void)_providerUpdated:(id)updated;	// 0x174795
- (BOOL)brEventAction:(id)action;	// 0x173fc9
- (void)dealloc;	// 0x173eed
- (long)defaultIndex;	// 0x173f91
- (BOOL)isNetworkDependent;	// 0x173fc5
// declared property getter: - (id)photoSelectionBlock;	// 0x174075
// declared property getter: - (id)screenSaverSelectionBlock;	// 0x174051
// declared property setter: - (void)setPhotoSelectionBlock:(id)block;	// 0x174089
// declared property setter: - (void)setScreenSaverSelectionBlock:(id)block;	// 0x174065
@end

