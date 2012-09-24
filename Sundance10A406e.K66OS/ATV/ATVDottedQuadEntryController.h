/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class NSString, BRHeaderControl, BRTextControl, ATVIPv4AddressEntryControl;
@protocol ATVDottedQuadEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVDottedQuadEntryController : BRController <BRTextFieldDelegate> {
	id<ATVDottedQuadEntryDelegate> _delegate;	// 100 = 0x64
	ATVIPv4AddressEntryControl *_editor;	// 104 = 0x68
	BRTextControl *_prompt;	// 108 = 0x6c
	BRHeaderControl *_header;	// 112 = 0x70
	NSString *_dottedQuad;	// 116 = 0x74
}
@property(retain) NSString *dottedQuad;	// G=0x203519; S=0x203529; converted property
- (id)initWithTitle:(id)title prompt:(id)prompt label:(id)label notifying:(id)notifying;	// 0x203021
- (id)accessibilityLabel;	// 0x203585
- (void)dealloc;	// 0x2031e1
// converted property getter: - (id)dottedQuad;	// 0x203519
// converted property setter: - (void)setDottedQuad:(id)quad;	// 0x203529
- (void)setFrame:(CGRect)frame;	// 0x203281
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x20343d
- (void)textDidChange:(id)text;	// 0x20345d
- (void)textDidEndEditing:(id)text;	// 0x203461
@end
