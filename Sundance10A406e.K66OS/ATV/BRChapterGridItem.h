/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMarqueeTextControl, NSDictionary, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRMarqueeTextControl *_chapterTitleControl;	// 88 = 0x58
	NSDictionary *_chapterInfo;	// 92 = 0x5c
}
@property(retain) NSDictionary *chapterInfo;	// G=0x2b7ddd; S=0x2b7ab9; converted property
- (id)init;	// 0x2b79e5
// converted property getter: - (id)chapterInfo;	// 0x2b7ddd
- (void)controlWasFocused;	// 0x2b7ded
- (void)controlWasUnfocused;	// 0x2b7e5d
- (void)dealloc;	// 0x2b7a41
- (void)layoutSubcontrols;	// 0x2b7ead
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x2b7ab9
@end
