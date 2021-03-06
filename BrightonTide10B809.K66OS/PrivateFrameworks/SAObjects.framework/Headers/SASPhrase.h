/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSArray;

@interface SASPhrase : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *interpretations;	// G=0x353d8ac5; S=0x353d8b41; 
@property(assign, nonatomic) BOOL lowConfidence;	// G=0x353d8ba9; S=0x353d8c21; 
+ (id)phrase;	// 0x353d8a35
+ (id)phraseWithDictionary:(id)dictionary context:(id)context;	// 0x353d8a79
- (id)encodedClassName;	// 0x353d8a29
- (id)groupIdentifier;	// 0x353d8a19
// declared property getter: - (id)interpretations;	// 0x353d8ac5
// declared property getter: - (BOOL)lowConfidence;	// 0x353d8ba9
// declared property setter: - (void)setInterpretations:(id)interpretations;	// 0x353d8b41
// declared property setter: - (void)setLowConfidence:(BOOL)confidence;	// 0x353d8c21
@end

