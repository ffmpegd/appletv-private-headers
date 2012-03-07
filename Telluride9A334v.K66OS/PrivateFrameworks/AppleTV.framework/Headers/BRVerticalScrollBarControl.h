/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRVerticalScrollBarControl : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
	float _position;	// 52 = 0x34
}
@property(retain) BRImageControl *image;	// G=0x33231185; S=0x33231165; converted property
- (id)init;	// 0x3323107d
- (void)dealloc;	// 0x332310f9
// converted property getter: - (id)image;	// 0x33231185
- (void)layoutSubcontrols;	// 0x332311a5
// converted property setter: - (void)setImage:(id)image;	// 0x33231165
- (void)setScrollPosition:(float)position;	// 0x33231145
@end

