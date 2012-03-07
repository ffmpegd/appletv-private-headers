/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCAnimationPath;
@protocol MPAnimationSupport;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {
	BOOL _isTriggered;	// 4 = 0x4
	NSObject<MPAnimationSupport> *_parentObject;	// 8 = 0x8
	MCAnimationPath *_animationPath;	// 12 = 0xc
}
@property(retain) MCAnimationPath *animationPath;	// G=0x33472459; S=0x33472e81; converted property
@property(assign) BOOL isTriggered;	// G=0x334704a5; S=0x334704b5; 
@property(retain) id parent;	// G=0x33470551; S=0x33472b35; converted property
+ (id)animationPath;	// 0x334701ed
- (id)init;	// 0x33470231
- (id)initWithCoder:(id)coder;	// 0x334702b9
- (id)animatedKey;	// 0x33472bed
- (id)animatedParent;	// 0x33472b91
// converted property getter: - (id)animationPath;	// 0x33472459
- (void)cleanup;	// 0x33472ef1
- (id)copyWithZone:(NSZone *)zone;	// 0x3347037d
- (void)dealloc;	// 0x33470329
- (id)description;	// 0x334703e5
- (void)encodeWithCoder:(id)coder;	// 0x3347027d
// declared property getter: - (BOOL)isTriggered;	// 0x334704a5
- (id)key;	// 0x33470459
// converted property getter: - (id)parent;	// 0x33470551
- (id)parentDocument;	// 0x33472c69
// converted property setter: - (void)setAnimationPath:(id)path;	// 0x33472e81
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x334704b5
// converted property setter: - (void)setParent:(id)parent;	// 0x33472b35
@end

