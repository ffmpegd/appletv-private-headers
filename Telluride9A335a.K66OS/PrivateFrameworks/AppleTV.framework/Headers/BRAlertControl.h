/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRReflectionControl, BRAlignmentAdjustingTextControl, BRDividerControl, BRHeaderControl, BRImageControl;

@interface BRAlertControl : BRControl {
@private
	BRHeaderControl *_header;	// 48 = 0x30
	BRDividerControl *_divider;	// 52 = 0x34
	int _type;	// 56 = 0x38
	BRTextControl *_primary;	// 60 = 0x3c
	BRAlignmentAdjustingTextControl *_secondary;	// 64 = 0x40
	BRImageControl *_image;	// 68 = 0x44
	BRReflectionControl *_reflection;	// 72 = 0x48
}
@property(retain) BRImageControl *image;	// G=0x341cc91d; S=0x341cc8d5; converted property
@property(retain) id primaryText;	// G=0x341cc7d9; S=0x341cc759; converted property
@property(retain) id secondaryText;	// G=0x341cc861; S=0x341cc811; converted property
@property(retain) id title;	// G=0x341cc739; S=0x341cc6f9; converted property
+ (id)alertForError:(id)error;	// 0x341cc351
+ (id)alertOfType:(int)type;	// 0x341cc3f1
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x341cc399
- (id)init;	// 0x341cc439
- (id)initWithType:(int)type;	// 0x341cc44d
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x341cc471
- (id)_controlsForType:(int)type;	// 0x341ccff9
- (void)_layoutSubcontrolsForAlert;	// 0x341cccb9
- (void)_layoutSubcontrolsForInfo;	// 0x341cc979
- (id)_primaryTextAttibutesForType:(int)type;	// 0x341cd455
- (id)accessibilityLabel;	// 0x341cd4ad
- (void)controlWasActivated;	// 0x341cc5d5
- (void)dealloc;	// 0x341cc525
// converted property getter: - (id)image;	// 0x341cc91d
- (BOOL)isAccessibilityElement;	// 0x341cd4a9
- (void)layoutSubcontrols;	// 0x341cc93d
// converted property getter: - (id)primaryText;	// 0x341cc7d9
// converted property getter: - (id)secondaryText;	// 0x341cc861
// converted property setter: - (void)setImage:(id)image;	// 0x341cc8d5
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x341cc759
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x341cc79d
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x341cc811
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x341cc899
// converted property setter: - (void)setTitle:(id)title;	// 0x341cc6f9
- (void)setType:(int)type;	// 0x341cc609
// converted property getter: - (id)title;	// 0x341cc739
@end

