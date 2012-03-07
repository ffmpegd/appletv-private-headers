/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class NSString;

@interface BRTextEntryDialog : BRTextEntryController <BRTextFieldDelegate> {
@private
	NSString *_dialogID;	// 160 = 0xa0
	BOOL _canceled;	// 164 = 0xa4
}
@property(readonly, retain) NSString *dialogID;	// G=0x3424b225; converted property
- (BOOL)brEventAction:(id)action;	// 0x3424b3d5
- (void)dealloc;	// 0x3424b1d9
// converted property getter: - (id)dialogID;	// 0x3424b225
- (id)runModal;	// 0x3424b32d
- (void)textDidChange:(id)text;	// 0x3424b46d
- (void)textDidEndEditing:(id)text;	// 0x3424b471
@end

