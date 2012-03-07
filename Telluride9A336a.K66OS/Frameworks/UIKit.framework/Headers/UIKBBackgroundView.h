/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBBackgroundView : UIView {
@private
	int _visualStyle;	// 48 = 0x30
	NSString *_layoutName;	// 52 = 0x34
	id _geometryCacheKey;	// 56 = 0x38
	CGRect _splitLeft;	// 60 = 0x3c
	CGRect _splitRight;	// 76 = 0x4c
}
- (id)initWithFrame:(CGRect)frame;	// 0x3536267d
- (id)cacheKey;	// 0x35362cfd
- (void)dealloc;	// 0x353626cd
- (void)displayLayer:(id)layer;	// 0x35362dd5
- (void)drawRect:(CGRect)rect;	// 0x353629e1
- (void)refreshStyleForKeyboard:(id)keyboard;	// 0x3536272d
@end

