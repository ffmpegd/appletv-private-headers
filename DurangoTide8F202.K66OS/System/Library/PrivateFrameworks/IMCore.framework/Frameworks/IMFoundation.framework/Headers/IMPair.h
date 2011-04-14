/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"
#import "NSCopying.h"


@interface IMPair : NSObject <NSCopying> {
	id _first;	// 4 = 0x4
	id _second;	// 8 = 0x8
}
@property(retain) id first;	// G=0x311fd919; S=0x311fd949; @synthesize=_first
@property(retain) id second;	// G=0x311fd931; S=0x311fd975; @synthesize=_second
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x311fd889
- (id)initWithFirst:(id)first second:(id)second;	// 0x311fd8c1
- (id)copyWithZone:(NSZone *)zone;	// 0x311fd825
- (void)dealloc;	// 0x311fd839
// declared property getter: - (id)first;	// 0x311fd919
- (unsigned)hash;	// 0x311fd7e5
- (BOOL)isEqual:(id)equal;	// 0x311fd749
// declared property getter: - (id)second;	// 0x311fd931
// declared property setter: - (void)setFirst:(id)first;	// 0x311fd949
// declared property setter: - (void)setSecond:(id)second;	// 0x311fd975
@end
