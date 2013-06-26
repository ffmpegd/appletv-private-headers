/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SAWeatherCondition : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *conditionCode;	// G=0x355b5231; S=0x355b524d; 
@property(assign, nonatomic) int conditionCodeIndex;	// G=0x355b529d; S=0x355b530d; 
+ (id)condition;	// 0x355b51a1
+ (id)conditionWithDictionary:(id)dictionary context:(id)context;	// 0x355b51e5
// declared property getter: - (id)conditionCode;	// 0x355b5231
// declared property getter: - (int)conditionCodeIndex;	// 0x355b529d
- (id)encodedClassName;	// 0x355b5195
- (id)groupIdentifier;	// 0x355b5185
// declared property setter: - (void)setConditionCode:(id)code;	// 0x355b524d
// declared property setter: - (void)setConditionCodeIndex:(int)index;	// 0x355b530d
@end
