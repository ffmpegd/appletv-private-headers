/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIScreenMode : NSObject {
@private
	id _mode;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float pixelAspectRatio;	// G=0x32ca6ce9; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x32f9373d; 
+ (id)screenModeForDisplayMode:(id)displayMode;	// 0x32ca681d
- (id)initWithDisplayMode:(id)displayMode;	// 0x32ca68dd
- (id)_displayMode;	// 0x32f937a5
- (BOOL)_isNTSCOrPAL;	// 0x32ca6cbd
- (id)description;	// 0x32f937b5
// declared property getter: - (float)pixelAspectRatio;	// 0x32ca6ce9
// declared property getter: - (CGSize)size;	// 0x32f9373d
@end

