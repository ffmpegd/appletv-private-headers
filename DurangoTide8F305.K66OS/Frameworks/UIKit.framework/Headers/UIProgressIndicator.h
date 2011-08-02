/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityIndicatorView.h"
#import "UIKit-Structs.h"


@interface UIProgressIndicator : UIActivityIndicatorView {
}
@property(assign, nonatomic) int progressIndicatorStyle;	// G=0x320ff751; S=0x320ff73d; 
+ (CGSize)size;	// 0x320ff765
// declared property getter: - (int)progressIndicatorStyle;	// 0x320ff751
- (void)setAnimating:(BOOL)animating;	// 0x320ff705
// declared property setter: - (void)setProgressIndicatorStyle:(int)style;	// 0x320ff73d
- (void)setStyle:(int)style;	// 0x320ff729
- (void)startAnimation;	// 0x320ff6f1
- (void)stopAnimation;	// 0x320ff6dd
@end
