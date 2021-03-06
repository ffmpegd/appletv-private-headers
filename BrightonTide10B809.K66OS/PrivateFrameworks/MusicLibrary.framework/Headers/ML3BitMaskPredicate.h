/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"


@interface ML3BitMaskPredicate : ML3PropertyPredicate {
	long long _mask;	// 8 = 0x8
	long long _value;	// 16 = 0x10
}
@property(assign, nonatomic) long long mask;	// G=0x346d8da5; S=0x346b3415; @synthesize=_mask
@property(assign, nonatomic) long long value;	// G=0x346d8dbd; S=0x346b3429; @synthesize=_value
+ (id)predicateWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x346b3329
- (id)initWithCoder:(id)coder;	// 0x346d8ae9
- (id)initWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x346b339d
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x346b34a1
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x346b37c9
- (id)description;	// 0x346d8ce9
- (void)encodeWithCoder:(id)coder;	// 0x346d8b95
- (BOOL)isEqual:(id)equal;	// 0x346d8c41
// declared property getter: - (long long)mask;	// 0x346d8da5
// declared property setter: - (void)setMask:(long long)mask;	// 0x346b3415
// declared property setter: - (void)setValue:(long long)value;	// 0x346b3429
// declared property getter: - (long long)value;	// 0x346d8dbd
@end

