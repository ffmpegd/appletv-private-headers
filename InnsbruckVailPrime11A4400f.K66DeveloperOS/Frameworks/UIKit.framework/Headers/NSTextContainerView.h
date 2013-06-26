/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSTextLayoutOrientationProvider.h"
#import "UIKit-Structs.h"
#import "NSObject.h"


@protocol NSTextContainerView <NSObject, NSTextLayoutOrientationProvider>
@optional
- (CGRect)desiredBoundsForTextContainerSize:(CGSize)textContainerSize;
- (id)linkTextAttributes;
- (void)setNeedsDisplayInRect:(CGRect)rect avoidAdditionalLayout:(BOOL)layout;
- (CGRect)textContainerFrameForBounds:(CGRect)bounds;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)timer;
@end
