/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


__attribute__((visibility("hidden")))
@interface UISoftwareDimmingWindow : UIWindow {
	float _overlayLevel;	// 220 = 0xdc
}
@property(assign, nonatomic) float overlayLevel;	// G=0x2f68c7ed; S=0x2f68c715; @synthesize=_overlayLevel
- (id)initWithFrame:(CGRect)frame;	// 0x2f68c619
- (BOOL)_ignoresHitTest;	// 0x2f68c6b1
// declared property getter: - (float)overlayLevel;	// 0x2f68c7ed
// declared property setter: - (void)setOverlayLevel:(float)level;	// 0x2f68c715
- (void)updateOverlayColor;	// 0x2f68c6b5
@end
