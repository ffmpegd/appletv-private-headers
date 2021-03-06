/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRTextControl, BRImageControl, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface RUIYTCenteredMenuView : BRMenuView {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTextControl *_descriptionControl;	// 116 = 0x74
	BRImageControl *_backgroundImageControl;	// 120 = 0x78
}
@property(retain) id backgroundImage;	// G=0x3cb9; S=0x3cd9; converted property
- (id)init;	// 0x3aad
- (void).cxx_destruct;	// 0x42c1
// converted property getter: - (id)backgroundImage;	// 0x3cb9
- (void)layoutSubcontrols;	// 0x3fa5
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x3cd9
- (void)setListHeader:(id)header;	// 0x3b45
- (void)setMenuDescription:(id)description;	// 0x3bb1
@end

