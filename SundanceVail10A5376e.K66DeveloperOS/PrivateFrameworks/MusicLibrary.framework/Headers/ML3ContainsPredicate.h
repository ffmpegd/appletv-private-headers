/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"


@interface ML3ContainsPredicate : ML3PropertyPredicate {
	id _values;	// 8 = 0x8
}
@property(copy, nonatomic) id values;	// G=0x34847605; S=0x34847619; @synthesize=_values
+ (id)predicateWithProperty:(id)property valueSet:(id)set;	// 0x348470dd
+ (id)predicateWithProperty:(id)property values:(id)values;	// 0x3484707d
- (id)initWithCoder:(id)coder;	// 0x348471b1
- (id)initWithProperty:(id)property values:(id)values;	// 0x3484713d
- (void).cxx_destruct;	// 0x34847629
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x34847439
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x34847519
- (id)description;	// 0x348473a1
- (void)encodeWithCoder:(id)coder;	// 0x3484723d
- (BOOL)isEqual:(id)equal;	// 0x348472c5
// declared property setter: - (void)setValues:(id)values;	// 0x34847619
// declared property getter: - (id)values;	// 0x34847605
@end
