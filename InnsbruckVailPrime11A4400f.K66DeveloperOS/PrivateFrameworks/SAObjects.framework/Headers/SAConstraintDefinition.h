/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAConstraintDefinition : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *supportedValues;	// G=0x326ebbb9; S=0x326ebbd5; 
@property(copy, nonatomic) NSString *type;	// G=0x326ebc25; S=0x326ebc41; 
+ (id)constraintDefinition;	// 0x326ebb29
+ (id)constraintDefinitionWithDictionary:(id)dictionary context:(id)context;	// 0x326ebb6d
- (id)encodedClassName;	// 0x326ebb1d
- (id)groupIdentifier;	// 0x326ebb0d
// declared property setter: - (void)setSupportedValues:(id)values;	// 0x326ebbd5
// declared property setter: - (void)setType:(id)type;	// 0x326ebc41
// declared property getter: - (id)supportedValues;	// 0x326ebbb9
// declared property getter: - (id)type;	// 0x326ebc25
@end

