/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *generation;	// G=0x366080b9; S=0x366080d5; 
@property(copy, nonatomic) NSString *key;	// G=0x36608125; S=0x36608141; 
@property(copy, nonatomic) NSString *validity;	// G=0x36608191; S=0x366081ad; 
@property(copy, nonatomic) NSString *value;	// G=0x366081fd; S=0x36608219; 
+ (id)anchor;	// 0x36608029
+ (id)anchorWithDictionary:(id)dictionary context:(id)context;	// 0x3660806d
- (id)encodedClassName;	// 0x3660801d
// declared property getter: - (id)generation;	// 0x366080b9
- (id)groupIdentifier;	// 0x3660800d
// declared property getter: - (id)key;	// 0x36608125
// declared property setter: - (void)setGeneration:(id)generation;	// 0x366080d5
// declared property setter: - (void)setKey:(id)key;	// 0x36608141
// declared property setter: - (void)setValidity:(id)validity;	// 0x366081ad
// declared property setter: - (void)setValue:(id)value;	// 0x36608219
// declared property getter: - (id)validity;	// 0x36608191
// declared property getter: - (id)value;	// 0x366081fd
@end

