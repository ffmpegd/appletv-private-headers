/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString;

@interface MPStateOperation : MPAction {
	NSString *_operation;	// 16 = 0x10
	NSString *_stateKey;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *operation;	// G=0x3200cafd; S=0x3200c8ad; @synthesize=_operation
@property(copy, nonatomic) NSString *stateKey;	// G=0x3200cb11; S=0x3200c919; @synthesize=_stateKey
+ (id)stateOperation;	// 0x3200c715
- (id)init;	// 0x3200c759
- (id)initWithCoder:(id)coder;	// 0x3200c7a5
- (id)copyWithZone:(NSZone *)zone;	// 0x3200ca0d
- (void)dealloc;	// 0x3200c849
- (void)encodeWithCoder:(id)coder;	// 0x3200c985
// declared property getter: - (id)operation;	// 0x3200cafd
- (void)setAction:(id)action;	// 0x3200ca81
// declared property setter: - (void)setOperation:(id)operation;	// 0x3200c8ad
// declared property setter: - (void)setStateKey:(id)key;	// 0x3200c919
// declared property getter: - (id)stateKey;	// 0x3200cb11
@end

