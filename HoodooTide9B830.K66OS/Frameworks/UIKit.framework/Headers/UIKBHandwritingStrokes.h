/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface UIKBHandwritingStrokes : NSObject <NSCopying> {
	KBStrokeList *_strokes;	// 4 = 0x4
}
- (id)initWithStrokes:(KBStrokeList *)strokes;	// 0x3031b589
- (id)copyWithZone:(NSZone *)zone;	// 0x3031b73d
- (void)dealloc;	// 0x3031b65d
- (const KBStrokeList *)strokes;	// 0x3031b72d
@end

