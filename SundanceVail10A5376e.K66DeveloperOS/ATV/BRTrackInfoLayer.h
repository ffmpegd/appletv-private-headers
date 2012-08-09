/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRTrackInfoLayer : BRControl {
	BRControl *_background;	// 84 = 0x54
	BRImageControl *_art;	// 88 = 0x58
	NSArray *_lines;	// 92 = 0x5c
	float _maxLength;	// 96 = 0x60
	long _maxLines;	// 100 = 0x64
}
- (id)init;	// 0x30236d
- (void)_updateSublayers;	// 0x302c1d
- (id)accessibilityLabel;	// 0x302c09
- (void)dealloc;	// 0x302439
- (void)layoutSubcontrols;	// 0x302835
- (void)setImage:(id)image;	// 0x302769
- (void)setLines:(id)lines withImage:(id)image;	// 0x3024b1
- (void)setMaxLines:(long)lines;	// 0x302815
@end
