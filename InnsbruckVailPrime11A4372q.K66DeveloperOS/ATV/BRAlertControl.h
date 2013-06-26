/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRHorizontalDividerControl, BRTextControl, BRAlignmentAdjustingTextControl, BRReflectionControl, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface BRAlertControl : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRHorizontalDividerControl *_divider;	// 88 = 0x58
	int _type;	// 92 = 0x5c
	BRTextControl *_primary;	// 96 = 0x60
	BRAlignmentAdjustingTextControl *_secondary;	// 100 = 0x64
	BRImageControl *_image;	// 104 = 0x68
	BRReflectionControl *_reflection;	// 108 = 0x6c
}
@property(retain) BRImageControl *image;	// G=0x324949; S=0x324901; converted property
@property(retain) id primaryText;	// G=0x324805; S=0x324785; converted property
@property(retain) id secondaryText;	// G=0x32488d; S=0x32483d; converted property
@property(retain) id title;	// G=0x324765; S=0x324725; converted property
+ (id)alertForError:(id)error;	// 0x324329
+ (id)alertOfType:(int)type;	// 0x3243c9
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x324371
- (id)init;	// 0x324411
- (id)initWithType:(int)type;	// 0x324425
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x324449
- (id)_controlsForType:(int)type;	// 0x3250a9
- (void)_layoutSubcontrolsForAlert;	// 0x324d41
- (void)_layoutSubcontrolsForInfo;	// 0x3249a1
- (id)_primaryTextAttibutesForType:(int)type;	// 0x32549d
- (id)accessibilityLabel;	// 0x3254fd
- (void)controlWasActivated;	// 0x3245f9
- (void)dealloc;	// 0x324545
// converted property getter: - (id)image;	// 0x324949
- (BOOL)isAccessibilityElement;	// 0x3254f9
- (void)layoutSubcontrols;	// 0x324969
// converted property getter: - (id)primaryText;	// 0x324805
// converted property getter: - (id)secondaryText;	// 0x32488d
// converted property setter: - (void)setImage:(id)image;	// 0x324901
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x324785
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x3247c9
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x32483d
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x3248c5
// converted property setter: - (void)setTitle:(id)title;	// 0x324725
- (void)setType:(int)type;	// 0x32462d
// converted property getter: - (id)title;	// 0x324765
@end
