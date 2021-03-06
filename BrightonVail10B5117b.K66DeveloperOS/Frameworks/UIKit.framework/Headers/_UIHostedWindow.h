/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface _UIHostedWindow : UIWindow {
}
@property(readonly, assign) unsigned contextID;	// G=0x3308b1e9; 
- (id)initWithFrame:(CGRect)frame;	// 0x3308b169
- (BOOL)_canPromoteFromKeyWindowStack;	// 0x3308b1e5
- (BOOL)_isWindowServerHostingManaged;	// 0x3308b1e1
- (BOOL)_needsShakesWhenInactive;	// 0x3308b409
- (void)_registerScrollToTopView:(id)topView;	// 0x3308b1fd
- (void)_unregisterScrollToTopView:(id)topView;	// 0x3308b29d
- (void)_updateAppTintView;	// 0x3308b33d
- (void)_updateTransformLayerForClassicPresentation;	// 0x3308b3a5
- (BOOL)_usesWindowServerHitTesting;	// 0x3308b1f9
// declared property getter: - (unsigned)contextID;	// 0x3308b1e9
@end

