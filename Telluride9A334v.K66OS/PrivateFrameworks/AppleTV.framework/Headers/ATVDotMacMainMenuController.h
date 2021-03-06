/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "BRTextFieldDelegate.h"


@interface ATVDotMacMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 156 = 0x9c
}
+ (void)initialize;	// 0x330cc495
+ (id)menuController;	// 0x330cc5ad
+ (id)screenSaverMenuController;	// 0x330cc5f1
- (id)init;	// 0x330cc639
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x330cc64d
- (void)_accountLoaded:(id)loaded;	// 0x330cd001
- (void)_handleAccountSelection:(id)selection;	// 0x330ccee9
- (void)_handleAddSelection:(id)selection;	// 0x330ccd51
- (void)dealloc;	// 0x330cca69
- (long)defaultIndex;	// 0x330ccaf9
- (BOOL)isNetworkDependent;	// 0x330ccd4d
- (float)listVerticalOffset;	// 0x330ccac5
- (void)textDidChange:(id)text;	// 0x330ccb31
- (void)textDidEndEditing:(id)text;	// 0x330ccb35
@end

