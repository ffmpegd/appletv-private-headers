/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRDividerControl, BRHeaderControl, BRAlignmentAdjustingTextControl, BRImageControl, BRTextControl;

@interface BRAlertControl : BRControl {
@private
	SEL _eventSelector;	// 44 = 0x2c
	BRHeaderControl *_header;	// 48 = 0x30
	BRDividerControl *_divider;	// 52 = 0x34
	int _type;	// 56 = 0x38
	BRTextControl *_primary;	// 60 = 0x3c
	BRAlignmentAdjustingTextControl *_secondary;	// 64 = 0x40
	BRImageControl *_image;	// 68 = 0x44
	BRReflectionControl *_reflection;	// 72 = 0x48
}
@property(retain) BRImageControl *image;	// G=0x32f5dd15; S=0x32f5dd35; converted property
@property(retain) id primaryText;	// G=0x32f5de1d; S=0x32f5de81; converted property
@property(retain) id secondaryText;	// G=0x32f5dda5; S=0x32f5ddd5; converted property
@property(retain) id title;	// G=0x32f5debd; S=0x32f5dedd; converted property
+ (id)alertForError:(id)error;	// 0x32f5e0b1
+ (id)alertOfType:(int)type;	// 0x32f5e021
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x32f5e061
- (id)init;	// 0x32f5e009
- (id)initWithType:(int)type;	// 0x32f5dfe9
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x32f5e339
- (id)_controlsForType:(int)type;	// 0x32f5d8f9
- (void)_layoutSubcontrolsForAlert;	// 0x32f5e421
- (void)_layoutSubcontrolsForInfo;	// 0x32f5e6ed
- (id)_primaryTextAttibutesForType:(int)type;	// 0x32f5e9d1
- (id)accessibilityLabel;	// 0x32f5ea21
- (void)controlWasActivated;	// 0x32f5e3ed
- (void)dealloc;	// 0x32f5e295
// converted property getter: - (id)image;	// 0x32f5dd15
- (BOOL)isAccessibilityElement;	// 0x32f5d8f5
- (void)layoutSubcontrols;	// 0x32f5dce1
// converted property getter: - (id)primaryText;	// 0x32f5de1d
// converted property getter: - (id)secondaryText;	// 0x32f5dda5
// converted property setter: - (void)setImage:(id)image;	// 0x32f5dd35
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x32f5de81
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x32f5de4d
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x32f5ddd5
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x32f5dd71
// converted property setter: - (void)setTitle:(id)title;	// 0x32f5dedd
- (void)setType:(int)type;	// 0x32f5df11
// converted property getter: - (id)title;	// 0x32f5debd
@end
