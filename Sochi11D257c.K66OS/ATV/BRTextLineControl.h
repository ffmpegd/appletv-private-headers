/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTypesetLine;

__attribute__((visibility("hidden")))
@interface BRTextLineControl : BRControl {
	BRTypesetLine *_line;	// 84 = 0x54
}
- (void)dealloc;	// 0x3ab04d
- (void)drawRect:(CGRect)rect;	// 0x3ab0e9
- (void)setLine:(id)line;	// 0x3ab099
@end

