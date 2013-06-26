/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSSQLitePropertyPredicate.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"


@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate <NSCopying> {
	int _comparisonType;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int comparisonType;	// G=0x3550ab71; @synthesize=_comparisonType
@property(readonly, assign, nonatomic) id value;	// G=0x3550ab81; @synthesize=_value
+ (id)predicateWithProperty:(id)property equalToLongLong:(long long)longLong;	// 0x3550a585
+ (id)predicateWithProperty:(id)property equalToValue:(id)value;	// 0x3550a5f1
+ (id)predicateWithProperty:(id)property value:(id)value comparisonType:(int)type;	// 0x3550a615
- (id)SQLForEntityClass:(Class)entityClass;	// 0x3550aa01
- (id)_comparisonTypeString;	// 0x3550aa75
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x3550a745
// declared property getter: - (int)comparisonType;	// 0x3550ab71
- (id)copyWithZone:(NSZone *)zone;	// 0x3550a735
- (void)dealloc;	// 0x3550a6e9
- (unsigned)hash;	// 0x3550a901
- (BOOL)isEqual:(id)equal;	// 0x3550a949
// declared property getter: - (id)value;	// 0x3550ab81
@end
