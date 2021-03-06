/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASupportCondition.h"
#import "AceObject.h"

@class NSArray;

@interface SAValueCondition : AceObject <SASupportCondition> {
}
@property(copy, nonatomic) NSArray *legalValues;	// G=0x30500935; S=0x30500951; 
+ (id)valueCondition;	// 0x305008a5
+ (id)valueConditionWithDictionary:(id)dictionary context:(id)context;	// 0x305008e9
- (id)encodedClassName;	// 0x30500899
- (id)groupIdentifier;	// 0x30500889
// declared property getter: - (id)legalValues;	// 0x30500935
// declared property setter: - (void)setLegalValues:(id)values;	// 0x30500951
@end

