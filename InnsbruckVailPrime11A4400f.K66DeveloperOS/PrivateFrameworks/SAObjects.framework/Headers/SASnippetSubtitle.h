/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SASnippetSubtitle : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *regions;	// G=0x326e1bc5; S=0x326e1c2d; 
@property(copy, nonatomic) NSString *text;	// G=0x326e1c95; S=0x326e1cb1; 
+ (id)snippetSubtitle;	// 0x326e1b35
+ (id)snippetSubtitleWithDictionary:(id)dictionary context:(id)context;	// 0x326e1b79
- (id)encodedClassName;	// 0x326e1b29
- (id)groupIdentifier;	// 0x326e1b19
// declared property getter: - (id)regions;	// 0x326e1bc5
// declared property setter: - (void)setRegions:(id)regions;	// 0x326e1c2d
// declared property setter: - (void)setText:(id)text;	// 0x326e1cb1
// declared property getter: - (id)text;	// 0x326e1c95
@end
