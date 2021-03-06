/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSExpression;

__attribute__((visibility("hidden")))
@interface NSPropertyTransform : NSObject {
@private
	NSExpression *_valueExpression;	// 4 = 0x4
	NSString *_propertyName;	// 8 = 0x8
	NSPropertyTransform *_prerequisiteTransform;	// 12 = 0xc
	BOOL _replaceMissingValueOnly;	// 16 = 0x10
}
@property(retain, nonatomic) NSPropertyTransform *prerequisiteTransform;	// G=0x34330775; S=0x34330cad; @synthesize=_prerequisiteTransform
@property(retain, nonatomic) NSString *propertyName;	// G=0x34330795; S=0x34330c5d; @synthesize=_propertyName
@property(assign) BOOL replaceMissingValueOnly;	// G=0x34330755; S=0x34330765; @synthesize=_replaceMissingValueOnly
@property(retain, nonatomic) NSExpression *valueExpression;	// G=0x34330785; S=0x34330c85; @synthesize=_valueExpression
- (id)initWithCoder:(id)coder;	// 0x343309ed
- (id)initWithPropertyName:(id)propertyName valueExpression:(id)expression;	// 0x343309ad
- (id)copyWithZone:(NSZone *)zone;	// 0x34330861
- (void)dealloc;	// 0x34330ad5
- (id)description;	// 0x343307a5
- (void)encodeWithCoder:(id)coder;	// 0x34330909
- (BOOL)isEqual:(id)equal;	// 0x34330b61
// declared property getter: - (id)prerequisiteTransform;	// 0x34330775
// declared property getter: - (id)propertyName;	// 0x34330795
// declared property getter: - (BOOL)replaceMissingValueOnly;	// 0x34330755
// declared property setter: - (void)setPrerequisiteTransform:(id)transform;	// 0x34330cad
// declared property setter: - (void)setPropertyName:(id)name;	// 0x34330c5d
// declared property setter: - (void)setReplaceMissingValueOnly:(BOOL)only;	// 0x34330765
// declared property setter: - (void)setValueExpression:(id)expression;	// 0x34330c85
// declared property getter: - (id)valueExpression;	// 0x34330785
@end

