/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidate.h"

@class NSString;

@interface UIKeyboardCandidateSingle : UIKeyboardCandidate {
	NSString *_candidate;	// 4 = 0x4
}
@property(readonly, retain) NSString *candidate;	// G=0x306847e5; converted property
- (id)initWithCandidate:(id)candidate;	// 0x30684175
// converted property getter: - (id)candidate;	// 0x306847e5
- (id)copyWithZone:(NSZone *)zone;	// 0x30807e1d
- (void)dealloc;	// 0x30684861
@end
