/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRHeaderControl, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface RUIYTCenteredMenuView : BRMenuView {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTextControl *_descriptionControl;	// 116 = 0x74
	BRImageControl *_backgroundImageControl;	// 120 = 0x78
}
@property(retain) id backgroundImage;	// G=0x37f1; S=0x3811; converted property
- (id)init;	// 0x35e5
- (void).cxx_destruct;	// 0x3df9
// converted property getter: - (id)backgroundImage;	// 0x37f1
- (void)layoutSubcontrols;	// 0x3add
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x3811
- (void)setListHeader:(id)header;	// 0x367d
- (void)setMenuDescription:(id)description;	// 0x36e9
@end
