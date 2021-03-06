/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateRemoveElement : CAStateElement {
	NSString *_keyPath;	// 12 = 0xc
	id _object;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *keyPath;	// G=0x3207bc05; S=0x3207bc19; @synthesize=_keyPath
@property(retain, nonatomic) id object;	// G=0x3207bc29; S=0x3207bc39; @synthesize=_object
- (id)initWithCoder:(id)coder;	// 0x3207ba5d
- (void)apply:(id)apply;	// 0x3207b6f1
- (id)copyWithZone:(NSZone *)zone;	// 0x3207b935
- (void)dealloc;	// 0x3207bb09
- (id)debugDescription;	// 0x3207bb6d
- (void)encodeWithCoder:(id)coder;	// 0x3207b9d5
// declared property getter: - (id)keyPath;	// 0x3207bc05
- (BOOL)matches:(id)matches;	// 0x3207b681
// declared property getter: - (id)object;	// 0x3207bc29
// declared property setter: - (void)setKeyPath:(id)path;	// 0x3207bc19
// declared property setter: - (void)setObject:(id)object;	// 0x3207bc39
@end

